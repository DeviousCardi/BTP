#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int list[n];
     int l=0;
    while(l<n) {
        scanf("%d",&list[l]);
        l++; }
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
        if(k==list[i]+list[j]) {
            printf("lucky");
            break; }
        else {
            continue;
            if(k==list[i]+list[j]) {
                printf("lucky");
                break; }
            else {
                if( k!=list[i]+list[j]) {
                    printf("unlucky");
                    break; } } } } }
    return 0; }