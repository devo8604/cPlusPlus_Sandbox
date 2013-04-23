
#include <iostream>;
#include <cstdlib>;
#include <vector>;

#include "fun.h";
#include "getSet.h";

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
    int ar[5] = {5, 6, 100, 4000, 68};

    cout << "This is an array." << endl;

    int t = 0;
    while (t < 5) {
        cout << ar[t] << endl;
        sleep(1);
        t++;
    }
}

void fun::vec() {




    cout << "This is a vector" << endl;

    string a;
    int b;

    getSet g;

    vector<getSet> vec;
    int i = 1;

    while (i < 3) {

        cout << "What is your name?" << endl;
        getline(cin, g.setName(a));

        cout << "Input a number." << endl;
        getline(cin, g.setNum(b));

        vec.push_back(g.getName(), g.getNum());
    }

    while (i < num.size()) {
        cout << "you're name is " << g.getName() << " and your number is " << g.getNum() << endl;
        sleep(1);
        i++;
    }
}