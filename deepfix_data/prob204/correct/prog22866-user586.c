#include<stdio.h>
#include <stdlib.h>
int main() {
    int n,reverse=0;
    scanf("%d",&n);
    { n=n%10;
    reverse =reverse+n;
    n=n/10;
    printf("%d",reverse);}
    if(reverse==n)
    printf("YES");
    else
    printf("NO");
    return 0; }