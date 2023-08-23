#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50],str2[50],temp;
    int n,i,j;
    cin >> str1 >> str2;
    
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    cout << str1;
}