#include <iostream>
#include "Something.h"
//using std::cout;
//using std::endl;

int main()
{
    const Something s;
    Something s1;
    Something* s2;
    Something& s3 = s1;
    const Something* s4 = new Something(); // s4 is pointing to Something that is const
   std::cout << "s: "<< s.id 
            << "\ts1: " << s1.id
            << "\ts2: " << s2->id
            << "\ts3 (s1 alias): " << s3.id
            << "\ts4 (const new Something): " << s4->id << std::endl;

   s2 = new Something();
   Something* const s5 = s2; // s5 is a const pointing to a Something
   std::cout << "s1: " << s1.id << "\ts2: " << s2->id << "\ts3 (s1 alias): " << s3.id << std::endl;
   
   std::cout << "s2 change: " << s2->change << "\ts5 change: " << s5->change << std::endl;
    s5->change = 20;
   std::cout << "s2 change: " << s2->change << "\ts5 change: " << s5->change << std::endl;
   return 0;
}

