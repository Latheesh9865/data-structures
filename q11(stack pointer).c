#include<stdio.h>
void push(int value)
{
	if(top==size-1)
	{
		printf("stack if full");
	}
	else
	top++
	stack[top]=value;
	printf("value inserted");
}
