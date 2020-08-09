//
// Created by Maikol Guzman on 8/2/20.
//
#include<iostream>
using namespace std;

#include "Person.h"
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

    University university("University");
    string name1 = "Mike", name2 = "Pedro", lastName1 = "Guzman", lastName2 = "Sanchez";
    string name3 = "Marta", name4 = "Andrea", lastName3 = "Rojas", lastName4 = "Jaramillo";
    //------------------------------------------------------------------------------------------------------------------
    Professor professor1(name1, lastName1, 1234567890, 1575000.00, 5);
    Professor professor2(name2, lastName2, 1286608618, 1050000.00, 5);
    //------------------------------------------------------------------------------------------------------------------
    Administrative administrative1(name3, lastName3, 272923934, 800000.00);
    Administrative administrative2(name4, lastName4, 272923934, 500000.00);
    //------------------------------------------------------------------------------------------------------------------
    university.addProfessor(professor1);
    university.addProfessor(professor2);
    university.addAdministrative(administrative1);
    university.addAdministrative(administrative2);
    //------------------------------------------------------------------------------------------------------------------
    university.getListProfessor();
    cout << endl;
    university.getListAdministrative();
    system("pause");
    return 0;
}