#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
    int a[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%d",&a[i]); }
    for (i=1;i<(n-1);i++){
        if (((a[i]<a[i-1]) && (a[i]<a[i+1])))
        printf ("%d",i);
        else if (a[0]<=a[1])
        printf ("%d",0); }
	return 0; }