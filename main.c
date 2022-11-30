#include <stdio.h>

unsigned rental_car_cost(unsigned d);

int main() {

    unsigned days;
    printf("How mani days do you need the car?\n");
    scanf("%d", &days);
    unsigned amount = rental_car_cost(days);
    printf("You need to pay %d $", amount);

    return 0;
}

unsigned rental_car_cost(unsigned d)
{
    unsigned dayRent = 40;
    if (d >= 7) return d * dayRent - 50;
    else if (d >= 3) return d * dayRent - 20;
    else return d * dayRent;
}
