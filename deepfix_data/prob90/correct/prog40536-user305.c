#include <stdio.h>
int main(){
    int k, n, list[n];
    int i, j, a, b, flag;
    scanf("%d", &k);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]); }
    for(i = 0; i < n; i++){
        a = list[i];
        for(j = i+1; j < n; j++){
            b = list[j];
            if((a == i && b == (k-i)) || (a == (k-i) && b == i)){
                flag = 1; } } }
    if(flag == 1){
        printf("lucky");
    }else printf("unlucky");
    return 0; }