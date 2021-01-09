with import <nixpkgs> {};

gcc10Stdenv.mkDerivation {
  pname = "HelloWorld";
  version = "0.1";
  src = ./.;

  buildInputs = [
    pkgs.cmake
    pkgs.valgrind
    pkgs.cpplint
    pkgs.gtest
  ];

  configurePhase = ''
    cpplint --exclude=_build/* --recursive modules
    cpplint --exclude=_build/* --recursive app
    cpplint --exclude=_build/* --recursive test
    cmake .
  '';

  buildPhase = ''
    make
    CTEST_OUTPUT_ON_FAILURE=1 ctest -T memcheck
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp apps/HelloWorld/hello_world $out/bin/
  '';
}
