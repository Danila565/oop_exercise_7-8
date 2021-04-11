#pragma once
#include <iostream>

#include "point.h"

struct figure{
    virtual point center() const = 0;
    virtual void print(std::ostream &os) const = 0;
    virtual void help_print(std::ostream &os) const = 0;
    virtual double square() const = 0;
    virtual ~figure() {};
};