#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m;
    int a[20];
    scanf("%d", &n);
    m=0;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]>a[i+1] && a[i]>a[i-1]) {
            printf("Yes");
        m=1;
        break; } }
    if (m==0)
    printf("No");
	return 0; }