#include<stdio.h>
int max(int a,int b){
    return a>b?a:b; }
int main() {
    int N,i;
    int a[];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    int MaxTill[N];
    MaxTill[0]=1;
    for(i=1;i<N;i++){
       MaxTill[i]=1; }
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i])
               MaxTill[i]=max((1+MaxTill[j]),MaxTill[i]); } }
    int m;
    for(i=0;i<N-1;i++){
        m=max(MaxTill[i],MaxTill[i+1]); }
    printf("%d",m);
    return 0; }