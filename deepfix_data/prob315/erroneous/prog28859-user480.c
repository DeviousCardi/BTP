#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            int c=0;
            if(a[i]>a[j]) {
                c++; } }
        printf("%d",c) }
	return 0; }