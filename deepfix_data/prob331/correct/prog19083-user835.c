#include <stdio.h>
int main(){
    int a,i,j,s;
    int sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            scanf("%d",&s);
            if(i==j&&s==1) {
                sum=sum+1; }
            if(i!=j&&s==0) {
                sum=sum+1; } } }
    if(sum==a*a) {
        printf("Given identity matrix %d x %d is an IDENTITY MATRIX",a,a); }
    else {
        printf("Given identity matrix %d x %d is  NOT an IDENTITY MATRIX",a,a); }
    return 0; }