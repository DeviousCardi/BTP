#include<stdio.h>
int main() {
    int n,i,j,arr[20],maxtill[20]={0},temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    maxtill[0]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if (arr[j]>=arr[i]){
                continue; }
            if(maxtill[j]>maxtill[i])
                maxtill[i]=1+maxtill[j]; } }
    printf("%d",maxtill[n-1]);
    return 0; }