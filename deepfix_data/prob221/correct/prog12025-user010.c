#include<stdio.h>
#include<stdlib.h>
int main() {
int i,j,n;
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
printf("%c",'*');
printf("\n");
int a=2;
for(i=1;i<=n-1;i++) {
    for(j=1;j<=2*n;j++) {
        if(j==a||(j+a)==2*n-a)
        printf("%c",'*');
        else printf(" "); }
    a++;
    printf("\n"); }
 return 0; }