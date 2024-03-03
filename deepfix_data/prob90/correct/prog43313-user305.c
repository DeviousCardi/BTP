#include <stdio.h>
int main(){
    int k, n, list[n];
    int i, j, a, b, flag, c[500];
    flag = 0;
    scanf("%d", &k);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]); }
    for(i = 0; i < 500; i++) c[i] = 0;
    for(i = 0; i < n; i++) c[list[i]]++;
    for(i = 0; i < 500; i++){
        if(c[i]!=0 && c[k-i]!=0){
            flag = 1;
            i=500; } }
    if(flag == 1){
        printf("lucky");
    }else printf("unlucky");
    return 0; }