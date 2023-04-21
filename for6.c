#include<stdio.h>

main()

{
	int a=1,n;
	printf("Enter the value: ");
	scanf("%d",&n);
	
	while(n>=a)
	{
		if(n%2==0)
		{
		printf("%d\n",n);
	    }
		n--;
	}
}
