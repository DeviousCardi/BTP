#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int aar[n];
    int i,j;
    for (i=0;i<n;i++) {
        scanf("%d\n",&arr[i]); }
    int k;
    scanf("%d\n",&k);
    for(i=0;i<n;i++) {
        for(j=n-1;j>i;j--) {
            if (arr[i]+arr[j]==k) {
                printf("(%d,%d",arr[i],arr[j]);
                break; }
            else {
                continue; } } }
	return 0; }