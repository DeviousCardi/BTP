#include<stdio.h>
int diff(int integers[],int N);
int main() {
    int N,i,integers[10000],ans;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&integers[i]); }
    ans=diff(integers,N);
    return 0; }
int diff(int integers[],int size) {
    if(size==1)
    return integers[0];
    else
    return integers[size-1]-diff(integers,size-1); }