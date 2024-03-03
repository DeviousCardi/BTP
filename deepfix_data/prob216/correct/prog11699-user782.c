#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,a[20];
    a[0]=0;
    for(i=0;i<20;i++){
        if(i==0)
            a[i+1]=a[i]+1;
        else if(i>1)
            a[i]=a[i-1]+a[i-2]; }
    printf("%d",a[1]);
	return 0; }