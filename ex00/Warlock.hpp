#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock(); //삭제
        Warlock(const Warlock& warlock_copy); //삭제
        Warlock& operator=(const Warlock&); //삭제
    public:
        Warlock(const std::string& init_name, const std::string& init_title);
        ~Warlock();
        
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string& new_title);
        void introduce() const;
};

#endif
