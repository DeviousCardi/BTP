#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    min = a[0];
    for(i=1;i<n;i++) {
        if(a[i]<a[i+1]&&a[i]<a[i-1])
        c=1; }
    if(c==1)
    printf("Yes");
    else
    printf("No");
	return 0; }