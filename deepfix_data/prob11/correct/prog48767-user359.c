#include <stdio.h>
long s;
int n;
int check_sum(int t[],int size,int index,int sum){
    if(index==n)
    return sum;
    else{
        return check_sum(t,size,index+1,sum+t[index]); } }
int main() {
    int i=0,k;
    scanf("%d %ld",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    k=check_sum(a,n,0,0);
    printf("%d",k);
    return 0; }