#include <iostream>
#include <string.h>

using namespace std;

struct person{
    char name[100];
    int salary;
    char employee_id[100];
};
int main()
{
 struct person employee1;

 strcpy(employee1.name,"abc");
 employee1.salary=20000;
 strcpy(employee1.employee_id,"abc@.com");

 cout << employee1.name << "\n" << employee1.salary << "\n" << employee1.employee_id;
}
 