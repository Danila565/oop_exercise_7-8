#pragma once
#include <iostream>

struct point{
    double x,y;
};

std::istream& operator>>(std::istream& is, point& p);
std::ostream& operator<<(std::ostream& os,const point& p);
point operator+(point x1,point x2);
point& operator/= (point& x1, int number);
