#include <std.io>

int main(void)
{
	int i=1;
	while(i<100)
	{
		if(i%3==0)
		{
			printf("Fizz");
		}
		if(i%5==0)
		{
			printf("Buzz");
		}
		if(i%3!=0 && i%5!=0)
		{
			printf(i);
		}

	}
return 0;
}
