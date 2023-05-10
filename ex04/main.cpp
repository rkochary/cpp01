#include "Replace.hpp"


int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    Replace a(argv[1],argv[2],argv[3]);
    a.replaceStr();
    return (0);
}