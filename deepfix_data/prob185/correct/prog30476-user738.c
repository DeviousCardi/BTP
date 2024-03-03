#include <stdio.h>
int sum(int a[],int n,int s) {
    if(s==0)
    return 1;
     if(sum!=0 && n==0)
    return 0;
    if(a[n-1]>s)
    return sum(a,n-1,s);
    else {
        return sum(a,n,s)||sum(a,n-1,s-a[n-1]); } }
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