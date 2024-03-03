#include<stdio.h>
int main() {
    int N;
    int A,B,C,D;
    int a[N];
    scanf("%d",&N);
    scanf("%d",&a[N]);
    A=a[1]-a[2];
    B=A-a[3];
    C=B-a[4];
    D=C-a[5];
    printf("%d",A+B+C+D);
    return 0; }