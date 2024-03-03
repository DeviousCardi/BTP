#include <stdio.h>
int main() {
    int n;
    int flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
     int d=0;
     for(int j=0;j<n;j++) {
         if(a[j]==a[i])
         d++; }
     if(d!=a[i]) {
        flag=1;
        break; } }
    if(flag==1) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }