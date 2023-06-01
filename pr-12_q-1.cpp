#include<iostream>
using namespace std;

class example{
    private:
        int x;
    public:
        example(int a){
            x = a;
        }
        void getThis(){
            cout<<this<<endl;
        }
};

int main(){
    example e1(6), e2(7);
    e1.getThis();
    e2.getThis();
    return 0;
}