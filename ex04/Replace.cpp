#include "Replace.hpp"
using namespace std;

Replace::Replace(std::string file,std::string first,std::string second)
{
    fileName = file;
    s1 = first;
    s2 = second;
}

void Replace::replaceStr()
{
    ifstream infile(fileName.c_str());
    ofstream outfile(fileName+ ".replaced");
    std::string content;
    int    pos = 0;
    string result;
    string line;
    if (!infile.is_open())
    {
        std::cerr <<" ERROR: No such file or directory !" << std::endl;
        exit(1);
    }
    // if (getline(infile, content, '\0'))
    // {
        while(getline(infile, line)) // allowed?
            result += line + '\n'; // uxxel
        for (int i = 0; result[i] != '\0'; i++)
        {
            pos = result.find(s1, pos);
            if (pos == -1)
                break;
            result.erase(pos, s1.length());
            result.insert(pos, s2);
            pos += s2.length() - 1;
        }
        outfile << result << endl;
    // }
    // else
    // {
    //     std::cerr << " ERROR: File is empty !" << std::endl;
    //     infile.close();
    //     exit (2);
    // }
}