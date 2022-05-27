#include <iostream>

#include <fstream>
#include <string>
#include <iomanip>

int main ()
{
    std::fstream out_file{"romeoandjuliet-copy.txt"};
    std::fstream in_file{"romeoandjuliet.txt"};

    if(!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
    }
    if(!out_file)
    {
        std::cerr << "Error opening output file" << std::endl;
    }

    int lineNumber{};
    std::string line{};

    while(getline(in_file, line))
    {
        if (line.size() > 0)
            out_file << std::setw(5) << std::left << ++lineNumber << line << std::endl;
        else
            out_file << line << std::endl;
    }

    return 0;
}