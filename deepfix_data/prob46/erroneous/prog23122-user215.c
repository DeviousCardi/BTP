#include <stdio.h>
int main(){
    int i,f,m,n;
    scanf("%d%d",&m,&n);
    f=0;
    for(i=2,i<=n,i++) {
        if (m%i==0)
        f=f+1; }
    printf("YES");
    else
    printf("NO");
    return 0; }