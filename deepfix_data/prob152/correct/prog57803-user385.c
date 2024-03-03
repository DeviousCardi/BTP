#include <stdio.h>
int fun(int k,int n,int a[100]) {
    int i,s=0,s1=0;
    for(i=0;i<k;i++) {
        s=s+a[i]; }
    for(i=k;i<n;i++) {
        s1=s1+a[i]; }
    if(s==s1) {
       return 1; }
        if(k<n-1) {
        return fun(k+1,n,a); }
      else {
          return -1; } }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]); }
    int k=fun(1,n,a);
    if(k==1) {
        printf("YES"); }
    else if(k==-1) {
        printf("NO"); }
    return 0; }