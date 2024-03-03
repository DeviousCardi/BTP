#include <stdio.h>
#include <stdlib.h>
int main(){ int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++) {
    if(i<=((n+1)/2)) {
        for(j=1;j<=(i-1);j++)
        printf(" ");
        for(j=1;j<=(2*((n+1)/2-i)+1);j++) {
            printf("*"); } }
else {
    for(j=1;j<=(n-i+1);j++)
    printf(" ");
for
(j=1;j<=2*(i-(n+1)/2)+1;j++) {
    printf("*"); } }
printf(" \n"); }
return 0; }