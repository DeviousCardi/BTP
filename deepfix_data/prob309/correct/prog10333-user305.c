#include <stdio.h>
int main() {
    int n, i, flag;
    scanf("%d ", &n);
    int arr[n], occ[1000];
    for(i = 0; i < 1000; i++) occ[i] = 0;
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]); }
    for(i = 0; i < n; i++){
        occ[arr[i]]++; }
    for(i = 0; i < n; i++){
        flag = 0;
        if(occ[arr[i]] != 2){
            printf("No");
            break;
        }else flag = 1; }
    return 0;
    if(flag) printf("Yes"); }