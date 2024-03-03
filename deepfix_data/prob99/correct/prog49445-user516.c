#include<stdio.h>
int main() {
    int n,p;
    scanf("%d",&n);
    int a[n];
    int maxtill[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    maxtill[i]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i])
            maxtill[i]=maxtill[i]+1; } }
    for(int i=0;i<n;i++){
        if(maxtill[i+1]>maxtill[i]){
            p=maxtill[i];
            maxtill[i]=maxtill[i+1];
            maxtill[i+1]=p; } }
    printf("%d",1+maxtill[0]);
    return 0; }