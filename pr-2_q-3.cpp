#include <iostream>
using namespace std;
int main () {
	int n,i;
	int f=0;
	cout << "Enter a num : ";
	cin >> n;
	if (n==0||n==1) {
		cout <<"It is a prime"<<endl;
		return 0;
	}
	for (i=2;i<=n/2;i++) {
		if (n%i==0) {
			f=1;
			break;
		}
	}
	if(f==1) 
		cout << "Not a prime number";
	else 
		cout << "Prime number";
	return 0;
}
