#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget()
{}

ATarget::~ATarget()
{}

ATarget::ATarget(const ATarget &other)
{
    *this = other;
}

ATarget& ATarget::operator=(const ATarget& other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}

const std::string& ATarget::getType() const
{
    return type;
}

ATarget::ATarget(const std::string& type): type(type)
{}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}