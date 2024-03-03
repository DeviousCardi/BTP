#include <stdio.h>
#include <string.h>
int main() {
    int i,j,n;
    char str[200];
    scanf("%d",&n);
    gets(str);
    for(i=0;i<2*n;i=i+2) {
        k=str[i];
        for(j=0;j<2*n;j=j+2) {
            if((str[i])=(str[j]))
            s=s+1;
            else
                continue; }
        if(k=s)
        f=1;
        else
            break; }
    if(f==1)
    printf("Yes\n");
    else
    printf("No\n");
    for(i=0;i<n;i++)
    printf("%d",str[i]);
    return 0; }