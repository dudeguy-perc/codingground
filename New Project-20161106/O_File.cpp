#include "O_File.h"
O_File::O_File(const char* _path)
{
    path = _path;
    //fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
}
O_File::~O_File()
{
    fs.close();
}
void O_File::add(const char* add)
{
    fs.open(path, std::fstream::out|std::fstream::app);
    fs << add;
    fs.close();
}
void O_File::Display()
{
    char c;
    fs.open(path, std::fstream::in);
    while (fs.get(c))
    {
        if (c == '\n')
        {
            std::cout << "New Line" << std::endl;
        } else
        {
            std::cout << (int) c;
            std::cout << "\t" << c;
            std::cout << std::endl;    
        }
        
    }
    fs.close();
    std::cout << "done." <<std::endl;
}
