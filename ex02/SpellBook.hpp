#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>
#include <string>

class ASpell;

class SpellBook
{
    private:
        std::map<std::string, ASpell*> book;
        SpellBook(const SpellBook& other);
        SpellBook& operator=(const SpellBook& other);

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string& spell_name);
        ASpell* createSpell(const std::string& spell_name);
};

#endif