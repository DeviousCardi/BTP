#include <stdio.h>
int main() {
    int i=1;
    int n=1;
    int a[i];
    int count=1;
    int d=0;
    scanf("%d",&n);
    while(i<=n) {
        scanf("%d",&a[i]);
        d=a[i];
        i=i+1;
        scanf("%d",&a[i]);
        if(a[i]==d) {
           count=count+1;
           break; } }
    if(count==d) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }