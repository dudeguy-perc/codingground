#ifndef _SOMETHING_H
#define _SOMETHING_H

class Something {
private:
    static unsigned int count;
public:
    unsigned int change;
    const unsigned int id;
    Something():id(count++),change(0){};
};


#endif
