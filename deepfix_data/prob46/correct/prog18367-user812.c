#include <stdio.h>
int main(){
    int i,j=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=2;i<m;i++) {
        if(n%i==0);
    j++;}
    if (j==n)
    printf("YES");
    else
    printf("NO");
    return 0; }