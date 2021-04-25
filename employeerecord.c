#include<stdio.h>
struct employee{
	char name[50];
	int age;
	int ph_no,salary;
};
void main(){
	int n,i=0;
	struct employee emp[i];
	printf("Enter Number of employees: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Name: ");
		scanf("%s",emp[i].name);
		printf("Enter age of employee: ");
		scanf("%d",&emp[i].age);
		printf("Enter phone number: ");
		scanf("%d",&emp[i].ph_no);
		printf("Enter salary of employee:");
		scanf("%d",&emp[i].salary);
	}
	printf("Name\tAge\tPhone Number\tSalary\n");
	for(i=0;i<n;i++){
		printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].ph_no,emp[i].salary);
	}
}
