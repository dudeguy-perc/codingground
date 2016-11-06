#include "O_File.h"
O_File::O_File(const char* path)
{
    fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
}
O_File::~O_File()
{
    fs.close();
}
void O_File::add(const char* add)
{
    if (fs.is_open())
    {
        std::cout << "File is open appending: " << add << std::endl;
    }
    fs << add;
}
void O_File::Display()
{
    char c;
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
    std::cout << "done." <<std::endl;
}