#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Nhap vao so nguyen x : ";
	cin>>x;
	cout<<"Boi so cua "<<x<<" voi so dau tien la : ";
	for(int y=1; y<16; y++)
	cout<<"\n "<<x<<"x"<<y<<"="<<x*y;
	return 0;
}
