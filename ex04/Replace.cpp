#include "Replace.hpp"

Replace::Replace(std::string file,std::string first,std::string second)
{
    fileName = file;
    s1 = first;
    s2 = second;
}

void Replace::replaceStr() const
{
    std::ifstream infile(fileName.c_str());
    std::ofstream outfile(fileName+ ".replaced");
    std::string content;
    int    pos = 0;
    std::string result;
    std::string line;
    if (!infile.is_open())
    {
        std::cerr <<" ERROR: No such file or directory !" << std::endl;
        exit(1);
    }
        while(getline(infile, line)) 
            result += line + '\n'; 
        for (int i = 0; result[i] != '\0'; i++)
        {
            pos = result.find(s1, pos);
            if (pos == -1)
                break;
            result.erase(pos, s1.length());
            result.insert(pos, s2);
            pos += s2.length() - 1;
        }
        outfile << result << std::endl;
}