#include<stdio.h>
long int pro(long int a[],int b);
int main() {
    int N;
    scanf("%d\n",&N);
    long int l[N];
    int i=0;
    while(i<N){
    scanf("%ld ",&l[i]);
    i++; }
    long int ans=pro(l,N);
    printf("%ld",ans);
    return 0; }
long int pro(long int a[],int b){
    if(b==1)
        return a[0];
    return a[0]*pro(a+1,b-1); }