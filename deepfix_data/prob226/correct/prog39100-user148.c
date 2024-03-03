#include <stdio.h>
int main() {
    int d,n,i,sum;
    scanf ("%d %d",&d,&n);
    int a[d];
    int b[100];
    for (i=0;i<d;i++){
        scanf ("%d", &a[i]);
        b[i]=a[i]; }
    if (n+1<d)
        printf ("%d",b[n]);
    else {
        for (i=0;i<d;i++)
            sum=sum+a[i];
        b[d]=sum;
        for(i=d+1;i<=n;i++) {
            b[i]=sum+a[i-1]-a[i-d-1];
            sum=b[i]; }
        printf ("%d", b[n]); }
	return 0; }