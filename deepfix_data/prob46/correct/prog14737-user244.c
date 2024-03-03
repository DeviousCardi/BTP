#include <stdio.h>
int main(){
    int m,n,f,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++) {
        if(n%i==0)
        c++; }
    if(c==m)
    printf("YES");
    else
    printf("NO");
        return 0; }