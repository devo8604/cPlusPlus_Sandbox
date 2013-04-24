/* 
 * File:   fun.h
 * Author: devonsmith
 *
 * Created on April 20, 2013, 10:47 AM
 */

#ifndef FUN_H
#define	FUN_H

class fun {
private:
    int variable;
public:
    void interaction();  //Interacts with the user to get name and a number

    int addition(int n); //Request a number and adds it to 5
    void arrayTest(); //Demonstrates iteration through array elements
    void vec(); //Demonstrates inserting objects into and iterating through a vector, requires getSet.cpp
    void curTime(); //Displays current time on the console
protected:

};

#endif	/* FUN_H */

