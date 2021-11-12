#include <stdio.h>
#include <math.h>

int main() 
{
    float distance, Fx, Fy, Ix, Iy, V, Fr, Ir;
    while(scanf("%f%f%f%f%f%f%f", &Fx, &Fy, &Ix, &Iy, &V, &Fr, &Ir) == 7) {
        distance = sqrt(pow(Ix - Fx, 2) + pow(Iy - Fy, 2)) + V * 1.5;
        if(distance <= Fr + Ir) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
