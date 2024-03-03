#include <stdio.h>
int sum(float arr[],int N,float S){
    if(arr[N-1]==S)
    return 1;
    else
    return(arr,N-1,S); }
int main() {
    float S;
    int N;
    scanf("%d%f",&N,&S);
    float a[N];
    for(int i=0;i<N;i++)
    scanf("%f",&a[i]);
    sum(a,N,S);
    return 0; }