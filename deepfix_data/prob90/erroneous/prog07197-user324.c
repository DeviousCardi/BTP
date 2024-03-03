#include <stdio.h>
int main(){
    int k,n,i,z;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int arr[k];
    for(i=0;i<n;i++){
        arr[i]=i+1;
        scanf("%d ",&arr[i]); }
   if((n+n-1)<=k) { printf("unlucky");}\\if in the program we have sum of the last two numbers less than the lucky no it is possible oterwise it is impossible
   else{printf("lucky");} }