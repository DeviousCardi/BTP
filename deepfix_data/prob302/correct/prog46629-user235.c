#include <stdio.h>
int main() {
	float ax,ay,cx,cy,px,py ;
	scanf ("%f %f",&ax , &ay) ;
	scanf ("%f %f",&cx , &cy) ;
	scanf ("%f %f",&px , &py) ;
	if (((px==ax||px==cx) && ((py<=cy && py>=ay)||(py<=ay && py>=cy)))||((py==ay||py==cy) && ((px<=cx && px>=ax)||(px<=ax && px>=cx))))
	printf ("Point is on the rectangle.") ;
	else if (((px<cx&&px>ax)||(px<ax&&px>cx))&&((py<cy&&py>ay)||(py<ay&&py>cy)))
	printf ("Point is inside the rectangle.") ;
	return 0; }