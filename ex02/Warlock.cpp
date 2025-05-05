//Warlock.cpp
#include "Warlock.hpp"
#include "SpellBook.hpp"
#include <iostream>


Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
    
}

void Warlock::learnSpell(ASpell* spell)
{
    spell_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell_name)
{
    spell_book.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget& target)
{
    ASpell* spell = spell_book.createSpell(spell_name);
    if (spell)
    {
        spell->launch(target);
    }
}

void Warlock::introduce()
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

const std::string& Warlock::getName() const
{
    return name;
}

const std::string& Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(const std::string& new_title)
{
    title = new_title;
}