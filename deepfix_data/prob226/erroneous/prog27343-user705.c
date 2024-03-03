#include <stdio.h>
int recurrence(int ar[],int size,int n){
    int sum=0;
    int a[35];
    for(int i=0;i<size;i++){
        a[i]=ar[i]; }
    if(n<d){
        return a[n]; }
    else{
        for(int j=1;j<=size;i++){
            sum=sum+a[n-j]; }
        return sum; } }
int main() {
    int a,d,n,b[25];
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++){
        scanf("%d",&b[i]); }
    a=recurrence(b,d,n);
    printf("%d",a);
	return 0; }