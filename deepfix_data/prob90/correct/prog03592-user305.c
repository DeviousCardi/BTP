#include <stdio.h>
int main(){
    int k, n, list[n];
    int i, j, a, b, flag, c[500];
    scanf("%d", &k);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]); }
    for(i = 0; i < 500; i++) c[i] = 0;
    for(i = 0; i < n;i++) c[list[i]]++;
    for(i = 0; i < n;i++){
        a = list[i];
        b = k - a;
        if(c[a] > 0 && c[b] > 0){
            flag = 1;
            break; } }
    if(flag == 1){
        printf("lucky");
    }else printf("unlucky");
    return 0; }