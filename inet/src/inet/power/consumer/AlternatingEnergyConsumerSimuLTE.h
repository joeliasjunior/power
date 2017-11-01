#ifndef __INET_ALTERNATINGENERGYCONSUMERSIMULTE_H
#define __INET_ALTERNATINGENERGYCONSUMERSIMULTE_H

//#include "inet/power/contract/IEnergyConsumer.h"
//#include "inet/power/contract/IEnergySource.h"

#include "inet/power/consumer/AlternatingEnergyConsumer.h"

namespace inet {

namespace power {

class AlternatingEnergyConsumerSimuLTE : public AlternatingEnergyConsumer {
    protected:
        bool isTransmitting=false;
        W transmittingPowerConsumption;

    protected:
        virtual void updatePowerConsumption() override;
};

} // namespace power

} // namespace inet

#endif
