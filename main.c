#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Citizen {
    int age;
};

struct Citizen setCitizen(int age) {
    struct Citizen citizen;
    citizen.age = age;
    return citizen;
}

void showCitizenData(const struct Citizen *p) {
    printf("Age: %d\n", p->age);
}

int main() {    
    srand(time(NULL));
    struct Citizen firstCitizen = setCitizen(20);

    for (int year = 1; year <= 5; year++) {
        printf("year %d :\n", year);
        firstCitizen.age++;
        showCitizenData(&firstCitizen);
    }

    return 0;
}
