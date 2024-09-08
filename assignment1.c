#include <math.h>
#include <stdio.h>

double distance(int x1,int x2, int y1, int y2, double distance)
{
printf("enter the first point");
scanf(" %d%d", &x1 ,&y1);
printf("enter the second point");
scanf(" %d%d", &x2, &y2);
// calculation

distance = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
return 0;
}
// main function

int main(int argc, char** argv) {
    int calculatedistance();
}