#include <stdio.h>
int main(){
    int k,n,i;
    scanf("%d",&k);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int noc[500];
    for(int i=0;i<500;i++){
        noc[i]=0; }
    for(int i=0;i<n;i++){
        noc[arr[i]]++; }
    for(i=0;i<=(k/2);i++){
        if(noc[i]!=0 && noc[k-i]!=0){
            printf("lucky");
            break; } }
    if(i==(k/2)+1){
        if(noc[i]>=2)
            printf("lucky");
        else
            printf("unlucky"); } }
    return 0; }