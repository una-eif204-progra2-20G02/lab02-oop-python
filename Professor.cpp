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

double Professor::salary(){
    return 0.0;
}

string Professor::toString(){
    stringstream s;
    s << "Professor" << endl;
    s << Person::toString();
    s << "Monthly salary: " << monthlySalary << endl;
    s << "Commission rate: " << commissionRate << endl;

    return s.str();
}
