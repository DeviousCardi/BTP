#include <stdio.h>
int check(int ar[],int n, int s1,int s) {
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    sum=sum+ar[i];
    while(sum-s1>0){
        for(i=0;i<n;i++) {
            if(sum-s1==ar[i])
            return 1;
            else return check(ar,n,s1+s,s); } }
    if(sum-s<0)
    return 0; }
int main(){
    int N,S;
    scanf("%d %d",&N,&S);
    int ar[N];
    int i;
    for(i=0;i<N;i++)
    scanf("%d ",&ar[i]);
    if(check(ar,N,S,S)>0)
    printf("YES");
    else printf("NO"); }