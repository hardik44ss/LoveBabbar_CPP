#include <stdio.h>
#include <string.h>
int main(){
    //Taking input of string using gets and puts
    //Bcoz scanf unable to read the input of space
    char str[78];
    puts("Enter a string : ");
    gets(str);
    puts("You entered : ");
    puts(str);

    char name[3] = { 'h','r','\0'}; // last character is null char
    char str1[20],str2[30],str3[40];
    strcpy(str1,name);
    strcpy(str2,"Hardik");
    strcpy(str3 ,"Suthar");
    printf("string1 : %s\nstring2 : %s\nstring3 : %s\n",str1,str2,str3);

    strcat(str1,str2); // str1= str1+str2
    printf("%s\n",str1);

   //strcmp means return 0 if same 
    //+ve1 if str1>str2
    //-ve1 if str1<str2
    char s1[21]="AAAA",s2[21]="ZZZZ";
    printf("%d",strcmp(s1,s2));//s2>s1



    return 0;
}