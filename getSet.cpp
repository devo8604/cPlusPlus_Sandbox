
#include <cstdlib>;
#include <string>

using std::string;

string name;
int num;

void getSet::setName(string n) {
    name = n;
}

void getSet::setNum(int n) {
    num = n;
}

string getSet::getName() {
    return (name);
}

int getSet::getNum() {
    return (num);
}