#include <stdio.h>
int main() {
    int k,n;
    scanf("%d \n %d",&k,&n);
    int a[n],b[500];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<499;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    b[a[i]]++;
    int counter=0;
    for(int i=0;i<n;i++) {
        if(b[i]!=0 && b[k-i]!=0) {
            counter=1;
            i=500; } }
    if(counter==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }