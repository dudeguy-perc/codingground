#ifndef _SOMETHING_H
#define _SOMETHING_H

class Something {
private:
    static unsigned int count;
public:
    const unsigned int id;
    Something():id(count++){};
};


#endif
