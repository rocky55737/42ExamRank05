#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include "ASpell.hpp"

class ATarget
{
    protected:
        std::string type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget(const ATarget &other);
        ATarget& operator=(const ATarget& other);

        const std::string& getType() const;
        virtual ATarget* clone() const = 0;
        ATarget(const std::string& type);
        void getHitBySpell(const ASpell& spell) const;
};

#endif