#include <stdio.h>
int groups(int array[100000],int N,int j,int p){
    if(N==0)
    return 0;
    if(p==N)
    return 0;
     printf("%d",j);
    return (array,N,j+array[p],p+1)||(array,N,j,p+1); }
int main() {
    int N,i,array[100000],x;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    x=groups(array,N,0,0);
    return 0; }