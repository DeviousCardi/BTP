#include<stdio.h>
int getsum(int n);
int main() {
    int n,sum=0;
    scanf("%d",&n);
    if(n>1&&n<=10*10*10*10*10){
        sum=getsum(n); }
    printf("%d",sum);
    return 0; }
int getsum(int n){
    static int k=0;
    int num;
    if(n!=1){
    scanf("%d",&num);
    k=k+num;}
    else{
        return k; }
    printf("%d\n",k);
    return(getsum(n-1)); }