#include <stdio.h>
int main(){
    int lucky,arr[1000],n;
    scanf("%d\n%d",&lucky,&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(int j=0;j<n;j++) {
        for(int k=0;k<n;k++) {
            if(arr[k]==lucky-j) {
                printf("lucky");
                break; } } }
    return 0; }