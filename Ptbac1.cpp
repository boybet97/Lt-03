#include<iostream>
using namespace std;

main()
{
	int a, b;
 	cout<<"Nhap vao a:"<<endl;
 	cin>>a ;
 	cout<<"Nhap vao b:"<<endl;
 	cin>>b ;
 	if (a==0 && b==0 )
 	{
 		cout<<"Phuong trinh vo so nghiem";
	}
	else if(a==0 && b!=0 )
	{
		cout<<"Phuong trinh vo nghiem";
	}
	else if(a!=0 && b!=0 )
	{
		cout<<"Phuong trinh co nghiem duy nhat x la b/a"<<b/a ;
	}
	 
}
