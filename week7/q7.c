#include <stdio.h>

struct Geography {
    unsigned int continent : 3;   
    unsigned int country : 8;     
    unsigned int state : 8;       
    unsigned int isCoastal : 1;   
};

int main() {
    struct Geography location;

    location.continent = 1;       
    location.country = 33;        
    location.state = 4;           
    location.isCoastal = 0;       
    printf("Geographic Information:\n");

    printf("Continent Code: %u\n", location.continent);
    switch (location.continent) {
        case 0: printf("Continent: Africa\n"); break;
        case 1: printf("Continent: North America\n"); break;
        case 2: printf("Continent: South America\n"); break;
        case 3: printf("Continent: Asia\n"); break;
        case 4: printf("Continent: Europe\n"); break;
        case 5: printf("Continent: Australia\n"); break;
        case 6: printf("Continent: Antarctica\n"); break;
        default: printf("Unknown Continent\n"); break;
    }

    printf("Country Code: %u\n", location.country);
    printf("State Code: %u\n", location.state);
    printf("Coastal Status: %s\n", location.isCoastal ? "Coastal" : "Not Coastal");

    return 0;
}

