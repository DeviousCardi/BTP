#include <stdio.h>
int main() {
    int i,N,S,arr[30],p;
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]); }
    p=fun(arr,1,N,S);
    if(p==2)
    printf("NO");
    else
    printf("YES");
    return 0; }
int fun(int arr[],int len,int N,int S){
    int i,j,flag=0,sum=0;
    if(len==N)
    return 1;
        for(i=0;i<N-len+1;i++){
            for(j=i;j<i+len;j++){
                sum=sum+arr[j]; }
            if(sum==S){
            flag=1;
            break; } }
    if(flag==1)
    return 1;
    else
    return fun(arr,len+1,N,S); }