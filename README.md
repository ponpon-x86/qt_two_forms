# qt_two_forms

This project is a small Qt application developed as a test task. It demonstrates basic form handling in Qt:
- the first form contains a button that opens a second form (inherited from QDialog);
- the second form creates a text document with the message "Миру мир!" and then closes the application.

## Table of Contents

- [Build Details](#build-details)
- [Installation](#installation)
- [Usage](#usage)

## Build Details

- written in C++;
- uses CMake *(version 3.5+ recommended)*;
- tested on Windows;
- uses Qt.

> **_NOTE:_** The project has been tested on Windows. While it should be portable to Linux/macOS (since it uses Qt and CMake), it has not been explicitly verified on those platforms.

## Installation

Follow the instructions below to build the project on your platform.

### Prerequisites

- Make sure `cmake` and a C++ compiler are installed. If not:
  -  Install `cmake` and either `MinGW` or `Visual Studio` from official sources
- It is advised you have both `Qt` and `Qt Creator` installed. If not, download latest version of `Qt` from official source

#### Qt Creator
1. Download the repository from website or, if you have git installed, clone it in the Command Prompt:

   ```bash
   git clone https://github.com/ponpon-x86/qt_two_forms
   ```
3. Open the CMakeLists.txt in Qt Creator. Go to File -> Open File or Project... -> choose CMakeLists.txt in project's root directory.
4. Build the project (Debug or Release).
5. Launch the app from Qt Creator.

> **_NOTE:_** If you want to *just build it, but run later*, Qt Creator will probably create a build folder outside of project's root directory. From the project's root directory, go up a level in your File Explorer, go into the build folder, to /src. There should be an executable. To add all the missing .dlls to it, use windeployqt. You can find it at C:\\Qt\\*version*\\*compiler*\\bin. Open CMD, and run windeployqt on your executable created by Qt Creator.

## Usage

1. Run the application.
2. In the first form, click the button to open the second form.
3. The second form generates a text document containing "Миру мир!" and then exits.
