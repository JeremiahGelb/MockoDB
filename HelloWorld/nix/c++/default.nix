with import <nixpkgs> {};

gcc10Stdenv.mkDerivation {
  pname = "MockoDB";
  version = "0.1";
  src = ./.;

  buildInputs = [
    pkgs.cmake
    pkgs.cpplint
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
    cp hello $out/bin/
  '';
}
