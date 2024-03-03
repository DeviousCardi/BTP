#include <stdio.h>
#include <stdlib.h>
int main() {
    int i , n ,j ,space , num ,k , m ;
    scanf("%d",&n);
    space = n-1 ;
    for(i=1 ; i<=n ; i++){
        for(k=1 ; k<=space ; k++){
            printf(" "); }
            space--;
            num = n;
            for(j=1 ; j<=2*i -1 ; j++) {
                num = (num %10);
                printf("%d" , num);
                num++; }
            printf("\n"); }
	return 0; }