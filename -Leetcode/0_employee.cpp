#include<iostream>
#include<windows.h>
using namespace std;



int main () 
{
    string s="anuj";
    for(char c : s){
        cout<<c<<endl;
        Sleep(100);
    }
    return 0;
}