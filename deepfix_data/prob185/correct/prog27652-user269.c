#include <stdio.h>
void sumheck(int arr[],int S,int N) {
    int count=0;
    for(int i=0;i<N;i++) {
        if(S==arr[i])
        count++; } }
int main() {
    int N,S;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d",arr+i);
    return 0; }