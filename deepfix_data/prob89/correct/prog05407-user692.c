#include <stdio.h>
int main(){
    int lucky, inp;
    int flag = 0;
    int num[100] = {0};
    int odd[100] = {0}, oCount = 0;
    int even[100] = {0}, eCount = 0;
    scanf("%d", &lucky);
    scanf("%d", &inp);
    for (int i = 0; i < inp; i++) {
        scanf("%d ", &num[i]);
        if (num[i] % 2 == 0) {
            even[eCount] = num[i];
            eCount++;
        } else {
            odd[oCount] = num[i];
            oCount++; } }
    printf("%d %d", eCount, oCount);
    printf("\n\n");
    for (int i = 0; i <= eCount; i++) {
        for (int j = 0; j <= oCount; j++) {
            printf("%d %d\n", even[i], odd[j]);
            if (even[i] + odd[j] == lucky) {
                flag = 1;
                break; } }
        if (flag == 1) {
            break; } }
    flag == 1 ? printf("lucky") : printf("unlucky");
    return 0; }