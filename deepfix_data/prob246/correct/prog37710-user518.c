#include <stdio.h>
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);
    char a;
    for(i = 0; i < n; i++){
        scanf("%c", &a);
        printf("%c", a);
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            printf("Special");
            flag = 1;
            break; } }
    if(flag == 0){
        printf("Normal"); }
    printf("%d", flag);
    return 0; }