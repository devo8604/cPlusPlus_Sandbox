/* 
 * File:   getSet.h
 * Author: devonsmith
 *
 * Created on April 22, 2013, 8:01 PM
 */


#ifndef GETSET_H
#define	GETSET_H
using std::string;

class getSet {

public:
    void setName(string tmpName);
    void setNum(int tmpNum);

    string getName();
    int getNum();

private:
    string name;
    int num;
};

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* GETSET_H */

