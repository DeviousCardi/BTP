#include <stdio.h>
int max(int x,int y){
    if(x>y)
        return x;
    else
        return y; }
int find_max(int array[],int size,int index,int k){
    if(index>k)return 0;
    if(index<=k){
        int m=array[0],l=0;
        for(int i=1;i<size;i++){
            if(array[i]>m)
                l=i;
            m=max(array[i],m); }
        array[l]=-1;
        if(index==k)return m; }
    return find_max(array,size,index+1,k); }
int main() {
    int N,K;
    scanf("%d %d\n",&N,&K);
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    return 0; }