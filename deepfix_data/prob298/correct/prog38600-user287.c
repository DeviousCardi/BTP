#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    if(n==0||n==1)
    return 1;
    if(n==2)
    return 2;
    else
    return(3*catlan(n-1)-1); }
int main() {
    int t,k,n=1,i;scanf("%d",&t);
    long a[10000];
    for(i=0;i<t;i++)
    scanf("%ld",&a[i]);
    printf("%d\n",catlan(5));
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