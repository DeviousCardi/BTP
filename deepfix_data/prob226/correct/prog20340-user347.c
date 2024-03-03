#include <stdio.h>
int main() {
    int d,n,sum=0;
    scanf("%d %d",&d,&n);
    int b[d],a[n];
    for(int i=0;i<d;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<d-1;i++)
    a[i]=b[i];
    for(int j=d;j<n;j++) {
        for(int k=j-d;k<j;k++)
        sum=sum+a[k];
    a[j]=sum;
    sum=0; }
    printf("%d",&a[n-1]);
	return 0; }