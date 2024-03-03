#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[]={1,3,5};
long getways(int x, int m) { }
int main() {
    int n; scanf("%d",&n);
    int c=0;
    for (int i=0;i<=n;i++)
    for (int j=0;j<=n/3;j++)
    for (int k=0;k<=n/5;k++) {
            if (i+3*j+5*k==n) c++;
            else if (i+3*j+5*k>n) break; }
    printf("%d",c);
    return 0; }