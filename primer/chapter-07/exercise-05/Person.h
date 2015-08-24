#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
    std::string name() const
    {
        return name_;
    }

    std::string address() const
    {
        return address_;
    }

    std::string name_;
    std::string address_;
}

#endif
