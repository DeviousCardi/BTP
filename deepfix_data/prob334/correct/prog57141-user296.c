#include <stdio.h>
int main() {
int a,i,j;
scanf("%d",&a);
for(i=1;i<=a;i=i+1) {
    for(j=i;j<(3*i)-1;j=j+1) {
        if(j<=9) {
        printf("%(n-i)d",j); }
        else {
            printf("%(n-i)d",j%10); } }
    printf("\n"); }
	return 0; }