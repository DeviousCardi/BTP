#include <stdio.h>
int sum(int N,float arr[N],float S,float sum){
    sum=sum+arr[N-1];
    if(sum==S)
    return 1;
    else if(sum<S)
    return(N-1,arr,S,sum);
    else if(sum>S)
    return(N-1,arr,S,sum-arr[N-1]);
    else
    return -1; }
int main() {
    float S;
    int N;
    scanf("%d%f",&N,&S);
    float a[N];
    for(int i=0;i<N;i++)
    scanf("%f",&a[i]);
    sum(N,a,S,0);
    return 0; }