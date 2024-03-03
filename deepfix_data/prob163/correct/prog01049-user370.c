#include <stdio.h>
#include <stdlib.h>
int main() {
    int d1,d2,count1=1,count2=1,i,j,k;
    scanf("%d\n%d\n",&d1,&d2);
    char num1[d1];
    char num2[d2];
    for(i=0;i<d1;i=i+1)
    scanf("%c",&num1[i]);
    for(j=0;j<d2;j=j+1)
    scanf("%c",&num2[j]);
    printf("%c",num1[i]);
    printf("5c",num2[j]);
	return 0; }