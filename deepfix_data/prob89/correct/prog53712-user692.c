#include <stdio.h>
int main(){
    int lucky, inp;
    int flag = 0;
    int num[100] = {0};
    int odd[100] = {0}, oCount = 0;
    int even[100] = {0}, eCount = 0;
    scanf("%d\n%d", &lucky, &inp);
    for (int i = 0; i < inp; i++) {
        scanf("%d ", &num[i]);
        if (num[i] % 2 == 0) {
            even[eCount] = num[i];
            eCount++;
        } else {
            odd[oCount] = num[i];
            oCount++; } }
    for (int i = 0; i < oCount; i++) {
        for (int j = 0; j < eCount; j++) {
            if (even[j] + odd[i] == lucky) {
                flag = 1;
                break; } }
        if (flag == 1) {
            break; } }
    flag == 1 ? printf("lucky") : printf("unlucky");
    return 0; }