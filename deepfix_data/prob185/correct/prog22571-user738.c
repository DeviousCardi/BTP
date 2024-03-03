#include <stdio.h>
int sum(int s,int a[],int n) {
    if(s==0)
    return 1;
     if(s>0 && n!=0)
    return 0;
    if(a[n-1]>s)
    return sum(s,a,n-1);
    else {
        return sum(s,a,n-1)||sum(s-a[n-1],a,n-1); } }
int main() {
    int n,s,i,a[100];
    scanf("%d",&n);
  scanf("%d",&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(sum(s,a,n)==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }