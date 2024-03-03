#include<stdio.h>
int max(int a,int b){
    if(a>b)return a;
    else return b; }
int min(int a,int b){
    if(a>b)return b;
    else return a; }
int main() {
    int a[20],max_till[20];
    int n,c,d=1,i,j;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    max_till[0]=1;
    for(i=1;i<=n-1;i++){
        c=0;
     for(j=0;j<i;j++){
         if(a[j]<a[i]){
             d=max(d,max_till[j]);
             c++; } }
     if(c==0)max_till[i]=1;
     else max_till[i]=1+d; }
    j=0;
    for(i=0;i<=n-1;i++){
        j=max(j,max_till[i]); }
   printf("%d",j);
    return 0; }