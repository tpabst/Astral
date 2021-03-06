#ifndef LOGIC_I_CHRONOMETER_H
#define LOGIC_I_CHRONOMETER_H

#include "Units.h"

class IChronometer
{
    public:
        IChronometer() {}
        virtual ~IChronometer() {}
        virtual void restart() = 0;
        virtual TimeQuantity count() const = 0;
};

#endif

