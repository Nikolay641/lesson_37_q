#pragma once
#include<string>
#include<iostream>
using namespace std;

class AudioRecord
{

	string name;
	string singer;
	int year;

public:
	AudioRecord();
	AudioRecord(string name, string singer, int year);
	string getName()const;
	string getSinger()const;
	int getYear()const;


	void shouInfo()const;
};

