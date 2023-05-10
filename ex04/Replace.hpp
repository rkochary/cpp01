#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
    public:
        Replace(std::string,std::string,std::string);
        void replaceStr();

    private:
        std::ifstream infile;
        std::ofstream outfile;
        std::string s1;
        std::string s2;
        std::string fileName;
};

#endif