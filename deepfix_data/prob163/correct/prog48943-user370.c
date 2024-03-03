#include <stdio.h>
#include <stdlib.h>
int main() {
    int d1,d2,count1=0,count2=0,i,j,k;
    scanf("%d\n%d\n",&d1,&d2);
    int num1[d1];
    int num2[d2];
    for(i=0;i<d1;i=i+1)
    { scanf("%d",&num1[i]);
        count1=count1+1; }
    for(j=0;j<d2;j=j+1)
    {scanf("%d",&num2[j]);
        count2=count2+1; }
    printf("%d",num1[i]);
    printf("%d",num2[j]);
	return 0; }