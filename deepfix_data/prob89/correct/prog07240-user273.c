#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    int list[n];
    scanf("%d",&n);
    for(n=0;n<=100;n++)
    scanf("%d",&list[n]);
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=i;n++)
        if(k!=list[i]+list[j])
        continue;
        else {
            if(k==list[i]+list[j]) {
                printf("lucky"); }
            else {
                if(k!=list[i]+list[j]) {
                    printf("unlucky"); } } } }
    return 0; }