#include<stdio.h>

main()

{
	int a=1,n,fact=1;
	printf("Enter the value: ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	
	printf("Factorial of %d is : %d" ,n,fact);
}
