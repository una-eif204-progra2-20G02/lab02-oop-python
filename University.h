//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
#include<iostream>
#include<sstream>
using namespace std;

class University {
private:
    string name;
    Professor professor;
    Administrative administrative;
    vector<Professor> professorList;
    vector<Administrative> administrativeList;

public:

    University();
    explicit University(const string& name);
    University(const string &name, const Professor &professor, const Administrative &administrative,const vector<Professor> &professorList, const vector<Administrative> &administrativeList);

    string getName();
    void setName(const string &name);

    Professor getProfessor();
    void setProfessor(const Professor &professor);

    Administrative getAdministrative();
    void setAdministrative(const Administrative &administrative);

    void addAdministrative(Administrative);
    void getListAdministrative(); //punteros?

    void addProfessor(Professor);
    void getListProfessor(); //punteros?





};


#endif //LAB02_OOP_UNIVERSITY_H
