#include <stdio.h>
int recurrence(int ar[],int size,int n){
    int a[35];
    for(int i=0;i<size;i++){
        a[i]=ar[i]; }
    if(n<size){
        return a[n]; }
    else{
        for(int i=size;i<=n;i++){
            a[i]=0;
        for(int j=i-1 ;j>=i-size;j++){
            a[i]=a[i]+a[j]; }
        return a[n]; } } }
int main() {
    int a,d,n,b[25];
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++){
        scanf("%d",&b[i]); }
    a=recurrence(b,d,n);
    printf("%d",a);
	return 0; }