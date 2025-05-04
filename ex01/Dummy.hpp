#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : ATarget
{
    public:
        Dummy();
        ~Dummy();
        ATarget* clone() const;
};

#endif