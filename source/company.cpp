#include <iostream>
#include "company.h"

Team::Team(uint16_t inEmployee_id) : supervisor_id(inEmployee_id)
{
    do
    {
        std::cout << "Enter the number of employees in the team-" << supervisor_id << ":";
        std::cin >> numberEmployers;
        if (numberEmployers <= 0) std::cout << "Incorrect input data. Try again." << std::endl;
    } while (numberEmployers <= 0);

    for (int i=0;i < numberEmployers;++i)
    {
        Employee* employee = new Employee(NONE,this,i+1);
        employers.push_back(employee);
    }
}

uint16_t Team::getSupervisorId()
{
    return supervisor_id;
}

uint16_t Team::getNumberEmployers()
{
    return numberEmployers;
}
Team::~Team()
{

}

Company::Company() : boss(0), numberTeams(0)
{
    do
    {
        std::cout << "Enter the number of teams:";
        std::cin >> numberTeams;
        if (numberTeams <= 0) std::cout << "Incorrect input data. Try again." << std::endl;
    } while (numberTeams <= 0);

    for (int i=0;i < numberTeams;++i)
    {
        Team* team = new Team(i+1);
        groups.push_back(team);
    }
}

void Company::setBossID()
{
    uint16_t id;
    do
    {
        std::cout << "Define the task to subordinates (enter an integer):";
        std::cin >> id;
        if (id <= 0) std::cout << "Incorrect input data. Try again." << std::endl;
    } while (id <= 0);
    boss = id;
}

uint16_t Company::getBossID()
{
    return boss;
}

uint16_t Company::getNumberTeams()
{
    return numberTeams;
}

Company::~Company()
{
    
}

void distributionTask (Company* company)
{
    for (int i=0;i < company->getNumberTeams();i++)
    {
        srand(company->getBossID()+company->groups[i]->getSupervisorId());
        company->groups[i]->numberTasks = rand() % company->groups[i]->getNumberEmployers() + 1;

        for (int j=0;(company->groups[i]->numberTasks != 0) && (j < company->groups[i]->getNumberEmployers());++j)
        {

            if (company->groups[i]->employers[j]->getTask() == NONE)
            {
                company->groups[i]->employers[j]->setTask(rand()%3+1);
                std::cout << company->groups[i]->numberTasks--;
            }
        }
    }
}

