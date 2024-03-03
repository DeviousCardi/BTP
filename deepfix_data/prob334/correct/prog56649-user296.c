#include <stdio.h>
int main() {
int a,i,j;
scanf("%d",&a);
for(i=2;i<=a;i=i+1) {
    for(j=i-1;j<(2*i)-1;j=j+1) {
        printf("%d",j); }
    printf("\n"); }
	return 0; }