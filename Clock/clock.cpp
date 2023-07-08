#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;

int main(){

    int hr, min, sec;

    cout << "Hour: ";
    cin >> hr;

    cout << "Minutes: ";
    cin >> min;

    cout << "Seconds: ";
    cin >> sec;

    while(true){

        system("cls");

        cout << hr << " : " << min << " : " << sec << endl;
        sec++;

        if(sec == 60){

            min++;
            sec = 0;

            if(min == 60){

                hr++;
                min = 0;

                if(hr == 24){
                    hr = 0;
                }
            }
        }
        sleep(1);
    }
    return 0;
}