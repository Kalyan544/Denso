#include<stdio.h>
int main()
{
	int x;
	int p;
	
	scanf("%d%d",&x,&p);
	
	
	int sum=x;
	while(x!=0)
	{
		x=x-((p/100)*x);
		
		sum=sum+x;
		if(x==0)
		{
			break;
		}
	}
	
	printf("%d",sum);
}
