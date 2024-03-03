#include <stdio.h>
int check(long a[],int size,int index,long x){
    if(index<1)return 0;
    if(a[index]==x)return 1;
    if(a[index]<x){
        long sum1=sum(0,a,size,x,index); }
    if(sum1==x)return 1;
    return check(a,size,index-1,x); }
long sum(long sum,long a[],int size,long x,int index){
    for(int i=0;i<;i++){
        long sum1=sum;
        if(i!=index){
            sum1=sum1+a[i];
        if(sum1<x)
            sum1=sum(sum1,a,size,x,i); } }
    return sum1; }
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