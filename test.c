#include<stdio.h>
#include<string.h>
#include<stdint.h>

uint8_t str1[10], str2[5];
int main()
{
	printf("\n enter first string");
	scanf("%s",str1);
	printf("\n %s is the string1",str1);

	printf("\n %d is the length of string1",strlen(str1));

	printf("\nenter the second string");
	scanf("%s",str2);
	printf("\n %d is the length of string2",strlen(str2));

	printf("\n %s is the concatinated string",strncat(str1,str2,4));
return 0;
}
