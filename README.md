# Getting started with unit testing C++ with Catch2

Start by cloning this repository
```
git clone git@gitlab.bit9.local:dheater/quickcatch.git
```

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
