#include<iostream>
using namespace std;

int main()
{
	int a, b, c, max;
	cout<<"Nhap vao 3 so nguyen lan luot la : ";
	cin>>a>>b>>c;
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	cout<<"Gia tri lon nhat cua ba so la : "<<max;
	return 0;
}
