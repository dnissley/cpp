#ifndef PERSON_H
#define PERSON_H

std::istream& read(std::istream&, Person&);

std::ostream& print(std::ostream&, const Person&);

struct Person
{
    friend std::istream& read(std::istream&, Person&);
    friend std::ostream& print(std::ostream&, const Person&);

public:
    std::string get_name() const
    {
        return name;
    }

    std::string get_address() const
    {
        return address;
    }

private:
    std::string name;
    std::string address;
}

#endif
