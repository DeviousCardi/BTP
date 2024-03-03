#include <stdio.h>
int main() {
    int n,i,k;
    scanf("%d\n",&n);
    int ar[n],ct[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]);
        k=ar[i];
        ct[k-1]++; }
    for(i=0;i<n;i++) {
        if(ct[i]==1) printf("%d\n",i+1);
        else if(ct[i]==0) printf("%d\n",i+1); }
    return 0; }