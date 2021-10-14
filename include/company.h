#pragma once
#include <vector>
#include <iostream>
#include "employee.h"
#ifndef SKILLBOX_HW_27_3_COMPANY_H
#define SKILLBOX_HW_27_3_COMPANY_H

class Team
{
    uint16_t supervisor_id;
    uint16_t numberEmployers;

public:
    std::vector<Employee*> employers;
    Team(uint16_t inEmployee_id);
    ~Team();
    uint16_t getSupervisorId ();
    uint16_t getNumberEmployers ();
    uint16_t numberTasks;
};

class Company
{
    uint16_t boss;
    uint16_t numberTeams;


public:
    Company();
    ~Company();
    void setBossID ();
    uint16_t getBossID ();
    std::vector<Team*> groups;
    uint16_t getNumberTeams();
};

void distributionTask (Company* company);

#endif //SKILLBOX_HW_27_3_COMPANY_H
