{ pkgs ? import <nixpkgs> {} }:

pkgs.python3Packages.buildPythonApplication {
  pname = "TheBareNecessities";
  srcs = [./. ./templates];
  version = "0.1";
  propagatedBuildInputs = [ pkgs.python3Packages.jinja2 ];
}