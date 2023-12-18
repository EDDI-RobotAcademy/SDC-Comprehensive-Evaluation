//
// Created by eddi on 23. 12. 15.
//

#include "VelocityRepositoryImpl.h"

#include <iostream>

VelocityRepositoryImpl VelocityRepositoryImpl::instance;

VelocityRepositoryImpl& VelocityRepositoryImpl::getInstance() {
    return instance;
}

void VelocityRepositoryImpl::check() {
    std::cout << "Checking velocity repository" << std::endl;
}
