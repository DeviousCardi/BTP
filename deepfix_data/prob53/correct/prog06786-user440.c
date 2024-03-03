#include<stdio.h>
int z=-1;
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
    printf("%d",ans);
    return 0; }
int diff(int integers[],int size) {
    z++;
    if(z==size)
    return 0;
    else
    return integers[z]-diff(integers,size); }