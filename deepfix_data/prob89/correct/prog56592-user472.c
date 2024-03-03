#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    scanf("\n");
    int n;
    scanf("%d",&n);
    scanf("\n");
    int a[100];
    for(int i=0;i<100 && a[i]!=EOF;i++)
    {scanf("%d",&a[i]);}
    int count=0;
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++) {
    if((a[i]+a[j])%k==0){
    count++;} } }
    if (count>1){printf("lucky");
    }else {printf("unlucky");}
    return 0; }