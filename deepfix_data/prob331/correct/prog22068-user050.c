#include <stdio.h>
int main(){
    int n;int x,y,z;int i;int flag1,flag2,flag3;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(int j=1;j<i;j++) {
            scanf("%d",&x);
            if(x!=0) {
                flag1=1; } }
        scanf("\n");
        for(int j=i;j<=i;j++) {
            scanf("%d",&y);
            if(y!=1) {
                flag2=1; } }
        scanf("\n");
        for(int j=(i+1);j<=n;j++) {
            scanf("%d",&z);
            if(z!=0) {
                flag3=1; } } }
    if(flag1==1||flag2==1||flag3==1) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }