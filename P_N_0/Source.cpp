#include <stdio.h>
int a;

int main()
{
	printf("Enter the number : ");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("Zero");
	}
	else
	{
		if (a > 0)
		{
			if (a % 2 == 0)
			{
				printf("Positive Even");
			}
			else
			{
				printf("Positive Odd");
			}
		}
		else
		{
			if (a % 2 == 0)
			{
				printf("Negative Even");
			}
			else
			{
				printf("Negative Odd");
			}
		}
	}
}