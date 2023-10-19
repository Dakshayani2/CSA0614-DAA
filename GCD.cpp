#include<stdio.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int n1,n2;
	printf("enter two numbers:");
	scanf("%d%d",&n1,&n2);
	if(n1<0 || n2<0){
		printf("please enter non negative integer. \n");
		}else {
			int result= gcd(n1,n2);
			printf("the gcd of %d and %d is %d",n1,n2,result);
		}

	return 0;
}