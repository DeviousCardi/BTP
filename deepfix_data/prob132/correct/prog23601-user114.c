#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int*a,*N;
    a=(int*)calloc(n,sizeof(int));
    N=(int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++) {
       scanf("%d",a+i);
       int h= *(a+i);
       if(h>n) {
           printf("No");
           return 0; }
       N[h]++;
       printf("N[%d] = %d\n",h,N[h]); }
    for(int i=0;i<n;i++) {
        printf(" N[%d]  == %d\n",a[i],N[a[i]] );
        if(a[i]!=N[a[i]]) {
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }