#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(const std::string& init_name, const std::string& init_title) : name(init_name), title(init_title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << " !" << std::endl;
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