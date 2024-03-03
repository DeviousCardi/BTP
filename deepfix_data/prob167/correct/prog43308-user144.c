#include<stdio.h>
void add( long n,long long * ans  );
int main() {
    long  n;
    long long  tot_sum=0;
    long long * ans;
    ans=&tot_sum;
    scanf("%li",&n);
    add(n,ans);
    printf("%lli",tot_sum);
    return 0; }
 void add( long  n,long long * ans){
    long long input;
    if(n==0){
        return ; }
    scanf("%lli",&input);
    *ans=*ans + input;
    add(n-1,ans); }