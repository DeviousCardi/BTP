#include <stdio.h>
int main() {
    int d,n,i,sum;
    scanf ("%d %d",&d,&n);
    int a[d];
    for (i=0;i<d;i++)
        scanf ("%d", &a[i]);
    if (n+1<d)
        printf ("%d",a[n]);
    else {
        for (i=0;i<d;i++)
            sum=sum+a[i];
        a[d]=sum;
        for(i=d+1;i<=n;i++) {
            a[i]=sum+a[i-1]-[i-d-1];
            sum=a[i]; }
        printf ("%d", a[n]); }
	return 0; }