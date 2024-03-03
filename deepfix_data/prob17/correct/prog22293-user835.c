#include <stdio.h>
int main() {
    int num1,num2,i,j,a[100],b[100],c[100][100];
    int k=0;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&a[i]); }
    scanf("%d\n",&num2);
    for(j=0;j<num2;j++) {
        scanf("%d ",&b[j]); }
    for(k=k%num1;k<=num1;k++) {
        c[num1][num2]=a[k];
        printf("%d ",c[num1][num2]); }
    return 0; }