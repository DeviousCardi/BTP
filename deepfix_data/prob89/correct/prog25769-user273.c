#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int list[n];
    for(int k=0;k<n;k++)
    scanf("%d",&list[k]);
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++)
        if(k!=list[i]+list[j])
        continue;
        else {
            if(k==list[i]+list[j]) {
                printf("lucky"); }
            else {
                if(k!=list[i]+list[j]) {
                    printf("unlucky"); } } } }
    return 0; }