#include <stdio.h>
int sum(int a[],int n,int s) {
    if(s==0)
    return 1;
     if(s>0 && n!=0)
    return 0;
    if(a[n-1]>s)
    return sum(a,n-1,s);
    else {
        return sum(a,n,s)||sum(a,n-1,s-a[n-1]); } }
int  isSubsetSum(int set[], int n, int sum) {
   if (sum == 0)
     return 1;
   if (n == 0 && sum != 0)
     return 0;
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum); }
int main() {
    int n,s,i,a[100];
    scanf("%d",&n);
  scanf("%d",&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(sum(a,n,s)==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }