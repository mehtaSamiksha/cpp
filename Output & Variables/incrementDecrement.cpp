#include<iostream>
using namespace std;
int main(){
    int x =5;
    cout<<x<<endl;
    x=x+1;
    cout<<x<<endl;
    x+=1;
    cout<<x<<endl;
    cout<<x++<<endl; //post increment
    cout<<++x<<endl; //pre increment
    int y =6;
    cout<<y<<endl;
    y=y-1;
    cout<<x<<endl;
    y-=1;
    cout<<y<<endl;
    cout<<y--<<endl; //post increment
    cout<<--y<<endl; //pre increment
}
