#include<iostream>
#include<math.h>
using namespace std;

class Solreverse {
    signed int n;
    public:
        
        int reverse(int num){
            int ans=0;
            while(num!=0){
                int digit = num%10;
                /*
                condition of question : 
                    -If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
                */
                if(ans<(-pow(2,31))/10 || ans>(pow(2,31)-1)/10){
                    return 0;
                }
                ans = ans*10 + digit ;
                num = num/10;
            }
            return ans;
        }
        
};
class compliment1009 {
    public:
        int comp (int n){
            int m=n;
            int mask =0;
            while (n!= 0){
                mask = (mask << 1) | 1; // creating the complement bitmask 000000111
                n=n>>1;                 // removing last bit  101 >> 10 >> 1 >> 0 (condition false)
            }
            int ans = (~n) & mask;
            return ans;
        }

};

int main () 
{
    int num;
    cout<<"ENter number :";
    cin>>num;
    Solreverse rev;
    int rever = rev.reverse(num);
    cout<<"Reversed integer is : "<<rever<<endl;

    compliment1009 cmp;
    cout << " COmpliment of the number : "<<cmp.comp(5);
    return 0;
}