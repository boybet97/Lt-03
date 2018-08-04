#include<iostream>
using namespace std;

main()
{
	cout<<"Xuat ra man hinh cac so le: ";
	for(int i=1 ; i<100 ; i++)
	{
		if(i % 2 != 0 )
		{
			cout<<i<<endl;
		}
	}
	cout<<"\nXuat ra man hinh cac so chan: ";
	for(int i=1 ; i<100 ; i++)
	{
		if(i % 2 == 0 )
		{
			cout<<i<<endl;
        }
    }
}
