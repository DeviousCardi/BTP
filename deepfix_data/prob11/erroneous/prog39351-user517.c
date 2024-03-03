#include <stdio.h>
int main() {
    int i,N,S,arr[30],sum=0,p;
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        if(arr[i]==S){
        printf("YES");
        return 0; } }
    if(S>sum)
    printf("NO");
    p=fun(arr,1,N);
    if(p==1)
    printf("YES");
    else
    printf("NO");
    return 0; }
int fun(int t[],int s,int N){
    int i,j,flag=0,sum=0;
    if(s==N)
    return 2;
    for(i=0;i<N-s+1;i++){
        for(j=i;j<i+s;j++){
            sum=sum+arr[j]; }
        if(sum==S)
        flag=1;
        break; }
    if(flag==1)
    return 1;
    else
    return fun(t,s+1,N); }