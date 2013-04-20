
#include <iostream>;
#include <cstdlib>;

using namespace std;

int math(int n) {
    int a;

    a = n + 5;
    return (a);
}

void interaction() {
    int i;
    cout << "Please enter a number: ";
    cin >> i;
    cout << "The value of " << i << " + 5 is " << math(i);
}