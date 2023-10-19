#include<stdio.h>
int main()
{
	int n,N,r,re=0;
	printf("enter three digit integer:");
	scanf("%d",&n);
	N=n;
	while(N!=0){
		r=N%10;
		re=r*r*r;
		N/=10;
	}
	if(re==n)
	printf("%d is armstrong number",n);
	else
	printf("%d is not armstrong number",n);
	return 0;
}