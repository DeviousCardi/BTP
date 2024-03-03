#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    scanf("\n");
    int n;
    scanf("%d",&n);
    scanf("\n");
    int a[100];
    for(int i=0;a[i]!=EOF;i++)
    {scanf("%d",&a[i]);}
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++){
    if((a[i]+a[j])%k==0){printf("lucky");
    break;} } }
    return 0; }