#include<iostream>
using namespace std;

int main(){
	int arr[5], index, min, max;
	cout<<"Enter 5 numbers : ";
	for(index = 0; index < 5; index++){
		cin>>arr[index];
	}
	min = arr[0];
	max = arr[0];
	for(index = 0; index < 5; index++){
		if(min > arr[index]){
			min = arr[index];
		}
		if(max < arr[index]){
			max = arr[index];
		}
	}
	cout<<"Min : "<<min<<endl;
	cout<<"Max : "<<max;
	return 0;
}
