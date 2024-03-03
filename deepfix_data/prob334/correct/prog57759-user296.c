#include <stdio.h>
int main() {
int a,b,i,j,k;
scanf("%d%d",&a,&b);
for(i=1;i<=a;i=i+1) {
        { for(k=1;k<=(a-i);k=k+1)
        printf(" "); }
    for(j=1;j<=b;j=j+1) {
        if(j<=9) {
        if(j>=i)
        printf("%d",j);}
        else {
        if(j>=i)
        printf("%d",j%10); } }
    printf("\n"); }
	return 0; }