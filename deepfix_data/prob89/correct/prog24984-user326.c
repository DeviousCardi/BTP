#include <stdio.h>
int main()
{   int k,n;
    int str[100];
    int j,l,i,count;
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&str[i]); }
    count=0;
    for(j=0;j<n;j++) {
        for(l=j+1;l<n;l++) {
            if(k==(str[j]+str[l])) {
                printf("lucky");
                count=1; } }
        if(count==1)
            break; }
    if(count==1) ;
    else
        {   printf("unlucky");}
    return 0; }