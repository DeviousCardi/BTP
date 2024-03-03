#include <stdio.h>
int main() {
    int N,i,j,f=1;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
     for(i=0;i<N;i++) {
            for(j=i+1;j<N;j=j+1) {
                if(a[i]!=a[j])
                f=1;
                else
                f=0; }
                if(f==0)
                printf("YES");
                return 0; }
         if(f==1)
         printf("NO");
    return 0; }