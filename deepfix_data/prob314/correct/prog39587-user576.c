#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int ar[n],i,s;
    for(i=0;i<n;i++) {
     scanf("%d",&s);
     ar[i]=s; }
    int t,m;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&m);
        if(m==0) {
            if(ar[m]<ar[m+1])
            printf("Yes");
            else
            printf("No\n"); }
        else if(m==n-1) {
            if(ar[m]<ar[m-1])
            printf("Yes");
            else
            printf("No\n"); }
        else
        if((ar[m]<ar[m-1])&&(ar[m]<ar[m+1]))
        printf("Yes");
        else
        printf("No\n"); }
    return 0; }