#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    int list[n];
    scanf("%d",&n);
    for(n=0;n<=100;n++)
    scanf("%d",&list[n]);
    for(int i=0;i<=100;i++) {
        for(int n=0;n<=100;n++)
        if(k!=list[i]+list[n])
        continue;
        else {
            if(k==list[i]+list[n]) {
                printf("lucky"); }
            else {
                if(k!=list[i]+list[n]) {
                    printf("unlucky"); } } } }
    return 0; }