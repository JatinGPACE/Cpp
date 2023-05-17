#include<iostream>
using namespace std;

class Time{
    private:
        int hour, minute;
    public:
        Time(int h, int m){
            hour = h;
            minute = m;
        }
        void displayTime(){
            cout<<hour<<":"<<minute<<endl;
        }
        Time totalTime(Time t){
            int totalHour = hour + t.hour;
            int totalMinute = minute + t.minute;
            if(totalMinute >= 60){
                totalHour += 1;
                totalMinute -= 60;
            }
            return Time(totalHour, totalMinute);
        }
};

int main(){
    Time t1(2, 30);
    Time t2(1, 45);
    Time totalTime = t1.totalTime(t2);
    cout<<"Time 1 : ";
    t1.displayTime();
    cout<<"Time 2 : ";
    t2.displayTime();
    cout<<"Total time : ";
    totalTime.displayTime();
    return 0;
}