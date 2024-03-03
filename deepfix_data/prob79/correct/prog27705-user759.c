#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,A=0,B=0,aptr,bptr;
    scanf("%d",&n);
    if(n==1) {
        printf("1 0");
        return 0; }
    int *a=malloc(n*(sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    aptr=0;
    bptr=n-1;
    while(bptr-aptr>2) {
        while(bptr-aptr>2 && A<=B)
            A+=*(a+aptr++);
        while(bptr-aptr>2 && A>B)
            B+=*(a+bptr--); }
    if(A+*(a+aptr) <= B+*(a+bptr))
        aptr++;
    printf("%d %d",aptr+1,n-aptr-1);
    free(a);
	return 0; }