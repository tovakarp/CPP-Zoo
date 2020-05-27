#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal{
public:
    Animal(const std::string);
    virtual ~Animal() {}

	const std::string& getName() const;
	virtual std::string getSpecies() const = 0;
	virtual unsigned char getLifeExpectancy() const = 0;
	virtual std::string getContinents() const = 0;
	virtual std::string getFood() const = 0;
	virtual unsigned char getSpeed() const = 0;

    friend std :: ostream& operator<<(std ::ostream& os, const Animal &a);

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
