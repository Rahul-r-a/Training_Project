#include<stdio.h>
#include<stdint.h>

uint8_t i=0, j=0, size1=0, size2=0, size3=0, choice=0, arr1[7], str1[10], str2[5];

int main()
{
	while(choice !='q')
	{
		printf("\n");
	printf("\n select a choice");
	printf("\n a to take a string and store it in array\n b to display the array content\n c to concatinate two strings\n d to check the string size\n q to quit");
	scanf(" %c",&choice);

	printf("\n");
	if(choice == 'a')
	{
		printf("\nenter the string to be stored");
		scanf("%s",arr1);
	}
	else if(choice == 'b')
	{
		printf("%s",arr1);
	}
	else if(choice == 'c')
	{
		printf("\n enter two strings");
		scanf("%s %s",str1,str2);
		while(str1[i] != '\0')
		{
			size1++;
			i++;
		}
		i=0;
		while(str2[i] != '\0')
		{
			size2++;
			i++;
		}
		printf("\n size of first string is %d",size1);
		printf("\n size of second string is %d",size2);
		
		for(i=0,j=size1;str2[i]!='\0';i++,j++)
		{
			str1[j]=str2[i];
		}
		str1[j]='\0';
		i=0;
		printf("\n %s",str1);
		while(str1[i] != '\0')
		{
		     printf("\n %s",str1[i]);
		     i++;
		}
	}
	}
	return 0;
}
			
