//
// Created by Maikol Guzman on 8/2/20.
//


#include "University.h"

University::University() {

}

University::University(const string &name) {

}

University::University(const string &name, const Professor &professor, const Administrative &administrative,
                       const vector<Professor> &professorList, const vector<Administrative> &administrativeList) {

}

string University::getName() {
    return std::string();
}

void University::setName(const string &name) {

}

Professor University::getProfessor() {
    return Professor();
}

void University::setProfessor(const Professor &professor) {

}

Administrative University::getAdministrative() {
    return Administrative();
}

void University::setAdministrative(const Administrative &administrative) {

}

void University::addAdministrative(Administrative) {

}

void University::getListAdministrative() {

}

void University::addProfessor(Professor) {

}

void University::getListProfessor() {

}
