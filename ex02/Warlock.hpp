#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <string>
#include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook spell_book;

        Warlock();
        Warlock(const Warlock& other);
        Warlock& operator=(const Warlock& other);
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        void introduce();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spell_name);
        void launchSpell(std::string spell_name, ATarget& target);
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string& new_title);
};

#endif