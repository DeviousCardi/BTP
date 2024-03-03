#include <stdio.h>
int main(){
    int a1,a2,n,i,n_term;
    scanf("%d %d %d",&a1,&a2,&n);
    if (n==1)
        n_term = a1;
    else if (n==2)
        n_term = a2;
    else {
        for(i=2;i<n;i++) {
            n_term = a2 + a1 - 2;
            a1 = a2;
            a2 = n_term; } }
    printf("%d",n_term);
    return 0; }