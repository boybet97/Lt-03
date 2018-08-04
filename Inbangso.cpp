#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i, j, count ;
	cout<<"In bang so : \n";
	for(j=1 ; j <= 10 ; j++)
	{
		for(i=1 ; i<=100; i += 10)
           cout<<" "<<j;
        cout<<"\n";	        
	}
	return 0;
}
