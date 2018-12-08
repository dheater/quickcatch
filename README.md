# Getting started with unit testing C++ with Catch2

## Dependencies
Conan: [Installation instructions](https://docs.conan.io/en/latest/installation.html)

After installing Conan, run the following to install dependencies:
```
conan install -if .conan conanfile.txt
```

## Building
Run the following series of commands to build the application:
```
mkdir build
cd build
cmake ..
make
```

# Running
From the build directory, run:
```
bin/quickcatch
```
