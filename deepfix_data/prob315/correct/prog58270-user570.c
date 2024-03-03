#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,arr[1000],sum=0;
    scanf("%d",&a);
    for(a=0;a<=1000;a++)
    if(arr[a]>arr[a+1])
    sum=sum+a;
    printf("%d",sum);
    scanf("%d",&arr[a]);
	return 0; }