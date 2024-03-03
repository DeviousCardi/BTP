#include <stdio.h>
int main() {
    int n,A[10000],A1[10];
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    A1[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]);
        switch(A[i]) {
            case 0:A1[0]++;
            case 1:A1[1]++;
            case 2:A1[2]++;
            case 3:A1[3]++;
            case 4:A1[4]++;
            case 5:A1[5]++;
            case 6:A1[6]++;
            case 7:A1[7]++;
            case 8:A1[8]++;
            case 9:A1[9]++; } }
        for(int i=0;i<10;i++) {
            for(int k=0;k<A1[i];k++)
            printf("%d",i); }
    printf("end");
    return 0; }