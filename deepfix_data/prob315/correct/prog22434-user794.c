#include <stdio.h>
#include <stdlib.h>
int main() {
    int b,sum,count,i,j;
    scanf("%d",&b);
    int a[b],c[b];
    sum=0;
    for(i=0;i<b;i++){
        count=0;
        for(j=i+1;j<b;j++)
        {if(a[i]==a[j])
        count=count+1; }
c[i]=count;
sum=sum+count;}
printf("%d",sum);
for(i=0;i<b;i++){
    printf("%d ",c[i]); }
	return 0; }