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

    string a;
    int b;
    getSet *v;

    cout << "This is a vector" << endl;

    vector<getSet> vec;

    for (int j = 1; j < 3; j++) {

        cout << "What is your name?" << endl;
        getline(cin, a);

        cout << "Input a number." << endl;
        cin >> b;

        v = new getSet;
        v->setName(a);
        v->setNum(b);
        vec.push_back(*v);
        delete v;
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << "you're name is " << vec[i].getName() << " and your number is " << vec[i].getNum() << endl;
        sleep(1);
    }
}
