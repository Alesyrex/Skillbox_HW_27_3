#include <iostream>
#include "company.h"

int main() {
    Company* company = new Company();

    while (!company->allBusy)
    {
        company->setBossID();

        distributionTask(company);
    }

    std::cout << "All employees have tasks!" << std::endl;
    delete company;
    company = nullptr;
    return 0;
}
