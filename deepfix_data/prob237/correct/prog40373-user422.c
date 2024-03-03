#include<stdio.h>
int arr[100];
int max(int a,int b){
    if (a>b)
    return a;
    else
    return b; }
int getInversions(int l,int r) {
   int a,b,i,j;
   b=0;
   for(i=l;i<(l+r-1);i++){
        a= arr[i];
        for(j=i+1;j<=(i+r-1);j++){
         if(a>arr[j])
         b+=1; } }
   return b; }
int main() {
    int a,b,i,p,z;
    p=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<a;i++){
      p= p+ (a-i)/b; }
    int sub[p];
    for(i=0;i<p;i++){
        sub[i]=getInversions(i,b); }
    z=sub[0];
    for(i=1;i<p;i++){
        z=max(z,sub[i]);
        printf("%d",z); }
    printf("%d",z);
    return 0; }