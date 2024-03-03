#include<stdio.h>
long int index,N,p;
long int inpt[1000000];
int diff(int index, int N);
int main() {
    int i;
    scanf("%ld",&N);
    for(i=0;i<N;i++)
    scanf("%ld",&inpt[i]);
    p=inpt[0];
    diff(0,N);
    printf("%ld",p);
    return 0; }
int diff(int index, int N){
    if(index==N-1)
    return p;
    else{
        p=p-inpt[index+1];
        return diff(index+1,N); } }