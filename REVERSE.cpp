#include<stdio.h>
int main(){
	int n,r,re=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0){
	r=n%10;
	re=re*10+r;
	n/=10;	
	}
	printf("the reversed number is:%d",re);
	return 0;
}