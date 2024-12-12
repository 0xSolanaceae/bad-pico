#include <iostream>
#include <fstream>

int main() {
    std::ofstream duckyFile("ls_dir.dd");

    if (duckyFile.is_open()) {
        duckyFile << "DELAY 1000\n";
        duckyFile << "GUI r\n";
        duckyFile << "DELAY 500\n";
        duckyFile << "STRING cmd\n";
        duckyFile << "ENTER\n";
        duckyFile << "DELAY 1000\n";
        duckyFile << "STRING dir C:\\\n";
        duckyFile << "ENTER\n";
        duckyFile.close();
        std::cout << "DuckyScript file generated successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    return 0;
}