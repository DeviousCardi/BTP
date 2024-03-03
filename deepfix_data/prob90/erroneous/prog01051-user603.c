#include <stdio.h>
int main(){
    int lucky,n,arr[500];
    scanf("%d %d",&lucky,&n);
    int list[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&list[i]);
        arr[list[i]]++; }
    for(int j=0;j<n,j++) {
        if(arr[lucky-list[j]]!=0) {
            printf("lucky");
            break; } }
    return 0; }