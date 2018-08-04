#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	float P=1;
	cout<<"Nhap vao so n : "<<endl;
	for(int i=1 ; i<=n ; i++)
	{
		P=P*i;
	}
	cout<<"Ket qua la : "<<P;
	return 0;
}
