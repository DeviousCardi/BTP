#include <stdio.h>
int main() {
    int a[100];
    int n;
    int i,j,num;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
           if(a[j]==num) {
               printf("yes"); }
           else {
               printf("no"); } }
        scanf("%d",&a[i]); }
    return 0; }