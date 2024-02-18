#include<iostream>
using namespace std;

class Book {
    private:  
        string title,author ;//,publisher;
        // int price;
        // int st_position;
        static string tit[5]={'title1','title2','title3','title4','title4'};
        static string aut[5]={'author1','author2','author3','author4','author5'};
        static int pri[5]={44,55,66,68,90};

    public:
        Book(){
            cout<<"Enter the title : ";
            cin>>title;
            cout<<"Enter author name : ";
            cin>>author;
        }
        
        void checkdata(void){
            for(int i=0;i<=4;i++){
                if(title==tit[i] && author==aut[i]){
                    cout<<"Book is available \n";
                    cout<<"Price of the book is : "<<pri[i]<<endl;
                }
               }
        }
};

int main () 
{
    Book b1;
    b1.checkdata();
    return 0;
}