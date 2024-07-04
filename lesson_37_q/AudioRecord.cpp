#include "AudioRecord.h"

AudioRecord::AudioRecord()
{
    name = "undefind";
    singer = "undefind";
    year = 0;
}

AudioRecord::AudioRecord(string name, string singer, int year)
{
    this->name = name;
    this->singer = singer;
    this->year = year;

}

string AudioRecord::getName() const
{
    return name;
}

string AudioRecord::getSinger() const
{
    return singer;
}

int AudioRecord::getYear() const
{
    return year;
}

void AudioRecord::shouInfo() const
{
    cout << "singer: " << singer << endl;
    cout << "Name of composition: " << name << endl;
    cout << "year: " << year << endl<< endl;

}
