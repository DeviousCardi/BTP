#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,h;
    scanf("%d",&n);
    int a[n];
    for(h=0;h<n;h++){
        scanf("%d",&a[h]); }
    int count =0;
    int gain=0;
    int i,j;
    int g[n];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count=count+1;
                gain=count; }
        }g[i]=count; }
    printf("%d\n",gain);
    int x;
    for(x=0;x<n;x++){
        if(x>0) printf("%d ",g[x]-g[x-1]);
        else printf("%d ",g[x]); }
    return 0; }