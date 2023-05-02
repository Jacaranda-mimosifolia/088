#include<stdio.h>

int x=6;
int calculation(int x);

int main()
{
	calculation(x);
	return 0;
}

int calculation(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		x*=calculation(x-1);
		printf("%d\n",x);
		return x;
	}
}
