#include <iostream>
#include <vector>
#include <ctime>

//My headers
#include "fun.h"
#include "getSet.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int fun::addition(int n) {
    int a;
    a = n + 5;
    return (a);
}

void fun::interaction() {
    int i;
    cout << "Please enter a number: ";
    cin >> i;
    cout << "The value of " << i << " + 5 is " << addition(i) << endl;
}

void fun::arrayTest() {

    int ar[5];
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        int ranNum = (rand() % 1000) + 1;
        ar[i] = ranNum;
    }

    cout << "This is an array." << endl << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << ar[i] << endl;
        sleep(1);
    }
}

void fun::vec() {

    string inName;
    int inNum;
    getSet g;
    getSet *tmpGetSet;

    cout << "This is a vector" << endl;

    vector<getSet> vec;

    for (int j = 0; j < 2; j++) {

        cout << "Please enter a name?" << endl;
        std::getline(cin, inName);

        cout << "Please input a number." << endl;
        cin >> inNum;
        cin.ignore();

        tmpGetSet = new getSet;
        tmpGetSet->setName(inName);
        tmpGetSet->setNum(inNum);
        vec.push_back(*tmpGetSet);

    }
    for (int i = 0; i < vec.size(); i++) {
        cout << "you're name is " << vec[i].getName()
                << " and your number is " << vec[i].getNum() << endl;
        sleep(1);
    }
}

void fun::curTime() {
    struct tm * timeinfo;
    time_t timer;

    time(&timer);
    timeinfo = localtime(&timer);
    cout << "Current local time is " << asctime(timeinfo) << endl;
}

