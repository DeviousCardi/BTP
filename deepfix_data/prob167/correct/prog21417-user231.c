#include<stdio.h>
int getsum(int n);
int main() {
    int n,sum=0;
    scanf("%d",&n);
    if(n>1&&n<=10*10*10*10*10){
        sum=getsum(n); }
    if(sum<=1000000000&&sum>=-1000000000)
        printf("%d",sum);
    return 0; }
int getsum(int n){
    static int k=0;
    int num;
    if(n!=0){
        scanf("%d",&num);
        k=k+num;
        if(k>1000000000||k<-1000000000){
            return k; } }
    else{
        return k; }
    return(getsum(n-1)); }