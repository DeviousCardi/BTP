#include<stdio.h>
#include<limits.h>
int max(int n) {
    int i,num1,max;
    scanf("%d",max);
    for(i=1,i<n,i++) {
        scanf("%d",&num1);
        if(num1>=max)
        max=num1; }
    return num1; }
int main() {
    int m,n,i,min,num2;
    scanf("%d%d",&n,&m);
    min=max(n);
    for(i=1;i<m;i++) {
        num2=max(n);
        if(num2<=min)
        min=num2; }
    printf("%d",min);
    return 0; }