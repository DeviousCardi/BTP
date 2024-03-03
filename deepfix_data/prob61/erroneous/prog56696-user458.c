#include<stdio.h>
int main(){
    int n,k;
    scnaf("%d%d\n",&n,&k);
    int a[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int c[k+1],d[i+1];
    for(int i=0;i<k+1;i++){
        c[i]=i; }
    for(int i=0;i<k+1;i++){
        d[i]=0; }
    for(int i=0;i<=k;i++){
        for(int j=0;j<n;j++){
            if(c[i]==a[j]){
                count++; } }
        d[i]=count;
        count=0; }
    for(int i=0;i<k+1;i++){
        for(int j=1;j<=d[i];j++){
            printf("%d",c[i]); } } }