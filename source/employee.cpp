#include <iostream>
#include "employee.h"

Employee::Employee(Task inTask, Team* inTeam, uint16_t inID)
                  : task(inTask), team(inTeam), employee_id(inID)
{

}

void Employee::setTask(uint16_t numbTask)
{
    task = static_cast<Task>(numbTask);
}

Task Employee::getTask()
{
    return task;
}

Employee::~Employee()
{

}