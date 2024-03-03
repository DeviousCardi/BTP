#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,A,B,aptr,bptr;
    scanf("%d",&n);
    if(n<3) {
        if(n==1)
            printf("1 0");
        if(n==2)
            printf("1 1");
        return 0; }
    int *a=malloc(n*(sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    aptr=0;
    bptr=n-1;
    A=*(a+aptr);
    B=*(a+bptr);
    while(bptr-aptr>1) {
        while(bptr-aptr>1 && A<=B)
            A+=*(a+(++aptr));
        while(bptr-aptr>1 && A>B)
            B+=*(a+(--bptr)); }
    printf("%d %d",aptr+1,n-aptr-1);
    free(a);
	return 0; }