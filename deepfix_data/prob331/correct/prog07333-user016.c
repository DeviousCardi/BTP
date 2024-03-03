#include <stdio.h>
int main(){
    int i=0,j=0,n,d,flag=1;
    scanf("%d",&n);
    for(;i<n;i++) {
        for(;j<n;j++) {
            scanf("%d ",&d);
            if(i==j&&d!=1)
            {flag=0;
            goto jump;}
            if(j!=i&&d!=0)
            {flag=0;
            goto jump;} } }
    jump:
    if(flag==1)
    printf("identity matrix");
    else
    printf("not an identity matrix");
    return 0; }