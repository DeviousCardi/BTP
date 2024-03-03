#include <stdio.h>
int a[100];
int count(int,int);
int count(int c,int n) {
    int i;
    int d=0;
    for(i=0;i<n;i++) {
        if(c==a[i]) {
            d=d+1; } }
    return d; }
int main() {
    int n;
    int i,t=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]!=count(a[i],n)) {
            t=0;
            break; } }
    printf("%d",t);
    if(t==0) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }