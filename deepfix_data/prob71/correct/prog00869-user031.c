#include <stdio.h>
int main() {
    int n,i,j,temp;
    float median;
    scanf("%d",&n);
    int bids[n];
    for(i=0;i<n;i++){
        scanf("%d",&bids[i]); }
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(bids[i]>=bids[i+1]){
                temp=bids[i];
                bids[i]=bids[i+1];
                bids[i+1]=temp; }
            else
            continue; } }
    if(n%2==0){
        median=(bids[(n-1)/2]+bids[(n-1)/2+1])/2.0;
        printf("%.1f",median); }
    else{
        median=bids[n/2];
        printf("%.0f",median); }
    for(i=0;i<n;i++){
        printf("%d",bids[i]); }
    return 0; }