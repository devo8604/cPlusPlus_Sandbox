
#include <iostream>;
#include <cstdlib>;

using std::cin;
using std::cout;
using std::endl;

int fun::math(int n) {
    int a;

    a = n + 5;
    return (a);
}

void fun::interaction() {
    int i;
    cout << "Please enter a number: ";
    cin >> i;
    cout << "The value of " << i << " + 5 is " << math(i);
}