#include <stdio.h>
int main()
{   int hel,ptf,i,j,m,n=0;
    scanf("%d\n%d\n",&hel,&ptf);
    for(i=0;i<ptf;i++){
        scanf("%d",&m);
        if((m-n)>0){
            n=m; }
        else if((m-n)<0){
            hel=hel+(m-n);
            n=m; }
        if(hel==0)
        break; }
    if(hel<=0)
    printf("No");
    else if(hel>0)
    printf("Yes");
    return 0; }