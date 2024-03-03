#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    char str[2*n-1];
    scanf("%s", str);
    int count = 0;
    int flag = 0;
    for(i=0;i<2*n-1;i=i+2) {
        count = 0;
        for(j=0;j<2*n-1;j= j+2) {
            if(str[j]==str[i]) {
                count++;
                printf("%d %d %d\n", str[i], str[j], count); } }
        if(count!= str[i]-'0') {
            flag = 1;
            printf("No");
            break; } }
    if(flag == 0 )
        printf("Yes");
    return 0; }