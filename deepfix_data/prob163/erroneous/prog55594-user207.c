#include <stdio.h>
#include <stdlib.h>
int main() {
int i,a[4];
int sum=0;
for(i=3;i<=4;i++){
    scanf("%d",&a[i]);
    a[i]={a[1],a[2],a[3],a[4]};
    sum=sum+a[i];}
    printf("%d",sum);
	return 0; }