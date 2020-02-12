#include<stdio.h>
int main(void)
{
	int num = 0;
	printf("Enter the no of rows\n");
	scanf("%d",&num);
	for(int i =1;i<=num;++i)
	{
		for(int j =1;j<=i;++j)
			printf("* ");
		printf("\n");
	}
	return 0;
}

