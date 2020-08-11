//
// Created by Maikol Guzman on 8/2/20.
//


#include "University.h"


University::University(){
    this->name="";
}

University::University(const string& name){
    this->name=name;
}

University::University(const string &name, const Professor &professor, const Administrative &administrative,const vector<Professor> &professorList, const vector<Administrative> &administrativeList){
    this->name  = name;
    this->professor = professor;
    this->administrative = administrative;
    this->professorList = professorList;
    this->administrativeList = administrativeList;
}
string University::getName(){
    return name;
}

void University::setName(const string &name){
    this->name = name;
}

Professor University::getProfessor(){
    return professor;
}

void University::setProfessor(const Professor &professor){
    this->professor = professor;
}

Administrative University::getAdministrative(){
    return administrative;
}

void University::setAdministrative(const Administrative &administrative){
    this->administrative = administrative;
}

void University::getListProfessor(){
    int i = 0;
    while(i < professorList.size()) {
        cout << professorList.at(i).toString();
        i++;
    }
}

void University::addProfessor(Professor professor){
    professorList.push_back(professor);
}

void University::addAdministrative(Administrative administrative) {
    administrativeList.push_back(administrative);
}

void University::getListAdministrative() {
    int i = 0;
    while(i < administrativeList.size()) {
        cout << administrativeList.at(i).toString();
        i++;
    }
}
