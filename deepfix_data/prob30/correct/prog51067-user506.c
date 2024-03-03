#include <stdio.h>
int main(){
int k,i;
    int j, a, t;
    scanf("%d\n", &t);
    int A[t];
    for (i=0;i<t;++i)
    scanf("%d", &A[i]);
    for (i=0;i<t;++i) {
     for (j=i+1;j<t;++j) {
            if (A[i]<A[j]) {
                a=A[i];
                A[i]=A[j];
                A[j]=a; } } }
    for (i=0; i<t; ++i) {
        printf("%d\n", A[i]); }
    return 0; }