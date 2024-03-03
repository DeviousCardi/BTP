#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j=0,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(a[o]>a[1]||a[n-1]>a[n-2]) {
        printf("Yes");
        return 0; }
    for(i=1;i<n-1;i++) {
        if(a[i]>a[i-1]&&a[i]>a[i+1]) {
            j=1;
            break; } }
    if(j==1)
    printf("Yes");
    else
    printf("No");
	return 0; }