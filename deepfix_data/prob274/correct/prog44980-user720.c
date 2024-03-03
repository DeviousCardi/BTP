#include <stdio.h>
int main(){
    int i,j,k,p=0,v=1,n,b,flag,l,e=0;
    int a[101];
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        scanf("%d",&b);
        a[i]=b; }
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=n;j++){
            if((i!=j)&&(a[i]==a[j])){
            k=a[i];
            i=v; } } }
    for(i=1;;i=a[i-1]){
        p=p+1;
        if(a[i]==k){
            e++;
            if(e==2){
                l=p;
                printf("%d ",l);}
            else if(e==3){
                flag=1;
                printf("%d",p-l); } }
            if(flag)break; }
    return 0; }