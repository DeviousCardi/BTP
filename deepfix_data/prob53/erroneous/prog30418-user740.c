#include<stdio.h>
int dif(int n,int num[]) {
    int sub[n-1];
    if (n==1)
    return num[0];
    else {
        for(j=0;j<n;j++) {
            sub[i]=num[i+1];
            a=a-dif(n-1,sub);
            return a; } } }
int main() {
    int n,num[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("&d",&num[i]);
    printf("%d",dif(n,num));
    return 0; }