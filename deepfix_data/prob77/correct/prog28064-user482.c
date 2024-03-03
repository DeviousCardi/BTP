#include <stdio.h>
int main() {
    int N=0;
    scanf("%d",&N);
    int a[N];
    int i1=0;
    for(i1=0;i1<=N-1;i1=i1+1){scanf("%d",&a[i1]);}
    int i2=1;
    int R=a[0];
    int n1=0;
    for(i2=1;i2<=N-1;i2=i2+1) {
        if(a[i2]>R) {
         R=a[i2];
         n1=i2; } }
    int i3=1;
    int P=a[0];
    int n2=0;
    for(i3=1;i3<=N-1;i3=i3+1) {
        if(a[i3]<P) {
            P=a[i3];
            n2=i3; } }
    a[n1]=P;
    a[n2]=R;
    int i4=0;
    for(i4=0;i4<=N-1;i4=i4+1) {
        printf("%d ",a[i4]); }
    printf("end");
    return 0; }