#pragma once
#include <vector>
#include <memory>
#include <iostream>

#include "document.h"
#include "figure.h"
#include "five_angles.h"
#include "six_angles.h"
#include "eight_angles.h"


struct factory{
    void construct(std::unique_ptr<document>& vec);
};
