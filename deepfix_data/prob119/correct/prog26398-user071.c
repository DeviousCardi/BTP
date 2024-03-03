#include <stdio.h>
#include <stdlib.h>
 int  trans(int n,int from,int end,int temp){
    int count=1;
        if(n>0){
            count=1;
            trans(n-1,temp,end,from);
            count=count*2; }
    return count=count-1;
    printf("%d",count); }
int main() {
    int n,n1,n2,n3;
    scanf("%d\n%d\n%d\n%d\n",&n,&n1,&n2,&n3);
	return 0; }