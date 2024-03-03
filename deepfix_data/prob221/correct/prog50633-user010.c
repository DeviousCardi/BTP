#include<stdio.h>
#include<stdlib.h>
int main() {
int i,j,n;
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
printf("%c \n",'*');
int a=1;
for(i=1;i<=n-1;i++) {
    for(j=1;j<=2*n-i;j++) {
        if(j==a||(j+a)==2*n-1)
        printf("%c",'*');
        else printf(" "); }
    a++;
    printf("\n"); }
 return 0; }