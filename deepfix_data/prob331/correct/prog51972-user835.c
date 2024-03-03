#include <stdio.h>
int main(){
    int a,i,j,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            sum=0;
            if(i==j) {
                sum=sum+1; }
            else {
                sum=0; } } }
    if(sum==a) {
        printf("Given identity matrix is an IDENTITY MATRIX"); }
    else {
        printf("Given identity matrix is  NOT an IDENTITY MATRIX"); }
    return 0; }