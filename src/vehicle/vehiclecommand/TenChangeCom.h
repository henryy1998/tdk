//
// Created by fulva on 4/13/19.
//

#ifndef ROBOT_Z_TENCHANGECOM_H
#define ROBOT_Z_TENCHANGECOM_H


#include <behavior/VehicleCommand.h>

class TenChangeCom : public VehicleCommand {
public:
    TenChangeCom(AbstractVehicle &vehicle, String &&identifier, uint8_t &ten);

private:
    uint8_t &ten;

    void execute(AbstractVehicle &vehicle) override;

};


#endif //ROBOT_Z_TENCHANGECOM_H