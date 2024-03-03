#include <stdio.h>
int main(){
    int n;
    int y;
    int min=400;
    int i;
    int j, k;
    scanf("%d",&n);
    int s[200];
    for(i=0;i<2*n;i=i+1){
        scanf("%d",&s[i]); }
        for(i=0;i<2*n;i=i+1){
            for(j=i+1;j<2*n;j=j+1){
                if(s[i]==s[j]){
                    k = j - i;
                    if(k<min){
                        min = k; } } } }
            printf("%d",min);
    return 0; }