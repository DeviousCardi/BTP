#include <stdio.h>
int sum(int N,float arr[N],float S){
    if(arr[N-1]==S)
    return 1;
    else
    return(N-1,arr,S); }
int main() {
    float S;
    int N;
    scanf("%d%f",&N,&S);
    float a[N];
    for(int i=0;i<N;i++)
    scanf("%f",&a[i]);
    sum(N,a,S);
    return 0; }