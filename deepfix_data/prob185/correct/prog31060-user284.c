#include <stdio.h>
int check(int[],int,int,int);
int main() {
   int n,k,a[100],i,t=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    t=check(a,n,k,0);
    if(t==1)
    printf("YES");
    if(t==0)
    printf("NO");
    return 0; }
int check(int a[100],int n,int k,int j) {
   int i;
    if(k==0) {
        return 1; }
    else {
        for(i=j;i<n;i++) {
            check(a,n,k-a[i],j+1); } } }