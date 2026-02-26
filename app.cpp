#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
using namespace std;
int main() {
    cout << "Starting the System Integrity Checker... \n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "Running system file checker... \n" << std::endl;
    // Execute the command
    int result0 = system("sfc.exe /scannow");

    if (result0 == 0) {
        cout << "sfc command executed successfully. \n" << endl;
    } else {
        cout << "sfc command failed or encountered an issue." << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "Starting DISM scan... Make sure your PC is connected to the internet. \n";
    int result1 = system("dism.exe /Online /Cleanup-Image /RestoreHealth");

    if (result1 == 0) {
        cout << "DISM scan done. Exiting program... \n";
    } else {
        cout << "DISM command failed. Exiting... \n";
    }
    // Keep the console window open until a key is pressed
    system("pause");
    return 0;
}
