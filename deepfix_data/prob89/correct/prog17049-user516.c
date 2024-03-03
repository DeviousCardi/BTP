#include <stdio.h>
int main(){
    int k,n,i,j,l,p,count=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        l=n-1;
            while(l!=j){
                p=a[j]+a[l];
                if(k==p)
                count=count+1;
                l--; } }
    if(count!=0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }