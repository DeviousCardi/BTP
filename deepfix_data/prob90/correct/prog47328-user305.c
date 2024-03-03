#include <stdio.h>
int main(){
    int k, n, list[n];
    int i, j, a, b, flag;
    scanf("%d", &k);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]); }
    flag = 0;
    for(i = 0; i < n; i++){
        a = list[i];
        b = k - a;
        for(j = i+1; j < n; j++){
            if(b == list[j]){
                flag = 1;
                i = n;
                break; } } }
    if(flag == 1){
        printf("lucky");
    }else printf("unlucky");
    return 0; }