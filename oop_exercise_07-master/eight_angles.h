#pragma once

#include <iostream>
#include "figure.h"

struct eight_angles : figure{

    eight_angles(std::istream &is);

    point center() const override;
    void print(std::ostream &os) const override;
    void help_print(std::ostream &os) const override;
    double square() const override;
private:
    point one,two,three,four,five,six,seven,eight;
};
