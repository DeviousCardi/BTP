#include <stdio.h>
int main(){
    int n, i, k, a, c, flag = 0, time =0, revisit = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]); }
    int room[9999999];
    room[0] = 1;
    a = 1;
    for(i = 0; ; i++){
        c = arr[a-1];
        a = arr[c];
        room[i+1] = a;
        time++;
        printf("%d %d\n", time, i+1);
        for(k = 0; k < i+1; i++){
            if(arr[i+1] == arr[k]){
                flag = 1;
                break; } }
        if(flag == 1){
            break; } }
    printf("%d ", time);
    printf("%d ", time-1);
    return 0; }