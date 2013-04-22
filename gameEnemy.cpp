/*
*
*
* Example Enemy Class Functions
* Nick Schmidt
* 22 Apr 2013
*
*
*/

void gameEnemy::gameEnemy(String name1, int health1, int maxHealth1) {
	enemyName = name1;
	enemyHealth = health1;
	enemyMaxHealth = maxHealth1;
}

void gameEnemy::enemVec() {
             std::vector<gameEnemy> eneList;
             eneList.push_back (gameEnemy("dude", 1000, 1000));
             eneList.push_back (gameEnemy("yo", 2000, 2000));
}
