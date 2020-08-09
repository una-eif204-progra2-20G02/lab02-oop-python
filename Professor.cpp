//
// Created by Maikol Guzman on 8/2/20.
//
#include "Professor.h"

Professor::Professor(){
    this->monthlySalary = 0.0;
    this->commissionRate = 0.0;
}

Professor::Professor(double monthlySalary, double commissionRate) {
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;
}

Professor::Professor(const string& firstName, const string& lastName, int documentId, double monthlySalary, double commissionRate) : Person (firstName, lastName, documentId){
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;
}

Professor::~Professor(){

}

void Professor::setMonthlySalary(double monthlySalary){
    this->monthlySalary = monthlySalary;
}

double Professor::getMonthlySalary(){
    return monthlySalary;
}

void Professor::setCommissionRate(double commissionRate){
    this->commissionRate = commissionRate;
}

double Professor::getCommissionRate(){
    return commissionRate;
}

double Professor::salary() const{
    return monthlySalary+commissionRate;
}

string Professor::toString() const{
    stringstream s;
    s << "Professor Information:\n" << Person::toString() << "Monthly Salary: " << salary() << endl;
    return s.str();
}
