#include <stdio.h>
int rotater(int j,int n,int d) {
        a=a>b%n?a-b%n:(n-(b%n-a));
        return a; }
int main() {
    int n,d;
    scanf("%d\n",&n);
    int num[n];
    int i=0,j;
    for(i=0;i<n;i++) scanf("%d",&num[i]);
    scanf("\n%d",&d);
    i=0;
    for(i=0;i<n;i++) {
        j=i;
        j=rotator(j,n,d);
        printf("%d ",num[j]); }
    return 0; }