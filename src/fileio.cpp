#include "fileio.h"
#include <fstream>
#include <iostream>

// Read in a file and modify the inputted vector of strings
// Use return value (true/false) to indicate success
bool getData(const std::string& inputLocation, std::vector<std::string>& data)
{
    // TODO: Complete the function
    std::ifstream inputFile(inputLocation);
    if(inputFile.is_open()) {
        //Reading the First line as it is the cypher.
        while(inputFile.eof() != true) {
            //Making a string variable to read the file line by line
            std::string line;
            //Using getline to read the lines
            std::getline(inputFile, line);
            //adding the read line to the end of the vector.
            data.push_back(line);
        }
    }
    else {
        //Error msg if the file doesn't exist or couldn't be found.
        std::cout << "Error: Could not find file.";
    }
    //closing file.
    inputFile.close();
	return true;
}

// Output the vector of strings to the inputted file name
// Use return value (true/false) to indicate success
bool putData(const std::string& outputLocation, const std::vector<std::string>& data)
{
	// TODO: Complete the function
    std::ofstream outputFile(outputLocation);
    //Looping till we reach the end of the vector which has all the data
    for(int i = 0; i < data.size(); i++) {
        //writing the contents of the vector into the file.
        outputFile << data[i] << "\n";
    }
    //closing file.
    outputFile.close();
	return true;
}
