#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    int n,i,dif;
    scanf("%d",&n);
    int a[100000];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    dif=sum_num(a,n);
    printf("%d",dif); }
long int sum_num(int b[],int m){
    int i,p=0;
    for(i=0;i<m;i++){
    p=b[i]-b[i+1];
    b[i]=p; }
    return p; }