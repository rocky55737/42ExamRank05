#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <vector>
#include <string>

class ATarget;

class TargetGenerator
{
    private:
        std::vector<ATarget*> target_vector;
        TargetGenerator(const TargetGenerator& other);
        TargetGenerator& operator=(const TargetGenerator& other);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(const std::string& target_type);
        ATarget* createTarget(const std::string& target_type);
};

#endif