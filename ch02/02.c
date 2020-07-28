#include <stdio.h>
#define PI 3.141592

int main()
{
    float radius = 10.0f;
    float vol_sphere = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("%.2f\n", vol_sphere);
    return 0;
}