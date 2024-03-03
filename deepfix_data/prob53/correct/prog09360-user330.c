#include<stdio.h>
int diff(long int a[],int count,int dif,long int size){
    dif-=a[count];
    if(count==size-1)return dif;
    return diff(a,count+1,dif,size); }
int main() {
    int i=1,x;
    long int n,c;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    c=a[0];
    x=diff(a,i,c,n);
    printf("%d",x);
    return 0; }