#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
    int a[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%d",&a[i]); }
    if (a[0]<a[1]){
        printf ("%d",0); }
    for (i=1;i<(n-1);i++){
        if ((a[i]<a[i-1]) && (a[i]<a[i+1]) && (a[0]>a[1]))
        printf ("%d",i); }
    if (a[n-1]<a[n-2]){
        printf ("%d",n-1); }
        return 0; }