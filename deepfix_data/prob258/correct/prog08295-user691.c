#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,i,j;
    scanf("%d",&n);
    int a[n];
    j=0;
    if(n==1)
        printf("Yes");
    else {
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(i==0) {
            if(a[0]>a[1])
                j=j+1;
            else
                j=j; }
        if(i==n-1) {
            if(a[n-2]<a[n-1])
                j=j+1;
            else
                j=j; }
        else {
            if(a[i-1]<a[i]&&a[i]>a[i+1])
                j=j+1;
            else
                j=j; } }
    k=j;
    if(k>0)
        printf("Yes");
    else
        printf("No"); }
	return 0; }