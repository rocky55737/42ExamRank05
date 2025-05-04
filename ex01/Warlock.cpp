#include "Warlock.hpp"
#include <iostream>


Warlock::Warlock(std::string& name, std::string& title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell*>::iterator it = learned_spells.begin(); it != learned_spells.end(); ++it) {
        delete it->second;
    }
    learned_spells.clear();
}

void introduce();

void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
        this->learned_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void Warlock::forgetSpell(std::string spell_name)
{
    std::map<std::string, ASpell*>::iterator it = learned_spells.find(spell_name);
    if (it != learned_spells.end())
    {
        delete it->second;
        learned_spells.erase(spell_name);
    }
}

void Warlock::launchSpell(std::string spell_name, ATarget& target)
{
    ASpell* spell = learned_spells[spell_name];
    if (spell)
        spell->launch(target);
}

void Warlock::introduce()
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}