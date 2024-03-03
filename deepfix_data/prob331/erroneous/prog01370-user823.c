#include <stdio.h>
int main(){
    int n,p,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d ",&p);
            b=b+((i==j&&p==1)||(i!=j&&p==0)); } }
    if(b==n*n)
    printf("ID");
    else
    printf("non ID");
    return 0; }