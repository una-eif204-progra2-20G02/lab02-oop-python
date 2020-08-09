//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor :public Person {
private:
    double monthlySalary;
    double commissionRate;
public:
    Professor();
    Professor(double monthlySalary, double commissionRate);
    Professor(const string& firstName, const string& lastName, int documentId, double monthlySalary, double commissionRate);
    virtual ~Professor();
    void setMonthlySalary(double);
    double getMonthlySalary();
    void setCommissionRate(double);
    double getCommissionRate();
    double salary() const override;
    string toString() const override;




};

#endif //LAB02_OOP_PROFESSOR_H
