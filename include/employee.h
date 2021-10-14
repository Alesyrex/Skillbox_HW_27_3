#pragma once
#ifndef SKILLBOX_HW_27_3_EMPLOYEE_H
#define SKILLBOX_HW_27_3_EMPLOYEE_H

enum Task
{
    A = 1,
    B,
    C,
    NONE
};

class Employee
{
    uint16_t employee_id;
    class Team* team = nullptr;
    Task task;
public:
    Employee(Task inTask, Team* inTeam, uint16_t inID);
    ~Employee();
    void setTask (uint16_t numbTask);
    Task getTask ();
};

#endif //SKILLBOX_HW_27_3_EMPLOYEE_H
