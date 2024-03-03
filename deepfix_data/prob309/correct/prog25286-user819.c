#include <stdio.h>
int main() {
  #include <stdio.h>
  int truth=1;
    int n;
    int arr[100];
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d,",&arr[i]); }
    for(i=0;i<n;i++){
        int count=0;
        int m=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==m){
                count++; } }
        if (count!=m){
            truth=0; } }
    if(truth==1){
        printf("Yes"); }
    else printf("No");
    return 0; }