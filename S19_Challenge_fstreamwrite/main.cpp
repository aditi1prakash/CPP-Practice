#include <iostream>

#include <fstream>
#include <string>
#include <iomanip>

int main ()
{   
    // Associate stream object to input and output files
    std::fstream out_file{"romeoandjuliet-copy.txt"};
    std::fstream in_file{"romeoandjuliet.txt"};

    // Error handling
    if(!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
    }
    if(!out_file)
    {
        std::cerr << "Error opening output file" << std::endl;
    }

    // local variables
    int lineNumber{};
    std::string line{};

    // Read each line, format, and copy
    while(getline(in_file, line))
    {
        if (line.size() > 0)    // or - if(line != "")
            out_file << std::setw(5) << std::left << ++lineNumber << line << std::endl;
        else
            out_file << line << std::endl;
    }

    // Close file streams
    in_file.close();
    out_file.close();

    return 0;
}