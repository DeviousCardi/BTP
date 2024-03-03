#include <stdio.h>
int main(){
    int lucky, inp;
    int flag = 0;
    int num[100] = {0};
    for (int i = 0; i < inp; i++) {
        scanf("%d ", &num[i]); }
    printf("A");
    for (int i = 0; i < inp; i++) {
        for (int j = 0; j < inp; j++) {
            printf("%d  %d  %d", i, j, num[i] + num[j]);
            if (num[i] + num[j] == lucky) {
                flag = 1;
                break; } }
        if (flag == 1) {
            break; } }
    flag == 1 ? printf("lucky") : printf("unlucky");
    return 0; }