// lesson_37_q.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"MyQueue.h"
#include<string>
#include"AudioRecord.h"
#include<vector>
#include<windows.h>
#include"MyPriorityQueue.h"
#include"Person.h"
using std::string;

int main()
{
    
    //myQueue::Queue<string>pv311;

    //pv311.push_back("Oleg");
    //pv311.push_back("Nikola");
    //pv311.push_back("Sasha");
    //pv311.push_back("Olga");
    //pv311.showInfo();

    //cout << "********************************\n";
    //while (!pv311.isEmpty())
    //{
    //    pv311.showInfo();
    //    cout << pv311.first() << endl << endl;
    //    pv311.pop_front();
    //}
    //***********************************************************************
    //vector<AudioRecord> ar;

    //ar.push_back(AudioRecord("Single Ladies", "Beyonce", 2008));
    //ar.push_back(AudioRecord("Umbrella", "Rihanna featuring Jay-Z", 2007));
    //ar.push_back(AudioRecord("Shake it Off", "Taylor Swift", 2016));
    //ar.push_back(AudioRecord("Toxic", "Britney Spears", 2003));
    //ar.push_back(AudioRecord("Rolling in the Deep", "Adele", 2011));
    //ar.push_back(AudioRecord("Firework", "Katy Perry", 2010));
    //ar.push_back(AudioRecord("Blinding Lights", "The Weeknd", 2019));

    //myQueue::Queue<AudioRecord> player;
    //player.push_back(ar[2]);
    //player.push_back(ar[3]);
    //player.push_back(ar[5]);
    //player.push_back(ar[1]);

    //cout << "plaing" << endl;
    //while (!player.isEmpty())
    //{
    //    player.first().shouInfo();
    //    Sleep(2000);
    //    player.pop_front();
    //    
    //   // system("cls");
    //}
    //**********************************************************************



    //myQueue::PriorityQueue<int> a;

    //a.push_back(34);
    //a.push_back(35);
    //a.push_back(54);
    //a.push_back(60);
    //a.push_back(98);
    //a.push_back(100);
    //a.push_back(587);
    //    
    //cout << "=======================================\n";
    //    while (!a.isEmpty()) {
    //        a.showInfo();
    //        cout << a.first() << endl << endl;
    //        a.pop_front();
    //    }



    myQueue::PriorityQueue<Person> a;

    a.push_back(Person("Mykola", 2));
    a.push_back(Person("Shasha", 1));
    a.push_back(Person("Olena", 5));
    a.push_back(Person("Oleg", 0));

    cout << "=======================================\n";
         while (!a.isEmpty()) {
             a.first().showInfo();
            
             a.pop_front();
         }
}

