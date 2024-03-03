#include<stdio.h>
int main() {
    int n,t=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
           int j;
           for(j=0;j<n;j++) {
                   int a;
                   scanf("%d",&a);
                   if(i==j) {
                          if(a!=1) {t=1;break;} }
                   else {
                          if(a!=0) {t=1;break; } } }
    if(t==0) printf("yes");
    else printf("no");
    return 0; }