#include<iostream>
using namespace std;

int main(){
    // Using another array :
    // int array1[] = {1,2,3}, array2[3];
    // int index1, index2;
    // for(index1 =0, index2 = 2; index1 < 3; index1++, index2--){
    //     array2[index2] = array1[index1];
    // }
    // cout<<"Original array :"<<endl;
    // for(index1 = 0; index1 < 3; index1++){
    //     cout<<array1[index1]<<endl;
    // }
    // cout<<"Reversed array :"<<endl;
    // for(index1 = 0; index1 < 3; index1++){
    //     cout<<array2[index1]<<endl;
    // }

    // Without using another array :
    int array[] = {1,2,3,4,5};
    int index, temp;
    for(index = 0; index < 2; index++){
        temp = array[index];
        array[index] = array[5 - index - 1];
        array[5 - index - 1] = temp;
    }
    for(index = 0; index < 5; index++){
        cout<<array[index]<<endl;
    }
    return 0;
}
