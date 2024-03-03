#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    int i=0,j=0;
    while(i<=n-1){
        scanf("%d",&a[i]); }
    int flag=0;
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<=n-1;j++){
            if(a[i]==a[j]){
                flag=1;
                printf("%d",flag); } } }
    if(flag==1){
        printf("YES"); }
    else printf("NO");
	return 0; }