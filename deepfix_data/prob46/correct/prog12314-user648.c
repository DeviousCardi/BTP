#include <stdio.h>
int main(){
    int m,n,i,x=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=2;i<m;i++) {
        if(m%i==0)
        x=x+1; }
    if(x==n)
    printf("YES");
    else
    printf("NO");
    return 0; }