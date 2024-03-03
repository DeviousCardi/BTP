#include <stdio.h>
int main() {
   int n,s,a[1000000],i;
   scanf("%d %d",&n,&s);
   for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    return 0; }
int a[100000];
int sum(int n,int a[]) {
    if (n<=1) {
        return 0; } }