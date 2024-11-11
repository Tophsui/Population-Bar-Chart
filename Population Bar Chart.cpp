#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("People.txt");

    // Check if file opened successfully
    if (!inputFile) {
        std::cerr << "Error opening file. Please make sure People.txt exists.\n";
        return 1;
    }

    int year, population;

    std::cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    std::cout << "(each * represents 1,000 people)\n\n";

    // Read population data from the file and display the bar chart
    while (inputFile >> year >> population) {
        std::cout << year << " ";

        // Display a bar with one asterisk for each 1,000 people
        for (int i = 0; i < population / 1000; ++i) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    inputFile.close();
    return 0;
}