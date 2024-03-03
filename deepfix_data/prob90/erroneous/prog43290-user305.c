#include <stdio.h>
int main(){
    int k, n;
    int i, flag ;
    flag = 0;
    scanf("%d", &k);
    scanf("%d", &n);
    int list[100000], c[500];
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]); }
    for(i = 0; i < 500; i++) c[i] = 0;
    for(i = 0; i < n; i++) c[list[i]] = 1;
    for(i = 0 ; i < n; i++){
        a = list[i];
        b = k - a;
        if(c[b] > 0){
            flag = 1;
            break; } }
    if(flag == 1){
        printf("lucky");
    }else printf("unlucky");
    return 0; }