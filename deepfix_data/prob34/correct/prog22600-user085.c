#include <stdio.h>
#include <stdlib.h>
int main() {
int number,t,i,k;
scanf("%d\n",&number);
int a[number];
for(i=0;i<number;i++) {
    scanf("%d\n",&a[i]); }
for(i=0;i<number;i++) {
    printf("%d\n",a[i]); }
scanf("%d",&t);
for(i=0;i<=t;i++) {
    scanf("%d\n",k);
    if(a[k]>a[(k-1)] && a[k]>a[(k+1)])
    printf("Yes\n");
    else
    printf("No\n"); }
	return 0; }