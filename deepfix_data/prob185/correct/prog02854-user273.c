#include <stdio.h>
void match(int l,int r,int a[],int total){
    int i,j,sum=0,flag=0,k=0;
    for(i=l;i<r;i++){
        sum=0;
        while(k<r) {
            flag=0;
            sum=0;
        for(j=i+1;j<r;j=j+k){
            sum=sum+a[i]+a[j];
        if(sum==total){
            flag=1;
            break; }
        k++; } } }
    if(flag==1)
            printf("YES");
    if(flag==0)
    printf("NO"); }
int main() {
    int N,S,i;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]); }
    match(0,N,arr,S);
    return 0; }