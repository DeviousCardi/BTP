#include <stdio.h>
int main(){
    int k,i,n;
    scanf("%d",&k);
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
           scanf("%d",arr[i]); }
    int p=0;
    int q=1;
    int a;
    while(q<n&&p<n){
            if(arr[q]+arr[p]==k){
                    printf("lucky");
                    return 0; }
            q++;
            if(q==n-1){
                    p++;
                    q=p+1; } }
    printf("unlucky");
    return 0; }