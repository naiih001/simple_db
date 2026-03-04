# Simple Database Project

This project provides a basic example of a simple database implementation in C.

## Table of Contents
- [Setup](#setup)
- [How to Run](#how-to-run)
- [How to Test](#how-to-test)
- [Project Structure](#project-structure)
- [Contributing](#contributing)

## Setup
To build and run this project, you will need:
- A C compiler (e.g., GCC, Clang)
- Meson build system
- Ninja build system

On Debian/Ubuntu-based systems, you can install these using your package manager:
```bash
sudo apt-get install build-essential meson ninja-build
```
On Fedora-based systems:
```bash
sudo dnf install gcc meson ninja-build
```
On macOS with Homebrew:
```bash
brew install meson ninja
```

## How to Run
To compile and run the main application:

1. Clone the repository (if you haven't already).
2. Navigate to the project root directory.
3. Configure the Meson build:
   ```bash
   meson setup build
   ```
4. Compile the project using Ninja:
   ```bash
   ninja -C build
   ```
5. Execute the compiled program:
   ```bash
   ./build/simple_db
   ```

## How to Test
To compile and run the unit tests:

1. Navigate to the project root directory.
2. If you haven't already, configure the Meson build and compile the project:
   ```bash
   meson setup build
   ninja -C build
   ```
3. Run the tests using Meson:
   ```bash
   meson test -C build
   ```

## Project Structure

- `src/`: Contains the primary source code files for the simple database.
- `include/`: Contains header files for the project.
- `tests/`: Contains unit tests for the project, using the MinUnit framework.
- `build/`: This directory is created by Meson and contains the compiled executables and build artifacts.

## Contributing
We welcome contributions to this project! To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes, adhering to the existing coding style.
4. Ensure all tests pass and add new tests for new functionality.
5. Submit a pull request with a clear description of your changes.
