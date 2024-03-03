#include <stdio.h>
int main() {
    int i=2;
    int n,m,j=0;
    scanf("%d%d",&m,&n);
    while(n>0) {
        if(n%i==0) {
            n=n/i;
            if(n%i!=0)
            i=i-1;
            j=j+1; }
            i=i+1; }
    if(m==j)
    printf("YES");
    else
    printf("NO");
    return 0; }