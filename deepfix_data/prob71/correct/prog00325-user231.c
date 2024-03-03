#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<=100000){
        int k[n];
        int i,j,t;
        for(i=0;i<n;i++){
            scanf("%d",&k[i]); }
        for(i=0;i<n;i++){
            for(j=n;j>i;j--){
                if(k[i]>k[j]){
                    t=k[i];
                    k[i]=k[j];
                    k[j]=t; } } }
        if(n%2==1){
            printf("%d",k[(n-1)/2]); }
        else{
            float m;
            m=((float)k[n/2]+k[(n/2-1)])/2;
            printf("%.1f",m); } }
    return 0; }