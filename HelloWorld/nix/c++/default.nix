with import <nixpkgs> {};

gcc10Stdenv.mkDerivation {
  pname = "MockoDB";
  version = "0.1";
  src = ./.;

  buildInputs = [
    pkgs.cmake
    pkgs.cpplint
    pkgs.gtest
  ];

  configurePhase = ''
    cpplint *.*pp
    cmake .
  '';

  buildPhase = ''
    make
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp apps/HelloWorld/hello_world $out/bin/
  '';
}
