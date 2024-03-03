#include<stdio.h>
int getsum(int n);
int main() {
    int n;
    long int sum=0;
    scanf("%d",&n);
    if(n>=2&&n<=10*10*10*10*10){
        sum=getsum(n); }
    if(sum!=0)
        printf("%lf",sum);
    return 0; }
int getsum(int n){
    static long int k=0;
    long int num;
    if(n!=0){
        scanf("%d",&num);
        if(num<=1000000000.0&&num>=-1000000000.0){
            k=k+num; }
        else{
            return(0); } }
    else{
        return k; }
    return(getsum(n-1)); }