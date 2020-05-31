#ifndef __IBIRD_H__
#define __IBIRD_H__

class Ibird{
public:
    virtual unsigned short int getHeight() const = 0;
    virtual unsigned char getWingSpan() const = 0;
};

#endif