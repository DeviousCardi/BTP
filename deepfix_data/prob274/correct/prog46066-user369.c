#include <stdio.h>
int main() {
    int n,t=1,k,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     int i=0;
     c=a[i];
     i=a[i];
     while(1) {
        i--;
        i=a[i];
        t++;
        if(c==i)
        break; }
    k=t-1;
    printf("%d %d",t,k);
    return 0; }