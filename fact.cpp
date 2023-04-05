#include <iostream>
using namespace std;
int main () {
	int n,i;
	int f=1;
	cout << "Enter a num : ";
	cin >> n;
	
	while(n!=1) {
		f=f*n;
		n--;
	}
	cout << f;
	return 0;
}
