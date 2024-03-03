#include <stdio.h>
int main() {
    int n1,n2,a1[n1],a2[n2],count=0,i,j,k,h;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++);{
    scanf("%d ",&a1[i]);}
    printf("\n");
    scanf("%d\n",&n2);
    for(j=0;j<n2;j++){scanf("%d ",&a2[j]);}
    for(k=0;k<n1;k++){
    for(h=0;h<n2;h++){if(a2[h]==a1[k]){count++;}
    }}
    if(count==n2){printf("YES");}
    else{printf("NO"); }
	return 0; }