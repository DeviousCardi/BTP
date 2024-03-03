#include <stdio.h>
int main() {
    int i,N,S,arr[30],sum=0;
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        if(sum==S)
        printf("YES"); return 0;
        if(arr[i]==S)
        printf("YES"); return 0; }
    if(S>sum)
    printf("NO"); return 0;
    return 0; }