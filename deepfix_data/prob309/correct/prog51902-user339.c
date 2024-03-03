#include <stdio.h>
int main() {
    int i=1;
    int n=1;
    int a[n];
    int count=1;
    int d;
    scanf("%d",&n);
    while(i<=n) {
        scanf("%d",&a[n]);
        d=a[n];
        i=i+1;
        while(d==a[n]) {
        count=count+1; } }
    if(count==d) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }