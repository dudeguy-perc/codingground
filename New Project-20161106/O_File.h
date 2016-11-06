#ifndef __OFILE_H_
#define __OFILE_H_
#include <iostream>
#include <fstream>
class O_File
{
private:
    std::fstream fs;
public:
    O_File(const char* path);
    ~O_File();
    void add(const char* add);
    void Display();
};


#endif /*__OFILE_H_*/