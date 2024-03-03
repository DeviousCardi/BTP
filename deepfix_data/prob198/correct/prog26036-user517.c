#include <stdio.h>
#include <stdlib.h>
int main() {
    int a1[20],a2[20];
    int N1,N2,i=0,j=0;
    scanf("%d\n",&N1);
        for(i=0;i!=N1;i++){
            scanf("%d\n",&a1[i]); }
    scanf("%d\n",&N2);
        for(j=0;j!=N2;j++){
            scanf("%d",&a2[j]); }
    printf("%s",a1);
    printf("%s",a2);
	return 0; }