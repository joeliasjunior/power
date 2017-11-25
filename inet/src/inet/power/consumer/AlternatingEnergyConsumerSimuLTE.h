#ifndef __INET_ALTERNATINGENERGYCONSUMERSIMULTE_H
#define __INET_ALTERNATINGENERGYCONSUMERSIMULTE_H

//#include "inet/power/contract/IEnergyConsumer.h"
//#include "inet/power/contract/IEnergySource.h"

#include "inet/power/consumer/AlternatingEnergyConsumer.h"
#include <stdio.h>
#include "inet/common/NotifierConsts.h"

namespace inet {

namespace power {

class AlternatingEnergyConsumerSimuLTE : public AlternatingEnergyConsumer {
    protected:
        bool isTransmitting=NF_INTERFACE_STATE_CHANGED;
        //bool isTransmitting=true;
        W transmittingPowerConsumption;
        W tmp1;

    protected:
        virtual void updatePowerConsumption() override;
};

} // namespace power

} // namespace inet

#endif
