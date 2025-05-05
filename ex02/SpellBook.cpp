//SpellBook.cpp
#include "SpellBook.hpp"
#include "ASpell.hpp"
#include <map>

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it = book.begin(); it != book.end(); ++it) {
        delete it->second;
    }
    book.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        book.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void SpellBook::forgetSpell(const std::string& spell_name)
{
    std::map<std::string, ASpell*>::iterator it = book.find(spell_name);
    if (it != book.end())
    {
        delete it->second;
        book.erase(spell_name);
    }
}

ASpell* SpellBook::createSpell(const std::string& spell_name)
{
    std::map<std::string, ASpell*>::iterator it = book.find(spell_name);
    if (it != book.end())
        return it->second->clone();
    return nullptr;
}