#include <stdio.h>
int main() {
    int n,a,b;
    scanf("%d\n",&n);
    int ar[n],ct[n],k,i;
    for(i=0;i<n;i++) ct[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]);
        k=ar[i];
        ct[k-1]++; }
    for(i=0;i<n;i++) {
        if(ct[i]==2) a=i+1;
        else if(ct[i]==0) b=i+1; }
    printf("%d\n",a);
    printf("%d\n",b);
    return 0; }