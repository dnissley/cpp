#ifndef PERSON_H
#define PERSON_H

struct Person
{
    Person() = default;
    Person(const string &a_name, const string &an_address):
        name(a_name), address(an_address) {}

    std::string get_name() const
    {
        return name;
    }

    std::string get_address() const
    {
        return address;
    }

    std::string name;
    std::string address;
}

std::istream& read(std::istream&, Person&);

std::ostream& print(std::ostream&, const Person&);

#endif
