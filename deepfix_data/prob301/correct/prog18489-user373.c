#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],i,n,j;
    printf("enter the set ofno");
    n=10000;
    scanf("%d",&a[n]);
    for(i = n; i < n; i--) {
        for(j=0; j<=i; j++) {
            if(a[i]==a[j])
            printf("%d",a[i]);
            break; } }
	return 0; }