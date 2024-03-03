#include<stdio.h>
int max(int,int);
int main() {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    scanf("%d",&A[i]);
    int MaxTill[N];
    for(int i=0;i<N;i++) {
        int f=-1;
        int s=0;
        for(int j=0;j<i;j++) {
            if(A[j]<A[i]){
            MaxTill[i]=max(1+MaxTill[j],s);
            f=1;
            s=1+MaxTill[j]; } }
        if(f==-1)
        MaxTill[i]=1; }
    int c=MaxTill[0];
    for(int k=0;k<n;k++) {
        if(c<MaxTill[k])
        c=MaxTill[k]; }
    return 0; }
int max(int a,int b) {
        if(a>=b)
        return a;
        else
        return b; }