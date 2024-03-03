#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[(2*n)];
    scanf("%s",str);
    int num[10];
    for(int i=0;i<10;i++) {
        int count=0
        for(int j=0;j<((2*n)-1);j=j+2) {
            if(str[j]==i+'0') {
                count++; } }
        num[i]=count; }
    int k=0;
    for(i=0;i<10;i++) {
        if(num[i]==i) {
            k++; } }
    if(k==10) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }