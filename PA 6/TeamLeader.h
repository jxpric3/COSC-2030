#ifndef TEAMLEADER_H 
#define TEAMLEADER_H

#include "ProductionWorker.h"


using namespace std;

class TeamLeader : public ProductionWorker
{
    private: 
        double monthlyBonus; 
        int requiredTrainingHours; 
        int attendedTrainingHours; 
    
    public: 

    TeamLeader(); 
     
};

#endif