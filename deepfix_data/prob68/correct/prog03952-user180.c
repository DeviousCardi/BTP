#include<stdio.h>
int pro(int a[],int b);
int main() {
    int N;
    scanf("%d\n",&N);
    int l[N];
    int i=0;
    while(i<N){
    scanf("%d ",&l[i]);
    i++; }
    int ans=pro(l,N);
    printf("%d",ans);
    return 0; }
int pro(int a[],int b){
    if(b==1)
        return a[0];
    return a[0]*pro(a+1,b-1); }