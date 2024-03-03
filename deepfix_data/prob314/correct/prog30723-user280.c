#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,l;
    int a[20],j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
    scanf("%d", &a[i]); }
    scanf("%d", &l);
    for(i=0;i<l;i++) {
        scanf("%d", &j); }
    for(i=0;i<l;i++) {
        if(j==0) {
            if(a[j]<a[j+1])
            printf("Yes\n");
            else
            printf("No\n"); }
        else if(j==n-1) {
       if(a[j]<a[j-1])
        printf("Yes\n");
        else
   printf("No\n"); }
        else if((a[j]<a[j+1])&&(a[j]<a[j-1]))
        printf("Yes\n");
        else
        printf("No\n"); }
        return 0; }