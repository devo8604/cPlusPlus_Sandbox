
#include <string>
#include "getSet.h"

using std::string;

string name;
int num;

void getSet::setName(string tmpName) {
    name = tmpName;
}

void getSet::setNum(int tmpNum) {
    num = tmpNum;
}

string getSet::getName() {
    return (name);
}

int getSet::getNum() {
    return (num);
}
