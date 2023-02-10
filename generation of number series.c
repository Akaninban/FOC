#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[20],i;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("elenents are:");
	for(i=1;i<n;i++)
		scanf("%d",&a[i]);

	printf("the number value is:");
	for(i=0;i<n;i++)
	
		printf("%d",a[i]);
	getch();

	return 0;
	
}
