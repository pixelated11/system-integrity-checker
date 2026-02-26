# What is it?
SIC is an open-source program i made that is used to check and repair corrupt system files. It is perfectly safe, and you can always check the source code.

# Downloading
To download the ready binary that I compiled, check the release page [here](https://github.com/pixelated11/system-integrity-checker/releases). If you aren't confident enough to run the binary i compiled my own, you can compile it yourself.

# Building
To build it, download the resource, manifest, and C++ file all in the same directory. After that, run:
```bash
windres app.rc app.o
```
To build the object file. Inside the resource file, it has the commands to link the .manifest file to the .o file. Then, run
```bash
g++ app.cpp app.o -static -static-libgcc -static-libstdc++ -o sic.exe
```
This will link the manifest to the .cpp file, allowing the program to run as admin automatically (without needing to right-clicking). Your executable file should be in the directory you are working in.

# Contributions
As always, contributions will be very much appreciated. You can e-mail me in itspixelatd@proton.me to request on contributing in the code, or feature a fork. Don't forget to star the repo too if you like!
