#include <stdio.h>
#include <stdlib.h>
int main() {
    int i , n ,j ,space , num ,k;
    scanf("%d",&n);
    space = n-1 ;
    num = 1;
    for(i=0 ; i<n ; i++){
        for(k=0 ; k<space ; k++){
            printf(" "); }
            space--;
            for(j=0 ; j <i ; j++){printf("%d", num);}
            num++; }
	return 0; }