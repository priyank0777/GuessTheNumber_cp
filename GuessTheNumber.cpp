#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void delay(int a);

int main()
{
    int number;
    int guess , nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do
    {
        cout<<"1 to 100 ke bich Number guess Crow:\n";
        cin>>guess;
        if (guess>number)
        {
            cout<<"Utna upar bhi nahi jana tha !!!\n";
        }
        else if (guess<number)
        {
            cout<<"Thora Upar !!!\n";
        }
        else if (guess == number)
        {
            cout<<"Tumne "<<nguesses<<" attempt/attempts mai number guess kiya";
        }
        nguesses++;
        
    } while (guess!=number);
    
    delay(40);

    return 0;
}

void delay(int a){
    int add;
    int time;
    time = a*10000000000000;
    for (int i = 0; i < time; i++)
    {
        add*=i;
        add++;
        add++;
    }
    
}