#include <stdio.h>
int max(int a,int b){
    if(a>b)return a;
    else return b;}
    int min(int a,int b){if(a<b)return a;
    else return b; }
int main() {
    int e,i,j,k,n,m,p,q;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&e);
    arr[i]=e;}
    m=arr[0];
    p=arr[0];
    for(j=1;j<n;j++){
        m=max(arr[j],m); }
    for(k=1;k<n;k++){
        p=min(arr[k],p); }
    for(q=0;q<n;q++){
        if(arr[q]==p)printf("%d ",m);
      else if(arr[q]==m)printf("%d ",p);
        else printf("%d ",arr[q]); }
    printf("end");
    return 0; }