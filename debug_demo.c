#include <stdio.h>

char * buf;
int sum_to_n(int num)
{
	int i, sum = 0;
	for(i = 1; i <= num; i++)
    		sum += i;
	return sum;
}
int main(void)
{
	int n = 10,buf=0;
        sprintf(buf,"sum=%d",sum_to_n(n));
	printf("%s\n",sum_to_n(n));
	return 0;
}
