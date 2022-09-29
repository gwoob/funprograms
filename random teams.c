#include <stdio.h>
#include <string.h>


int main() {

    char nameString[20];

    char namesArray[][20] =
    {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};

    char shuffleArray[][20] =
    {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};

    for (int trickNumber = 0; trickNumber <= 11; trickNumber++)
    {
        printf("\nEnter a name for sorting: ");
        scanf("%s", nameString);
        strcpy(namesArray[trickNumber], nameString);
    }


    /* printf("Performing shuffle an admittedly crude shuffle give me one second ");
    void delay(1000);
    printf(". ");
    void delay(1000);
    printf(". ");
    void delay(1000);
    printf(". "); */

    int numVar0 = 0;
    int numVar1 = 1;
    int numVar2 = 5;
    int numVar3 = 6;
    
    for (int counter = 0; counter <= 11; counter++)
    {
        strcpy(shuffleArray[numVar0], namesArray[numVar2]);
        strcpy(shuffleArray[numVar1], namesArray[numVar3]);
        numVar0 + 2;
        numVar1 + 2;
        numVar2--;
        numVar3++;
    }

    for (int test = 0; test <= 11; test++) {
        printf("%s ", namesArray[test]);
    }

    printf(":\n");

    for (int test2 = 0; test2 <= 11; test2++) {
        printf("%s ", shuffleArray[test2]);
    }
    return 0;

}
