#include <stdio.h>
int main(){
    int n, i, k, j, a, c, flag = 0, time =0, revisit = 0;
    scanf("%d ", &n);
    int arr[n];
    for(i = 0; i < n-1; i++){
        scanf("%d ", &arr[i]); }
    scanf("%d", &arr[n-1]);
    for(i = 0; i < n; i++){
        printf("%d", arr[i]); }
    int room[9999999];
    room[0] = 1;
    a = 1;
    for(i = 1; ; i++){
        c = arr[a-1];
        printf("%d\n", arr[a-1]);
        a = arr[c-1];
        room[i] = a;
        time++;
        printf("%d %d %d  %d\n", time, i, room[i], c);
        for(k = 0; k < i; k++){
            if(room[i] == room[k]){
                printf("\n%d %d\n\n", arr[i+1], arr[k]);
                flag = 1;
                j = i+1 - k;
                break; } }
        if(flag == 1){
            break; } }
    return 0; }