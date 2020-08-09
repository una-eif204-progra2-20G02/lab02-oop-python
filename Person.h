//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
using namespace std;
/**
 * Abstract Class of Person
 */
class Person {
private:
    string firstName;
    string lastName;
    int documentId;
public:
    Person();
    Person(const string& firstName, const string& lastName, int documentId);
    virtual ~Person();
    string getFirstName();
    void setFirstName(string& firstName);
    string getLastName();
    void setLastName(string& lastName);
    int getDocumentId();
    void setDocumentId(int documentId);
    virtual double salary() const = 0;
    virtual string toString() const;

    
};


#endif //LAB02_OOP_PERSON_H
