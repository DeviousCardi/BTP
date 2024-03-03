#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l;
    scanf("%d",&n);
    l=  (n+1) / 2;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j==l) {
            printf("%d",l);
            l++;
            continue; }
            else {
            printf("*"); } }
        printf("\n");
        if(l<=(n+1)/2) l--;
        else l++; }
	return 0; }