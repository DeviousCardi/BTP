#include <stdio.h>
#include <stdlib.h>
int main() {
      int n,;
    scanf("%d",&n);
    int i,j,p,q;
    for(i=1;i<=(n+1)/2;i++) {
        for(j=1;j<=(n/2)+(1-i);j++) {
            printf(" "); }
        for(k=((n+1)/2)-i+1;k<=(n+1)/2+i-1;k++) {
            printf("%d",k%10); }
        printf("\n"); }
    for(i=((n+1)/2)+1;i<=n;i++) {
        for(p=1;p<=i-((n+1)/2);p++) {
            printf(" "); }
        for(q=((n+1)/2)+i-n;q<=((h+1)/2)-i+n;q++) {
            printf("%d",q%10); }
        printf("\n"); }
	return 0; }