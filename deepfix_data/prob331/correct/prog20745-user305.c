#include <stdio.h>
int main(){
    int n, flag1, flag2, inp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &inp);
            if(j != i && inp != 0){
                flag1 = 1;
            }else flag1 = 0;
            if(j == i && inp == 1 && flag1){
                flag2 = 1;
            }else flag2 = 0; } }
    if(flag2){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    }else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    return 0; }