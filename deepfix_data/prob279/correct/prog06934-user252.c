#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int ar[n],ct[n],k,i;
    for(i=0;i<n;i++) ct[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]);
        k=ar[i];
        ct[k-1]++; }
    for(i=0;i<n;i++) {
        if(ct[i]==2)
        printf("%d\n",i+1);
        else if(ct[i]==0)
        printf("%d\n",i+1); }
    return 0; }