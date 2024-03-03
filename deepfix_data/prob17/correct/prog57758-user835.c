#include <stdio.h>
int main() {
    int i,j,num1,num2,count,a[100],b[100];
    scanf("%d\n",&num1);
    for(i=1;i<num1;i++) {
        scanf("%d ",&a[i]); }
    scanf("%d\n",&num2);
    for(j=1;j<num2;j++) {
        scanf("%d ",&b[j]); }
    for(i=0;i<num1;i++) {
        if(b[0]==a[i])
        break; }
    for(j=i+1;j<num1;j++) {
        if(b[1]==a[i]) {
            printf("YES");
            return 0; }
        else {
            printf("NO");
            return 0; } } }