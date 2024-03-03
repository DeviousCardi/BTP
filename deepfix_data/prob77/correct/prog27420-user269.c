#include <stdio.h>
int max(int a, int b) {
if (a > b)
return a;
else
return b;}
int min(int a, int b) {
if (a > b)
return b;
else
return a;}
int main() {
    int T,i,k,p,temp;
     scanf("%d",&T);
    int a[T];
    for(i=0;i<T;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<T;i++) {
        k=max(a[i],a[i++]);
        k=k; }
    for(i=0;i<T;i++) {
        p=min(a[i],a[i++]);
        p=p; }
    temp=k;
    k=p;
    temp=p;
    for(i=0;i<T;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }