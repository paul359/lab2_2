#pragma once
#include <cstdlib>
#include <iostream>
class Kvad {
public:
 Kvad();
 Kvad(size_t i);
 Kvad(const Kvad& orig);
 Kvad& operator++();
 double Square();
 friend Kvad operator+(const Kvad& left,const Kvad& right);
 friend bool operator==(const Kvad& left,const Kvad& right);
 friend std::ostream& operator<<(std::ostream& os, const Kvad& obj);
 friend std::istream& operator>>(std::istream& is, Kvad& obj);
 Kvad& operator=(const Kvad& right);
 virtual ~Kvad();
private:
 size_t side_a;
};

