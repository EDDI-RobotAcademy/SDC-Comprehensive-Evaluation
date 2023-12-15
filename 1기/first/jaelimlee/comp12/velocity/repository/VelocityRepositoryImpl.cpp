//
// Created by eddi on 23. 12. 15.
//

#include "VelocityRepositoryImpl.h"
#include "../../mysql/DbProcess.h"

std::shared_ptr<VelocityRepositoryImpl> VelocityRepositoryImpl::instance = nullptr;

VelocityRepositoryImpl::VelocityRepositoryImpl() {
    std::cout << "VelocityRepositoryImpl instance created!" << std::endl;
}

std::shared_ptr<VelocityRepositoryImpl> VelocityRepositoryImpl::getInstance()
{
    if (!instance) {
        std::cout << "Creating new VelocityRepositoryImpl instance" << std::endl;

        instance = std::make_shared<VelocityRepositoryImpl>();

    }

    return instance;
}

Velocity *VelocityRepositoryImpl::save(Velocity *velocity)
{
    DbProcess* dbInstance = DbProcess::getInstance();
    double speed = velocity->get_velocity_speed();
    double direction = velocity->get_velocity_direction();

    std::string queryString = "INSERT INTO velocity_data (velocity_speed, velocity_direction) VALUES \
                          ('" + std::to_string(speed) + "', '" + std::to_string(direction) + "' )";

    dbInstance->insertData(queryString);

    return velocity;
}
