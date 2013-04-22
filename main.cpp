/*
*
*
* Example Main file utilizing gameEnemy.h
* Nick Schmidt
* 22 Apr 2013
*
*
*/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

//this is the right way to call a class file if compiled inside the same project. 
//if it's in a location parsed in the include area of the linker, you use the notation above
#include "gameEnemy.h"

int main() {

	vector<gameEnemy> enemyList;
	enemyList.push(gameEnemy("DOOFUSV1", 1000, 1000;));
	enemyList.push(gameEnemy());

	cout << "Complete!" << endl;

	return 0;

}
