#include <stdio.h>
int main()   {
    int n,i,j,count=0;
    int a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    for(i=0; i<n; i++) {
        for(j=i; j<n; j++) {
           if(a[i]==a[j]) {
               break; }
           else {
               count=count+1; } }
    printf("%d", count);
    return 0; }