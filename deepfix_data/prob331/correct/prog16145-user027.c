#include <stdio.h>
int main(){
    int n;
        scanf("%d",&n);
    int en;
        scanf("%d",&en);
    int count =0;
    for(int i=1;i<=n;i=i+1) {
        for(int j=1;j<=n;j=j+1) {
            if(((i==j)&&(en=1))||((i!=j)&&(en=0))) {
                count=count+1; }
                scanf("%d",&en); } }
    if(count==n*n) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }