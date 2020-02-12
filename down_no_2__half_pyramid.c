#include<stdio.h>
int main(void)
{
	int num = 0;
	printf("Enter the no of rows\n");
	scanf("%d",&num);
	for(int i =num;i>=1;i--)
	{
		for(int j =1;j<=i;++j)
			printf("%d ",i);
		printf("\n");
	}
	return 0;
}

