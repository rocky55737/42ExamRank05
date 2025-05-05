//TargetGenerator.cpp
#include "ATarget.hpp"
#include "TargetGenerator.hpp"
#include <vector>
#include <string>

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    for(std::vector<ATarget*>::iterator it = target_vector.begin(); it != target_vector.end(); it++)
    {
        delete (*it);
    }
    target_vector.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        target_vector.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(const std::string& target_type)
{
    for(std::vector<ATarget*>::iterator it = target_vector.begin(); it != target_vector.end(); it++)
    {
        if ((*it)->getType() == target_type)
        {
            delete (*it);
            target_vector.erase(it);
            return;
        }
    }
}

ATarget* TargetGenerator::createTarget(const std::string& target_type)
{
    for(std::vector<ATarget*>::iterator it = target_vector.begin(); it != target_vector.end(); it++)
    {
        if ((*it)->getType() == target_type)
        {
            return (*it);
        }
    }
    return nullptr;
}