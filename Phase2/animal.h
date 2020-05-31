#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include "ianimal.h"

class Animal: public Ianimal{
public:
    Animal(const std::string);
    virtual ~Animal() {}

	const std::string& getName() const;

    friend std::ostream& operator<<(std ::ostream& os, const Animal &a);

protected:
    virtual void print(std::ostream&) const = 0;

private:
    const std::string m_name;
};

inline Animal :: Animal(const std::string name): m_name(name){}

inline std :: ostream& operator<< (std :: ostream& os, const Animal &a){
    a.print(os);
    return os;
}

#endif
