#include "Person.h"

Person::Person()
{
    name = "no name";
    priority = 0;
}

Person::Person(string name, int priority)
{
    this->name = name;
    this->priority = priority;

}

string Person::getName() const
{
    return name;
}

int Person::getPriority() const
{
    return priority;
}

void Person::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Priority: " << priority << endl<< endl;
    
}

bool Person::operator<(const Person& obj) const& // перевантаження оператора <
{
    return this->priority < obj.priority;
}
