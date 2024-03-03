#include <stdio.h>
int main(){
    int i,j,n,m;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        for(j=2;j<=n-1;j++) {
            if(i%j==0)
            printf("NO");
            else
            printf("YES"); } }
    return 0; }