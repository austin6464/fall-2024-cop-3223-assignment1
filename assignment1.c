#include <math.h>
#include <stdio.h>

// distance fuction for all calculations

double distance(int x1, int x2, int y1, int y2){
    double result = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
}


double calculatedistance()
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double the_distance = distance(x1,x2,y1,y2);
    printf("the distance is %lf \n", the_distance);
}

// main function

int main(int argc, char **argv)
{
    calculatedistance();
}