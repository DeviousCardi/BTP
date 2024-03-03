#include<stdio.h>
int diff(int integers[],int N);
int main() {
    int N,i,integers[10000],ans;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&integers[i]); }
    if(N==1)
    printf("%d",integers[0]);
    else
    ans=diff(integers,N);
    return 0; }
int diff(int integers[],int size) {
    if(size==0)
    return 0;
    else
    return integers[size-1]-diff(integers,size-1); }