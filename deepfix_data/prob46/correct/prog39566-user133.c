#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int s=0;
    for(int i=2;i<=n/2;i++) {
        if(n%i==0)
        s++; }
    if(s==m)
    printf("YES");
    else
    printf("NO");
    return 0; }