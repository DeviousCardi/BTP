#include <stdio.h>
#include <stdlib.h>
int catalan {
    if(n==0)
        return 1;
    else
        return ((2*(2*n-1))/(n+1.0))*catalan(n-1); }
int main() {
    int t;
    int k;
    int i,j;
    int check=0
    int a[17];
    scanf("%d\n",&t);
    for(i=0;i<17;i++) {
        a[i]=catalan(i); }
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<17;j++) {
            if(a[j]==k) {
              check=1;
              break; }
            else {
                check=0; } }
        if(check==1)
            printf("yes\n");
        else
            printf("no\n"); }
     return 0; }