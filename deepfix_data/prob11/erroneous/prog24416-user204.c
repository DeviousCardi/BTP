#include <stdio.h>
void sot(int arr[],int a,int b,S) {
    if(b==a) {
        if(arr[a]==S) {
            return 1; } }
    else {
        return sot(arr,a,b-1,S); } }
int main() {
    int N,S,i;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    sot(arr,0,N-1,S)
    return 0; }