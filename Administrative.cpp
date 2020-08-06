//
// Created by Maikol Guzman on 8/2/20.
//

#include "Administrative.h"

Administrative::Administrative()
{
    monthlySalary = 0.0;
}

Administrative::Administrative(double monthlySalary)
{
    this->monthlySalary = monthlySalary;
}

Administrative::Administrative(const string &firstName, const string &lastName, int documentId, double monthlySalary) : Person (firstName, lastName, documentId)
{
    this->monthlySalary = monthlySalary;
}

string Administrative::toString()
{
    stringstream s;
    s << "Administrative" << endl;
    s << Person::toString();
    s << "Monthly salary: " << monthlySalary << endl;
    return s.str();
}

void Administrative::setMonthlySalary(double monthlySalary)
{
    this->monthlySalary = monthlySalary;
}

double Administrative::getMonthlySalary()
{
    return monthlySalary;
}

double Administrative::salary()
{
    return 0.0;

}