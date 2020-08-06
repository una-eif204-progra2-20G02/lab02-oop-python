//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(){
    this->firstName="";
    this->lastName="";
    this->documentId=0;
}

/*Person::Person(const string& firstName, const string& lastName, int documentId){
    //REVISAR
    this->firstName=firstName;
    this->lastName=lastName;
    this->documentId=documentId;
}*/

Person::~Person(){

}

string Person::getFirstName(){
    return firstName;
}

void Person::setFirstName(string& firstName){
    this->firstName = firstName;
}

string Person::getLastName(){
    return lastName;
}

void Person::setLastName(string& lastName){
    this-> lastName = lastName;
}

int Person::getDocumentId(){
    return documentId;
}

void Person::setDocumentId(int documentId){
    this->documentId = documentId;
}

double Person::salary(){
 return 0.0;
}

string Person::toString(){
    stringstream s;
    s << "Person" << endl;
    s << "First name: " << firstName << endl;
    s << "Last name;: " << lastName << endl;
    s << "Document Id;: " << documentId << endl;
    return s.str();

}