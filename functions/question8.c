#include<stdio.h>
float conversion_distance(float distance);
void main()
{
    float dist,values;

    printf("Enter Distance in KM :");
    scanf("%f",&dist);

    values = conversion_distance(dist);

    printf("%.2f kilometers = %.2f Meters",dist,values);


}
float conversion_distance(float distance)
{
    float conversion;
    conversion = distance*1000;
    return(conversion);
}
