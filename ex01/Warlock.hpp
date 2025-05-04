#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <string>
#include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell*> learned_spells;

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
};

#endif