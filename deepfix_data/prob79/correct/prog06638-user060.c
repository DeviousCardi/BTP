#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,*arr,i,j,sum=0;
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    scanf("%d",arr+i);
    for(i=0;i<n;i++){
    sum=sum+arr[i]; }
    for(i=0;i<n;i++){int suma=0;
        for(j=0;j<i;j++){
            suma=suma+arr[j]; }
        if(suma<sum/2&&suma>=sum/2-arr[i])
        break; }
    int suma=0,sumb=0;
    for(j=0;j<i;j++){
        suma=suma+arr[j];
        sumb=sum-suma-arr[i]; }
    if(suma>sumb)
    printf("%d %d",i,n-i);
    else printf("%d %d",i+1,n-i-1);
	return 0; }