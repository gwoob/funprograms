#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main() {

    char nameString[10];

    int trickNumber1 = 0;
    int trickNumber2 = 0;

    char peopleArray[][20][3] = {
            {"00", "01","02", "03"},
            {"10", "11","12", "13"},
            {"20", "21","22", "23"},
    };

    for (int maxPeople = 0; maxPeople <= 11; maxPeople++) {
        printf("\nEnter a name for sorting: ");
        scanf("%s", nameString);
        strcpy (peopleArray[trickNumber2][trickNumber1], nameString);
        trickNumber1++;

        if (trickNumber1 == 4) {
            trickNumber2++;
        } else if (trickNumber1 == 8) {
            trickNumber1++;
        } else {}
    }

   printf("%s, %s, %s, %s, cool group!", peopleArray[0][0], peopleArray[0][1], peopleArray[0][2], peopleArray[0][3]);

    return 0;
}
