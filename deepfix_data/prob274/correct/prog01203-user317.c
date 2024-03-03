#include <stdio.h>
int main(){
    int n,flag=1,count=0,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int b[100];
    b[0]=1;
    b[1]=a[0];
    for(int i=2;i<100;i++){
        b[i]=a[b[i-1]-1]; }
    for(int i=0;i<11;i++)
    for(int i=1;i<100 && flag==1;i++){
        for(int j=i+1;j<100 && flag==1;j++){
            if(b[j]==b[i]){
                printf("%d  %d",i,j); } } }
    return 0; }