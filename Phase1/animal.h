#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

/*Animal class*/
class Animal{
public:
    Animal(std::string);
    virtual ~Animal() {}

    friend std :: ostream& operator<<(std ::ostream& os, const Animal &a);

protected:
    virtual void print(std::ostream&) const = 0;

private:
    std::string m_name;
};

inline Animal :: Animal(std::string name): m_name(name){}

inline std :: ostream& operator<< (std :: ostream& os, const Animal &a){
    a.print(os);
    return os;
}

#endif
