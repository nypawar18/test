/*
 * test.h
 *
 *  Created on: 08-Nov-2020
 *      Author: nitin
 */

#ifndef TEST_H_
#define TEST_H_

class Cal{
	int i;
	int j;
public:
	Cal(int x,int y){
		this->i=x;
		this->j=y;
	}
	int add(void){

		return i+j;
	}
	friend int sub(Cal);
};



#endif /* TEST_H_ */
