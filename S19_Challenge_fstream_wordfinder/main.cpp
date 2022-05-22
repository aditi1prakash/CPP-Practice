#include <iostream>

#include <fstream>

int main ()
{   
    std::string subString, word{};
    int subStringCount{}, wordCount{};
    
    std::size_t found{};

    //Open file and connect it to file stream object
    std::ifstream in_file("romeoandjuliet.txt");

    //Error handling
    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return -1;
    }

    //Read user input
    std::cout << "Enter the substring to search for: ";
    std::cin >> subString;

    //Read each word
    while(in_file >> word)
    {   
        //Count the total number of words
        wordCount++;

        //Search the substring
        found = word.find(subString);

        //Increment substring count when found
        if(found != std::string::npos)
        {
            subStringCount++;
        }
    }

    //Print the result
    std::cout << wordCount << " words were searched..." << std::endl;
    std::cout << "The substring " << subString << " was found " << subStringCount << " times." << std::endl;

    //Close the file
    in_file.close();

    return 0;
}
