#include <stdio.h>
int main(){
    int n, x;
    int i, j;
    int flag = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &x);
            if(i==j) {
                if(x!=1) {
                    flag=1;
                    break; } }
            else {
                if(x!=0) {
                    flag =1;
                    break; } } }
        if (flag ==1)
            break; }
    if (flag==1)
        printf(GIVEN %d x %d matrix is NOT an IDENTITY MATRIX);
    else
        printf(GIVEN %d x %d matrix is an IDENTITY MATRIX);
    return 0; }