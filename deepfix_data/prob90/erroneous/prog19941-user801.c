#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int a[n];
    int i=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flag=0;
    int m=0;
    while(m<n) {
        int j=0;
        while(j<n) { {
                if (a[j]==(k-[ai]))
                flag=1; }
            j++; }
        m++; }
    if (flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }