#include <iostream>
using namespace std;
int main () {
	int a[5],i,temp,j;
	for (i=0;i<5;i++)
		cin>>a[i];
//	for(i=0;i<5;i++)
//		cout << a[i]<<" ";
	for (i=0;i<2;i++) {
			 temp =a[i];
			a[i]=a[5-i-1];
			a[5-i-1]=temp;
	}
	for(i=0;i<5;i++)
		cout << a[i]<<" ";
}
