
#include <cstdlib>;
#include <string>;

#include "getSet.h";

using std::string;

string name;
int num;

void getSet::setName(string n) {
    name = n;
}

void getSet::setNum(int o) {
    num = o;
}

string getSet::getName() {
    return (name);
}

int getSet::getNum() {
    return (num);
}