#include<stdio.h>
int main()
{
	int i,date[10];
	int tmp;
	int len;
	date[0]=date[1]=1;
	len = sizeof(date)/sizeof(int);	
	for(i =2;i < len; i++)
	{
		date[i] = date[i-2]+date[i-1];
	}
	
	for(i = 0; i < len/2; i++)
	{
		tmp = date[i];
		date[i] = date[9-i];
		date[9-i] = tmp;
	}
	for(i = 0;i < len; i++)
	{
		printf("%d \n",date[i]);
	}
	return 0;
}
