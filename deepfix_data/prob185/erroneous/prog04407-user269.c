#include <stdio.h>
void sumheck(int arr[],int S,int N) {
    for(int i=0;i<N;i++) {
        if(S==arr[i])
       {  printf("YES");
        return ; } } }
int main() {
    int N,S;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d",arr+i);
    sumheck(arr,S,N)
    return 0; }