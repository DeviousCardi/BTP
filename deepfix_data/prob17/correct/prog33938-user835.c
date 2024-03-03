#include <stdio.h>
int main() {
    int num1,num2,i,j,k,h,a[100],b[100],c[100][100];
    int sum=0;
    int count=0;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&a[i]); }
    scanf("%d\n",&num2);
    for(j=0;j<num2;j++) {
        scanf("%d ",&b[j]); }
    for(k=0;k<num1;k++) {
        for(h=0;h<num2;h++) {
            c[k][h]=a[sum];
            sum=(sum+1)%num1; }
        sum=sum-1; }
    for(k=0;k<num1;k++) {
        for(h=0;h<num2;h++) {
            if(c[k][h]==b[h])
            count=count+1;
            else {
                continue; }
            break; } }
    if(count==num2) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }