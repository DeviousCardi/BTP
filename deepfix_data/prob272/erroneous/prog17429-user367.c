#include <stdio.h>
int main() {
    int a1,a2,n;
    int Tn;
    scanf("%d%d%d",&a1,&a2,&n);
    int j=a1,k=a2;
    if(n==1)
    Tn=a1;
    else if(n==2)
    Tn=a2;
    else if(n>2) {
        for(i=1;i<=(n-2);i++) {
            Tn=k+j-2;
            k=j;
            j=Tn; } }
    printf("%d",Tn);
    return 0; }