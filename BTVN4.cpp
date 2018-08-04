#include<iostream>
using namespace std;

int main()
{
	float x;
	float y;
	float z;
	float trungbinh;
	cout<<"Nhap ba diem (diem kiem tra, diem giua ki, diem cuoi ki) tuong ung la :";
	cin>>x>>y>>z;
	trungbinh=(x+y+z)/3;
	if(trungbinh>=9.0)
	{
		cout<<"Hang A ";
	}
	else if((trungbinh<=9.0) && (trungbinh>=7.0))
	{
		cout<<"Hang B ";
	}
	else if((trungbinh<=7.0) && (trungbinh>=5.0))
	{
		cout<<"Hang c ";
	}
	else if(trungbinh<5.0)
	{
		cout<<"Hang F ";
	}
	else 
	{
		cout<<"Khong hop le ";
	}
	return 0;
}
