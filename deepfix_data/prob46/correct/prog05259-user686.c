#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int i,p=0;
    for(i=2;i<n;i++){
        if(n%i==0)
        p++; }
    if(p==m)
    printf("YES");
    else
    printf("NO");
    return 0; }