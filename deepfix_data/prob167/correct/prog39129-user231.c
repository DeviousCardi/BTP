#include<stdio.h>
long long getsum(int n);
int main() {
    int n;
    long long int sum=0;
    scanf("%d",&n);
    if(n>=2&&n<=10*10*10*10*10){
        sum=getsum(n); }
    if(sum!=0)
        printf("%lld",sum);
    return 0; }
long long getsum(int n){
    static long long int k=0;
    int num;
    if(n!=0){
        scanf("%d",&num);
        if(num<=1000000000&&num>=-1000000000){
            k=k+num; }
        else{
            return(0); } }
    else{
        return k; }
    return(getsum(n-1)); }