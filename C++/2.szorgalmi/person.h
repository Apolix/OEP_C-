#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
    private:
    int _age;
    std::string _name;

    public:
    Person(int a, std::string n);
    int getAge();
    void setAge(int a);
};
#endif // PERSON_H
