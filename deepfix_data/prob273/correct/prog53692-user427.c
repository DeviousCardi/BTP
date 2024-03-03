#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count, j, i, k, c,m;
    scanf("%d",&n);
    if(n%2!=0) {
        for(i=1; i<=(n+1)*0.5; i=i++)
        {   count=1;
            for(j=1; j<=(n+1)*0.5-i; j=j++) {
                printf(" ");
                count=count+1; }
            for(m=0; m<=i-1;m++) {
                printf("%d",(count+m)%10); }
            printf("\n"); }
        for(i=(n+1)*0.5+1; i<=n; i=i++) {
            count=1;
            for(j=1; j<=i-(n+1)*0.5; j=j++) {
                printf(" ");
                count=count+1; }
            for(m=0; m<=(n+1)*0.5-i;m++) {
                printf("%d",(count+m)%10); }
            printf("\n"); } }
	return 0; }