//
// Created by Maikol Guzman on 8/2/20.
//

#include "Administrative.h"
#include "Professor.h"

#include<iostream>
using namespace std;

int main() {
    //testing

    Person person("Diana", "Fallas", 117770654);
    cout << person.toString() << endl;

    Administrative admin("Esperancita", "Gutierrez", 123456789, 350000);
    cout << admin.toString() << endl;

    Professor profe("Manuel", "Sutano", 123456789, 350000, 156877);
    cout << profe.toString();

}