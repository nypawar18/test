/*
 * test.cpp
 *
 *  Created on: 08-Nov-2020
 *      Author: nitin
 */
#include<iostream>
#include"test.h"

int sub(Cal c){
	return c.i-c.j;
}
using namespace std;
int main(void)
{
	int var1,var2;
	cout<<"Enter 2 nos";
	cin>>var1>>var2;
	Cal c(var1,var2);
	cout<<c.add()<<endl;
	cout<<sub(c)<<endl;
	return 1;
}
