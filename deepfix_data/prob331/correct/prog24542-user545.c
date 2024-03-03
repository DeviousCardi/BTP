#include <stdio.h>
int main() {
    int size;
    scanf("%d\n",&size);
    int flag=0;
    for(int a=1;a<=size;a++) {
        for(int b=1;b<=size;b++) {
            int temp=0;
            scanf("%d",&temp);
            if((b==a&&temp!=1)) {
                flag=-1;
                break; } } }
        if(flag==-1) {
            printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",size,size); }
         if(flag==0)
         printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",size,size);
    return 0; }