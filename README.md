# ImGuiStuff

Scratch pad for testing imgui things.

# Building

On most modern systems, you should be able to do:

```shell
	cmake -G Ninja -B build
	cmake --build build -j9
	ls ./build
```

You can substitute "Ninja" for whatever generator you like. Executables will be in ./build.

If you are using Visual Studio, you *may* need to execute the visual studio dev environment,
but the whole point of using `cmake --build` is to rely on cmake's cache to figure out what
command line to use to do the build, instead of doing it [again] manually.

# Requirements

- Cmake,
- C++20,
- Fetches https://github.com/kfsone/imguiwrap

# Tested on

- Windows 10 Visual Studio 2022 Preview,
- WSL Ubuntu 20.04,
- WSL PengWin,

