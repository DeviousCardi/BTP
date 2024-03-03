#include<stdio.h>
int index,N,p;
int inpt[10000000];
int diff(int index, int N);
int main() {
    int i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&inpt[i]);
    p=inpt[0];
    diff(0,N);
    printf("%d",p);
    return 0; }
int diff(int index, int N){
    if(index==N-1)
    return p;
    else{
        p=p-inpt[index+1];
        return diff(index+1,N); } }