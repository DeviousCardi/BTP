#include <stdio.h>
int cont(int ar1[],int ar2[],int num1,int num2) {
    int sum=0;
    int k=0;
    for(int i=0;i<num2;i++) {
        for(int j=k;j<num1;j++) {
            if(ar1[j]==ar2[i]) {
               if(j-k==1&&k!=0) {
                   sum=sum+1;
                   k=j;
                   break; }
               else {
                   continue; } }
            else {
                continue; } } }
    return sum; }
int main() {
    int num1,num2,ar1[20],ar2[20],h,i;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar1[i]); }
    scanf("%d\n",&num2);
    for(i=0;i<num2;i++) {
        scanf("%d ",&ar2[i]); }
    h=cont(ar1,ar2,num1,num2);
    printf("%d",h);
    if(h==num2-1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }