#include<stdio.h>
int main()
{
	int i,j,k,g;
	char str1[10],str2[10];
	printf("enter the string :");
	scanf("%s",str1);
	i=0;
	while(str1[i]!='\0')
	i++;
	j=i-1;
	k=0;
	while(j>=0)
	{
		str2[k]=str1[j];
		j--;
		k++;
	}
	str2[k]='/n';
	printf("length of string is %d:\n",i);
	printf("reverse of string is %s:",str2);

    g=0;
    j=0;
    while(j<i)
    {
    	if(str1[j!=str2[j]]){
    		g=1;
    		break;
		} else{
			j++;
		}
	}
	if(g==1){
		printf("the string is not palindrome");
	} else{
		printf("the string is palindrome");
	}
	return 0;
}
