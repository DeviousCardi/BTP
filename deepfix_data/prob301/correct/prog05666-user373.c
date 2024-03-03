#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],i,n,j;
    scanf("%d\n %d",&n,&a[n]);
    for(i = n; i < n; i--) {
        for(j=0; j<=n; j++) {
            if(a[i]==a[j])
            printf("%d",a[i]);
            break; } }
	return 0; }