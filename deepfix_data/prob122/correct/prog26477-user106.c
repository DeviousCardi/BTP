#include <stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(i==j&&a==1)
                printf("Given 3x3 matrix is an IDENTITY MATRIX"); }
        if(i!=j&&a==0)
        printf("h"); }
    return 0; }