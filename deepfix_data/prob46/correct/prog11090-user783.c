#include <stdio.h>
int main() {
    int i=2;
    int n,m,j=0;
    scanf("%d%d",&m,&n);
    int k=n;
    while(n>1) {
        if(n%i==0)
        {   n=k/i; }
    i=i+1; }
    if(m==j)
    printf("YES");
    else
    printf("NO");
    return 0; }