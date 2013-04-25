/* 
 * File:   main.cpp
 * Author: devonsmith
 *
 * Created on April 19, 2013, 6:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
//My header file declarations
#include "fun.h"

int main() {
    fun a, b, c;
    
    c.curTime();
    c.vec();
    a.interaction();
    b.arrayTest();
    
    std::cout << "Press any key to exit.";
    std::cin.ignore(1000, '\n');
    getchar();
            
    return 0;
}


