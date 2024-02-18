#include<iostream>
using namespace std;

int main(){
    //break it stops the loop when the condition true
    for (int  i = 0; i < 10; i++)
    {
        /* code */
        cout<<i<<endl;
       
        if(i==8)
        {
            break;
        }
    }       
    cout<<endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i < 6)//value smaller than 6 all are skiped
        {
            continue;
        }
        cout << i << " ";
    }
     cout<<endl;
    // CONTINUE used to skip that value writes before the code
    // code is read by line by line
    // It ignores the condition in the code
    
     cout<<endl;
    for (int  j = 0; j < 10;j++)
    {
        /* code */
    if(j==4)//4 will be skiped  
    {
        continue;
    }
    cout<<j<<endl;
    }    
    
    return 0;
}