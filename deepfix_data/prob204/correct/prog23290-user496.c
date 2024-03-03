#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,sum,count;
    int x[n];
    int y[n];
    count=0;
    sum=0;
    i=0;
    while(i!=EOF) {
        scanf("%d",&x[i]);
        count=count+1;
        i++; }
    n=count;
    for(j=0;j<n;j++) {
        y[j]=x[count-j]; }
    for(k=0;k<n;k++) {
        if(x[k]==y[k])
            sum=sum;
        else
            sum=sum+1; }
    if(sum==0)
        printf("Yes");
    else
        printf("No");
	return 0; }