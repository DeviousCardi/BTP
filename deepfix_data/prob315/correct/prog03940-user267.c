#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,h;
    scanf("%d",&n);
    int a[n];
    for(h=0;h<n;h++){
        scanf("%d",&a[h]); }
    int count =0;
    int i,j;
    int g[n];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count=count+1; }
        }g[i]=count; }
    printf("%d\n",count);
    int x;
    for(x=0;x<n;x++){
        printf("%d ",g[x]); }
    return 0; }