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
    int T,i,k;
     scanf("%d",&T);
    int a[T];
    for(i=0;i<T;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<T;i++) {
        k=max(a[i],a[i++])
        k=k; }
    printf("end");
    return 0; }