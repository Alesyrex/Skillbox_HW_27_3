#include <iostream>
#include "company.h"

int main() {
    Company* company = new Company();

    while (true)
    {
        company->setBossID();

        distributionTask(company);
    }

    std::cout << "All employees have tasks!" << std::endl;
    return 0;
}
