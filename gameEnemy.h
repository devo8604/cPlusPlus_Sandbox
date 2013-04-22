/*
*
*
*		Example Enemy Class Header
*		Nick Schmidt
*		22 Apr 2013
*
*
*/



class gameEnemy {

//default ctor, sets to the default values below if no other params have been passed
gameEnemy();

//primary ctor, assigns to enemyName, enemyHealth, enemyMaxHealth variables
gameEnemy(String name1, int health1, int maxHealth1);

public:

void enemVec();

protected:

private:
	string enemyName;
	int enemyHealth, enemyMaxHealth;

};
