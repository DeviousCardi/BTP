#include <stdio.h>
int main() {
    int a[10];
    for(int i=0;i<10;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<10;i++) {
            int k=a[i];
            for(int j=i;j<(9);j++) {
                a[j]=a[j+1]; }
            for(int k=0;k<(10-i);k++)
        printf("%d ",a[k]);
        printf("\n"); } }