#include <stdio.h>
int main(){
int k,n;
scanf("%d%d",&k,&n);
int a[n];
int flag=0,i,j,m;
if(n<=100){
    for(i=0;i<n;i++){
        scanf("%d",&m);
        a[i]=m; }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])==k) flag=flag+1; } } }
if(flag>0) printf("lucky");
else printf("unlucky");
 return 0; }