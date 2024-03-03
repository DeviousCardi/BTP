#include <stdio.h>
int main(){
    int n, count, inp;
    count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &inp);
            if(j == i && inp == 1){
                count++; } } }
    printf("%d \n", count);
    if(count == n){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    }else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    return 0; }