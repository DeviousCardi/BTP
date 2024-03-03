#include <stdio.h>
int main() {
    int n,missing,twice,k,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        arr[i] = 0; }
    for(i=1;i<n;i++){
        scanf("%d",&k);
        arr[k]++; }
    for(i=1;i<n;i++){
        if(arr[i] == 0){
            missing = arr[i];
        }else if(arr[i]==2){
            twice = arr[i]; } }
    printf("%d\n",twice);
    printf("%d",missing);
    return 0; }