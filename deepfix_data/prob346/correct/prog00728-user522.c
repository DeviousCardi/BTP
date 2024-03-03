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
            break;
            case 1:A1[1]++;
            break;
            case 2:A1[2]++;
            break;
            case 3:A1[3]++;
            break;
            case 4:A1[4]++;
            break;
            case 5:A1[5]++;
            break;
            case 6:A1[6]++;
            break;
            case 7:A1[7]++;
            break;
            case 8:A1[8]++;
            break;
            case 9:A1[9]++;
            break; } }
        for(int i=0;i<10;i++) {
            for(int k=0;k<A1[i];k++)
            printf("%d",i); }
    printf("end");
    return 0; }