#include <stdio.h>
int main(){
    int k,n,i,l;
    scanf("%d",&k);
    scanf("%d",&n);
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int noc[500];
    for(int i=0;i<500;i++){
        noc[i]=0; }
    for(int i=0;i<n;i++){
        l=arr[i];
        noc[l]++; }
    for(i=0;i<=(k/2);i++){
    if(k-i<=499){
       if(noc[i]!=0 && noc[k-i]!=0){
             printf("lucky");
             flag=1;
             break;
        if(i==499)
           break; } } }
    if(flag==0){
         printf("unlucky"); }
    return 0; }