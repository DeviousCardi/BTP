#include <stdio.h>
int check(long a[],int size,int index,long x){
    if(index<1)return 0;
    if(a[index]==x)return 1;
    if(a[index]<x){
        long sum=a[index];
        for(int i=size-1;i>=0;i--){
            if(i!=index)
                sum=a[index]+a[i];
            if(sum==x)return 1; } }
    return check(a,size,index-1,x); }
int main() {
    int N;
    long S;
    scanf("%d %ld\n",&N,&S);
    long t[N];
    for(int i=0;i<N;i++)
        scanf("%ld",&t[i]);
    int flag=check(t,N,N-1,S);
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0; }