#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    if(n==0||n==1)
    return 1;
    if(n==2)
    return 2;
    else {
            int i=0,t;
    while(i<n) {
        t=t+catlan(i)*catlan(n-i-1);
        i++; }
   return t; } }
int main() {
    int t,k,n=1,i;scanf("%d",&t);
    long a[10000];
    for(i=0;i<t;i++)
    scanf("%ld",&a[i]);
    printf("%d\n",catlan(3));
    for(i=0;i<t;i++) {
     while(k>0) {
         k=a[i];
         k=k-catlan(n++); }
    n=1;printf("%d",k);
    if(k==0)
    printf("yes\n");
    else
    printf("no\n"); }
	return 0; }