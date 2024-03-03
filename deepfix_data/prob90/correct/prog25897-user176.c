#include <stdio.h>
int main(){
    int k,j,i;
    int n;
    int num[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=0;i<n;j++) {
        for(j=i+1;j<n;j++) {
            if(k==num[i]+num[j]) {
                printf("lucky");
                break; } } }
    printf("unlucky");
    return 0; }