#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l,k;
    scanf("%d",&n);
    l= k= (n+1) / 2;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j>=l&&j<=k) {
            printf("%d",j); }
            else {
            printf("*"); } }
        printf("\n");
        if(i<=(n+1)/2) {
            l--;
            k++; }
        else {
            l++;
            k--; } }
	return 0; }