#include <stdio.h>
#include <stdlib.h>
int main() {
int number,t,i,k;
scanf("%d\n",&number);
int a[number];
for(i=0;i<number;i++) {
    scanf("%d\n",&a[i]); }
scanf("%d/n",&t);
for(i=1;i<=t;i++) {
    scanf("%d\n",&k);
    if(k>=1 && k<=number-2) {
         if(a[k]>a[(k-1)] && a[k]>a[(k+1)])
         printf("Yes\n");
         else
         printf("No\n"); }
    else
    if(k==0) {
       if(a[k]>a[k+1])
        printf("Yes\n");
        else
        printf("No\n"); }
    else
    if(k==number-1) {
       if(a[k]>a[k-1])
        printf("Yes\n");
        else
        printf("No\n"); } }
	return 0; }