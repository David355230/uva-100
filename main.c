#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void max(int,int,int);

int main()
{
	int i,j,temp;
	while(scanf("%d %d",&i,&j)!=EOF)
	{
		printf("%d %d ",i,j);
		if(i>j)//need to compare which is bigger
		{
			temp=i;
			i=j;
			j=temp;
		}
		max(i,j,0);
		printf("\n");
	}
	return 0;
}
void max(int a,int b,int length)
{
	
	int count=1;
	int temp=a;
	while(temp!=1)
	{
		if(temp%2!=0)
		temp=3*temp+1;
		else
		temp=temp/2;
		count++;
	}
	if(count>length)
	{
		length=count;
	}
	if(a<b)
	max(a+1,b,length);
	else
	printf("%d",length);
}
