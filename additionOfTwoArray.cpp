#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int arr1[size], arr2[size], index;
	cout<<"Enter the elements od array 1 : ";
	for(index = 0; index < size; index++){
		cin>>arr1[index];
	}
	cout<<"Enter the elements od array 2 : ";
	for(index = 0; index < size; index++){
		cin>>arr2[index];
	}
	for(index = 0; index < size; index++){
		arr1[index] += arr2[index];
	}
	cout<<"Addition : "<<endl;
	for(index = 0; index < size; index++){
		cout<<arr1[index]<<endl;
	}
	return 0;
}
