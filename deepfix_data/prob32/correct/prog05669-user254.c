#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=0, flag=0;
    scanf("%d", &n);
    int a[n], i=0;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=1;i<n;i++) {
        if((a[i]<a[i+1])&&(a[i]<a[i-1])) {
            flag=1; break; } }
    if(a[0]<a[1]||a[n-1]<a[n-2])
    flag=1;
    if(flag==1)
    printf("Yes\n");
    else printf("No\n");
	return 0; }