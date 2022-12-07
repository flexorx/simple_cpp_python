**Introdution**
This is a simple example of a mixed debugging in c++ and Python (inspired by https://www.youtube.com/watch?v=9q-LHP7cMfg&ab_channel=MichaelVanslembrouck). In the example is Python3.10 used and installed under `c:\python310-64` if you have installed it somewhere else you need to edit it in the `spam.vcxproj` and when you create the venv for the Python project.

***The issue***
It is possible to build and set breakpoints when you start the debugging with the c++ project as startup project (as described in the YouTube tutorial). The issue occurs when you try to do it with the PythonApplication as startup project. The `Enable native code debugging` flag is checked in the Python project. Under Debug\Attach to process...\Attach to: is set to Python (native) code.

(I have tried to use both Python39-64 and Python310-64)

**Repo structure**
The `spam.sln` is the solution file for exampel
The `spam` folder contains the c++ project (`spam.vcxproj`) which builds the `spam` c++ module and output this into the `PythonApplication` folder.
The `PythonApplication` folder contains `PythonApplication.pyproj` and `PythonApplication.py` you need to build a venv in this folder aswell (open a comandpromt in `PythonApplication` folder and type: `c:\python310-64\python.exe -m venv venv`).

