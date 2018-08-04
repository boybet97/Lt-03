#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int n;
	int tong = 0;
	cout<<"Nhap vao so n : "<<endl;
	for(int i = 1; i<n; i++)
	{
		tong = tong + 1/i;
		i++;
	}
	cout<<"Ket qua la : "<<tong;
}
