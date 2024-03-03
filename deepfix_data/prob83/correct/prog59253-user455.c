#include <stdio.h>
int main() {
    int n,i;
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<n;i++)
    {scanf("%d",&num[i]);
    printf("%d",&num[i]);}
    int d;
    scanf("\n%d",&d);
    for(i=0;i<n;i++) {
        num[i]=num[(i+d)%n]; }
    return 0; }