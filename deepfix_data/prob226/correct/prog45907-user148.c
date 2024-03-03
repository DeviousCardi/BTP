#include <stdio.h>
int main() {
    int n,d,i,j,sum=0;
    scanf ("%d%d", &d,&n);
    int a[n+1];
    int b[d];
    for (i=0;i<d;i++)
    scanf ("%d", &b[i]);
    if (n+1<d)
    printf ("%d",b[n]);
    else {
        for (j=0;j<d;j++)
        sum=sum+b[j];
        a[d]=sum;
        for (i=d+1;i<n+1;i++)
        a[i]=sum-a[i-d]+a[i-1];
        printf ("%d", a[n]); }
	return 0; }