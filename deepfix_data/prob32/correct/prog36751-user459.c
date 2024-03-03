#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,t=0;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&ar[i]); }
    for(j=2;j<=n;j++) {
        if(ar[j]<ar[j-1]&&ar[j]<ar[j+1]) {
            t=1;
            break; } }
    if(t=1) printf("Yes");
    else printf("No");
	return 0; }