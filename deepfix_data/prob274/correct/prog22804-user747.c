#include <stdio.h>
int main(){
    int i=0,t=0,k=0,n=0,j=0,l=0;
    int a[150],x=0,count=0;
    scanf("%d\n",n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    x=a[0];
    for(j=0;j<n;j++){
        a[j]=x;
        while(x!=a[1]){
            j=x;
            count++; }
        if(j==2){
            break; } }
    printf("%d",count);
    return 0; }