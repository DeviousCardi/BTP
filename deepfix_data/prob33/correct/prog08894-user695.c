#include <stdio.h>
int main()
{   int heights[1000],platforms,health,fall=0,i;
    scanf("%d",&health);
    scanf("%d",&platforms);
    for(i=0;i<platforms;i++) {
        scanf("%d",&heights[i]); }
    for(i=0;i<platforms;i++)
    {    if(heights[i+1]>heights[i]) {
            fall=fall+heights[i+1]-heights[i]; } }
    if(health>=fall)
    printf("Yes");
    else
    printf("No");
    return 0; }