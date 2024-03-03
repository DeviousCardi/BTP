#include <stdio.h>
int main() {
    int i;
    int n,m,j=0;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++) {
        if(n%i==0)
        j=j+1; }
    if(m==j)
    printf("YES");
    else
    printf("NO");
    return 0; }