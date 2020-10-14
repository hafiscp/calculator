#include<stdio.h>
#include<conio.h>
int n,a,b,res=0;
char yes='y';
int add()
{
	res=a+b;
}
int sub()
{
	res=a-b;
}
int pro()
{
	res=a*b;
}
int div()
{
	res=a/b;
}
int main()
{
	do
	{
		printf("\nWant to Try? Y/N \t\n");
		scanf("%c",&yes);
		printf("\n\nEnter The Mathematical Operation \n");
		printf("1. Addition \t 2. Subtraction \t 3. Multiplication \t 4. Division \t\n");
		scanf("%d",&n);
		printf("Enter The Two Terms :");
		scanf("%d%d",&a,&b);
		switch(n)
		{
			case 1:
				add();
				printf("Result = %d",res);
				break;
			case 2:
				sub();
				printf("Result = %d",res);
				break;
			case 3:
				pro();
				printf("Result = %d",res);
				break;
			case 4:
				div();
				printf("Result = %d",res);
				break;
			default:
				printf("Enter a given value :\n");
		}
		
	}while(yes=='y' || yes=='Y');
	main();
	return 0;
}
