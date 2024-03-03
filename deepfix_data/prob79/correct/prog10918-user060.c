#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,*arr,i,j;
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    scanf("%d",arr+i);
    for(i=0;i<n;i++){int suma=0,sumb=0;
        for(j=0;j<=i;j++){
            suma=suma+arr[j];
            sumb=sumb+arr[n-1-j]; }
        if(suma<sumb&&suma+arr[i+1]>sumb)
        printf("%d ",i); }
	return 0; }