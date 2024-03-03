#include <stdio.h>
#include <stdlib.h>
void read_into_array(int a) {
    static int c=0;
    x[c]=a; }
int main() {
    int i,j,k,n,sum,count;
    int y[n];
    count=0;
    sum=0;
    i=0;
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
        count=count+1; }
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