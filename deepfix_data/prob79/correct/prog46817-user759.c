#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,A,B,aptr,bptr;
    scanf("%d",&n);
    int *a=malloc(n*(sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    aptr=0;
    bptr=n-1;
    A=*(a+aptr);
    B=*(a+bptr);
    while(bptr-aptr>1) {
        while(bptr-aptr>1 && A<=B)
            A+=*(a+++aptr);
        while(bptr-aptr>1 && A>B)
            B+=*(a+--bptr); }
    ++aptr;
    printf("%d %d",aptr,n-aptr);
    free(a);
	return 0; }