#include<stdio.h>
int eqsum(int array[30],int size,int start,int half_sum){
    if(half_sum==0)
        return 1;
    if(start==size)
        return 0;
    return eqsum(array+1,size,start+1,half_sum)||eqsum(array+1,size,start+1,half_sum-array[start]); }
int main(void){
    int n,i;
    scanf("%d",&n);
    int ar[30];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]); }
    int hs=0;
    for(i=0;i<n;i++){
        hs+=ar[i]; }
    hs/=2;
    if(eqsum(ar,n,0,hs))
        printf("%s","YES");
    else
        printf("%s","NO");
    return 0; }