#include <iostream>
#include <fstream>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int opt;
    std::string argument;
    while ((opt= getopt(argc, argv, "hcids")) != -1)
    {
        switch (opt)
        {
            case 'i':
                argument = std::string(optarg);
                break;
            default:
            case 'h':
                std::ifstream f("../help.txt");
                if(f.is_open())
                    std::cout<<f.rdbuf();
                f.close();
                return 0;
        }
    }
    return 0;
}
