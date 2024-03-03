#include <stdio.h>
int main(){
    int lucky, inp;
    int flag = 0;
    int num[100] = {0};
    scanf("%d\n%d", &lucky, &inp);
    for (int i = 0; i < inp; i++) {
        scanf("%d ", &num[i]); }
    for (int i = 0; i < inp; i++) {
        for (int j = 0; j < inp; j++) {
            if (num[i] + num[j] == lucky) {
                flag = 1;
                break; } }
        if (flag == 1) {
            break; } }
    flag == 1 ? printf("lucky") : printf("unlucky");
    return 0; }