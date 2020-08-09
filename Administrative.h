//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"
#include <iostream>
#include <sstream>
class Administrative: public Person {
private:
    double monthlySalary;

public:
    Administrative();
    explicit Administrative(double monthlySalary);
    Administrative(const string& firstName, const string& lastName, int documentID, double monthlySalary);
    double getMonthlySalary();
    void setMonthlySalary(double monthlySalary);
    double salary() const;
    string toString();

};


#endif //LAB02_OOP_ADMINISTRATIVE_H