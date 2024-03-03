#include <stdio.h>
int main() {
    int i=2;
    int n,m,j=0;
    scanf("%d%d",&n,&m);
    while(n>0) {
        if(n%i==0) {
            i=i-1; }
        else j=j+1;
        i++;
        n=n/i; }
    if(m==j)
    printf("YES");
    else
    printf("NO");
    return 0; }