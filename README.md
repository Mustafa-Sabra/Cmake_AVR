# Cmake_AVR Project
### Description

In this project we're going to use Cmake to build our project and burn the genetrated executble on the atmega32 microcontroller. The entire development and build process is done without the use of any Integrated Development Environment (IDE), emphasizing a pure command-line approach. Additionally, the CMake build system was created from scratch for this project. CMake is a powerful build system generator that helps manage the build process in a compiler-independent manner, making it easier to handle complex build configurations.

### Dependencies
**CMake**: Depending on whether you choose to use version 3.29 or higher, ensure that CMake is installed on your host machine. If not already installed, you can download and install CMake from the official website.

**Make**: Make sure that the make utility is installed on your host machine. If not, you can install it using your package manager.

**AVR-G++ Compiler**: Install the AVR-G++ compiler on your host machine. After installation, ensure that the path to the compiler is added to the environment variables of your host machine.

### Installation
**1.** In the project directory, remove any existing build files.
using the following commands:
```bash
    cd build
    rm -r *
```
**2.** In the build directory run the following command to generate the build system using CMake:
```bash
    cmake .. -G "MinGW Makefiles"
```
**3.** Run the following command to compile the project and generate the executable file:

```bash
    make
```
**4.** After successful compilation, the executable file will be generated. To burn the executable file onto your target, run the following command:
```bash
    make burn

```

### Usage
1. **Button Control**: After burning the code onto the Atmega32 microcontroller, connect the button to port A, pin 2, and the LED to port A, pin 7. Use the button to toggle the led. Pressing the button will toggle the led between on and off states.

2. **Observing the Led**: As you press the button, observe the led toggling in response. This allows you to visually see the effect of pressing the button on the led.