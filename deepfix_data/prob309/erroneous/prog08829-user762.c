#include<stdio.h>
int main(){
    int n,i,s=0,b=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        s=0;b=-1;
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                s++; } }
        if(s==a[i]) {
            b++; }
        else {
            break; } }
    if(b==-1) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }