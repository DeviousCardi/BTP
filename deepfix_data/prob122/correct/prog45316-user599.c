#include <stdio.h>
int main(){
    int a,p=0,i,j,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",a);
            if(i==j) {
                if(a!=1) {
                    p=1;
                    break; } }
            else {
                if(a!=0) {
                    p=1;
                    break; } } }
        printf("\n"); }
    if(p==0)
        printf("IDENTITY MATRIX");
    else
        printf("NOT an INDENTITY MATRIX");
    return 0; }