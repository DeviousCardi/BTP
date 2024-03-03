#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,n,c,k;
    scanf("%d",&n);
    for(a=1;a<=n;a++) {
     if(a<=(n+1)/2) {
            c=(n+1)/2+1-a;
           for(b=1;b<=(n+1)/2-a;b++) {
                printf(" "); }
            for(k=1;k<=2*a-1;k++) {
                printf("%d",c%10);
                c=c+1; } }
        if(a>(n+1)/2) {
            c=a-(n-1)/2;
           for(b=1;b<=a-(n+1)/2;b++) {
                printf(" "); }
            for(k=1;k<=2*n+1-a*2;k++) {
                printf("%d",c%10);
                c=c+1; } }
        printf("\n"); } }
	return 0; }