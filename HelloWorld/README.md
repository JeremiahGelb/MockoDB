I'm using this as a simple sample project to learn cmake, nix, and gtest. I have never used cmake before, so my apologies if something is wacky. Once this is in a good state, I think I will use Jinja to make a template to generate future projects.

Here's what you need to do to reproduce my environment

1. Install Nix

```
sh <(curl -L https://nixos.org/nix/install)
```

2. Run nix-build in the nix/c++ directory
```
nix-build
```

This will build everything, run all the tests, and put the executable in the result folder!

For incremental builds, you can also enter the nix-shell and run the build script

```
nix-shell
./build_and_run.sh
```

