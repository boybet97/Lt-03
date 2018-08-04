#include<iostream>
using namespace std;
bool specnum(int a){
	int tc =0,tl=0;
	while (a>0){
		if (((a%10)%2)==0) tc+=a%10; else tl+=a%10;
		a/=10;
	}
	if (tc==tl)
		return true;
	return false;
}
int main()
{
	int a,b,index=0;
	cin >> a >>b;
	for (int i = a ; i <=b;i++){
		if (specnum(i)){
			index++;
		}
	}
	cout << index;
}

