#include <stdio.h>
int main() {
    int n,i;
    scanf("%d\n",&n);
    printf("%d\n",n);
    int num[n];
    for(i=0;i<n;i++)
     scanf("%d",&num[i]);
    int d;
    scanf("\n%d",&d);
    for(i=0;i<n;i++) {
        num[(i+d)%n]=num[i];
        printf("%2d",num[i]); }
    return 0; }