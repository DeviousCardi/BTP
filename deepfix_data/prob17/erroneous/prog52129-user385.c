#include <stdio.h>
int main() {
    int a1[20],a2[20],i,j,k,l=0;
    int N1,N2;
    scanf("%d",&N1);
    for(i=0;i<N1;i++) {
        scanf("%d",&a1[i]); }
     scanf("%d",&N2);
     for(i=0;i<N2;i++) {
         scanf("%d",&a2[i]); }
         for(j=0;j<N1;j++)
         { if(a2[0]==a1[j]) {
         for(k=0;k<N2;k++) {
            if (a2[k]!=a1[j+k])
            l=1;
            else
            l=0; }
         if(l == 0) {
             printf("y"); } } } }
	return 0; }