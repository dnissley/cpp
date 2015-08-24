#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include "Person.h"

using std::istream;
using std::ostream;
using std::endl;

istream& read(istream &is, Person &person)
{
    is >> person.name;
    return getline(is, person.address);
}

ostream& print(ostream &os, const Person &person)
{
    os << person.get_name() << endl << person.get_address() << endl;
    return os;
}

