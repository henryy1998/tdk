//
// Created by fulva on 4/12/19.
//

#ifndef ROBOT_Z_VEHICLECOMMAND_H
#define ROBOT_Z_VEHICLECOMMAND_H


#include "Command.h"

class VehicleCommand : public Command {
public:
    explicit VehicleCommand(CommandRegistry ident) : Command(ident) {
    }
};


#endif //ROBOT_Z_VEHICLECOMMAND_H
