
#include <iostream>;
#include <cstdlib>;

#include "fun.h"

using std::cin;
using std::cout;
using std::endl;

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

    int t = 0;
    while (t < 5) {
        cout << ar[t] << endl;
        sleep(1);
        t++;
    }
}