#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
	string name;
	int priority;

public:
	Person();

	Person(string name, int priority);

	string getName()const;
	int getPriority()const;

	void showInfo()const;

	bool operator< (const Person& obj)const&; // перевантаження оператора <

};

