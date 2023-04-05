#include<iostream>
using namespace std;

int main(){
	int index, numbers, factorial = 1;
	for(index = 1; index <= 10; index++){
		cout<<"sqaure of "<<index<<" is "<<index*index<<endl;
		cout<<"cube of "<<index<<" is "<<index*index*index<<endl;
		factorial *= index;
		cout<<"factorial of "<<index<<" is "<<factorial<<endl<<endl;
	}

	return 0;
}
