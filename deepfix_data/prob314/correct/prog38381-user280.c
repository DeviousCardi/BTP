#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,l;
    int a[20],b[l];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
    scanf("%d", &a[i]); }
    scanf("%d", &l);
    for(i=0;i<l;i++) {
        scanf("%d", &b[i]); }
    for(i=0;i<l;i++) {
        if(b[i]==0) {
            if(a[b[i]]<a[b[i]+1])
            printf("Yes");
            else
            printf("No"); }
        else if(b[i]==n-1) {
       if(a[b[l]]<a[b[l]-1])
        printf("Yes");
        else
   printf("No"); }
        else if((a[b[i]]<a[b[i]+1])&&(a[b[i]]<a[b[i]-1]))
        printf("Yes");
        else
        printf("No");
        printf("\n"); }
        return 0; }