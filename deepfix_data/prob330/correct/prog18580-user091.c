#include <stdio.h>
int main() {
    int n,m=0,p,i;
    scanf("%d",&n);
    int peak[n];
    for(i=0;i<n;i++) {
        scanf("%d",&peak[i]); }
        for(i=0;i<n-2;i++)
         { if( peak[i]<peak[i+1]&&peak[i+1]>peak[i+2])
          m++; }
        printf("%d",m);
    return 0; }