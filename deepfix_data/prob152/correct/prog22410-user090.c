#include <stdio.h>
int groups(int array[100000],int N,int j,int p){
    printf("%d",j);
    if(N==0)
    return 0;
    if(p==N)
    return 0;
    return (array,N,j+array[p],p+1)||(array,N,j,p+1); }
int main() {
    int N,i,array[100000];
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    return 0; }