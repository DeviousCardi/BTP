#include <stdio.h>
int check(int a[],int size,int index,long x){
    if(index<0)return 0;
    if(a[index]==x)return 1;
    if(index<x){
        int sum=0;
        for(int i=size-1;i>=0;i--){
            if(i!=index)
                sum=sum+a[i];
            if(sum==x)return 1; } }
    return check(a,size,index-1,x); }
int main() {
    int N;
    long S;
    scanf("%d %ld\n",&N,&S);
    long t[N];
    for(int i=0;i<N;i++)
        scanf("%ld",&t[i]);
    int flag=check(t,N,N,S);
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0; }