#include<stdio.h>
float speed(float distance, float time);
void main()
{
    float dist,tim,values;

    printf("Enter distance in Meters :");
    scanf("%f",&dist);
    printf("\n\nEnter Time in Minutes :");
    scanf("%f",&tim);

    values = speed(dist,tim);

    printf("\n\nThe Speed in KM/Hr is :%f\n",values);


}
float speed(float distance, float time)
{
    float conversion1,conversion2,result;
    conversion1 = distance/1000;
    conversion2 = time/60;
    result = (conversion1/conversion2);
    return(result);

}
