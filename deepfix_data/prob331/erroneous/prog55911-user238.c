#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            scanf("%d",no);
            if(i==j && no!=1) {
                flag=0;
                break; }
            else if(i!=j && no!=0) {
                flag=0;
                break; } }
        if(flag==0)
        break; }
    if(flag==1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",&n,&n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
    return 0; }