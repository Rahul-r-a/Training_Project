#include<stdio.h>
#include<stdint.h>
uint32_t a;
struct employee_database
{
	uint8_t name[10];
	uint16_t id;
	uint8_t desig[10];
	float ctc;
};

int main()
{
	uint8_t choice=0;
	struct employee_database emp;
	while(choice != 'q')
	{
		printf("\n");
		printf("select a choice \n a to fill the data \n b to read the data \n c to update the data \n q to quit");
		scanf(" %c",&choice);

	if(choice == 'a')
	{
	printf("\n Enter the employe details");
	printf("\n employee name : ");
	scanf("%s",emp.name);
	printf("\n employee id : ");
	scanf("%hd",&emp.id);
	printf("\n employee designation : ");
	scanf("%s",emp.desig);
	printf("\nemployee ctc : ");
	scanf("%f",&emp.ctc);
	printf("\n");
	}

	else if(choice == 'b')
	{
		printf("\nemployee name : %s",emp.name);
		printf("\nemployee id : %d",emp.id);
	        printf("\nemployee designation : %s",emp.desig);
		printf("\nemployee ctc : %f",emp.ctc);
	}
}
	return 0;
}
