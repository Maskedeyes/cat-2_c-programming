//structure
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee;
//struct employee
int main(){
	strcpy(employee.name,"John Doe");
	employee.id=12345;
strcpy(employee.department,"Human Resources");
employee.salary=55000.50;
strcpy(employee.email,"john.doe@company.com");
printf("name:%s\n",employee.name);
printf("id:%d\n",employee.id);
printf("department:%s\n",employee.department);
printf("salary:%f\n",employee.salary);
printf("email:%s\n",employee.email);
return 0; 
}