#include <stdio.h>
int main(){
    int m,n,i,x=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=2;i<n;i++) {
        if(n%i==0)
        x=x+1; }
    if(x==m)
    printf("YES");
    else
    printf("NO");
    return 0; }