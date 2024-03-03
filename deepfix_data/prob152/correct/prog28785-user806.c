#include <stdio.h>
int sum(int ar[],int n,int s){
    if(n<0)
        return 0;
    if(ar[n]==s)
        return 1;
    if(s>ar[n])
        return sum(ar,n-1,s) || sum(ar,n-1,s-ar[n]);
    return sum(ar,n-1,s); }
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        sum1+=ar[i]; }
    if(sum1%2!=0)
        printf("NO");
    else{
        int x=sum(ar,n-1,sum1/2);
        x==0?printf("NO"):printf("YES"); }
    return 0; }