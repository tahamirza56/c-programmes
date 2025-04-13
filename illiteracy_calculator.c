#include<stdio.h>

int main() {
    int men,women,total_literacy,men_percentage,women_percentage, literate_men, literate_women, illiterate_men, illiterate_women;

    men=(52.0 / 100) * 80000;
    women=(48.0 / 100) * 80000;

    total_literacy = (48.0 / 100) * 80000;
    
    literate_men = (35.0 / 100) * (men);
    literate_women = (65.0 / 100) * (women);

    illiterate_men = men - literate_men;
    illiterate_women = women - literate_women;

    printf("number of illiterate men = %d\n", illiterate_men);
    printf("number of illiterate women = %d\n", illiterate_women);

    return 0;
}