#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    return (cat(n-1)*(n)*(2*n-1)); }
void srch(int a[],int strt, int end, int key) {
    if((strt>=end)&&(a[strt]!=key))
    printf("no\n");
    int mid=(strt+end)/2;
    if(a[mid]==key)
    printf("yes\n");
    if(key>a[mid])
    srch(a,mid+1,end,key);
    if(key<a[mid])
    srch(a,strt,mid-1,key); }
int main() {
    int a[17],i,t,k;
    for(i=0;i<17;i++) {
        a[i]=cat(i); }
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        srch(a,0,16,k); }
	return 0; }