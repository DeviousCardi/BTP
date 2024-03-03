#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int t=0,count=0,k;
    for(int j=0;j<n;j++){
        for(int s=0;s<n;s++){
            if(a[j]!=a[s]){
                if(a[j]!=1){
                    t++;
                    count=count+1; }
                if(a[j]==count){
                    k=t; } }
            else
                t++; }
        n=a[j+1]; }
    return 0; }