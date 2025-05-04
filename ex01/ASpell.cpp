#include "ASpell.hpp"

const std::string ASpell::getName() const
{
    return name;
}

const std::string ASpell::getEffects() const
{
    return effects;
}

ASpell::ASpell(std::string& const name, std::string& const effects) : name(name), effects(effects)
{}

ASpell::ASpell()
{}

ASpell::ASpell(const ASpell& other)
{
    *this = other;
}

ASpell& ASpell::operator=(const ASpell& other)
{
    if(this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

ASpell::~ASpell()
{}