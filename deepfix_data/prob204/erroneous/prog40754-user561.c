#include <stdio.h>
#include <math.h>
int main() {
    int n,a,i,d;
    int a[10];
    d=0;
    scanf ("%d",&n);
    while (n!=0) {
        a[i]=n%10;
        n=n/10;
        i=i+1; }
    for (j=0;j<=i;j++) {
        d=d+(pow(10,j)*a[j]) }
    if (d==n)
    printf ("YES");
    else
    printf ("no");
	return 0; }