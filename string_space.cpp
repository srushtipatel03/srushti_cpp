#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50]="skill",str2[50]="qode",i,j;

    cout << str1;
    cout << str2;

    for(i=0;str1[i]!='\0';i++);
    str1[i]=' ';
    i++;
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]!='\0';
    cout << "\n";
    cout << str1;
}