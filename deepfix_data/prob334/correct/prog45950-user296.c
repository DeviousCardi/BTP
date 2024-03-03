#include <stdio.h>
int main() {
int a,i,j;
j=j%10;
scanf("%d",&a);
for(i=1;i<=a;i=i+1) {
    for(j=i;j<(3*i)-1;j=j+1) {
        printf("%d",j); }
    printf("\n"); }
	return 0; }