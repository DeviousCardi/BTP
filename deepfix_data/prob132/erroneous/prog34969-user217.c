#include <stdio.h>
int main()
{int n,a[n],i,count;
scanf("%d",&n);
for(i=0;i<n;i=i+1){
    scanf("%d",&a[i]);
}for(i=0;i<n;i=i+1){
    for(j=0;j<n;j=j+1){
        if(a[i]==a[j]){
            count = count +1; } }
}if(count=a[i]){printf("Yes");}
else {printf("No");}
    return 0; }