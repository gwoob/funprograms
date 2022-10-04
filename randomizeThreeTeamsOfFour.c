//made by Ben Carpenter :3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[20];
    int i;
    int j;

    //array containing the three group's letter identifiers
    const char teams[] = {'A', 'B', 'C'};

    //array of strings with 21 character max per array element
    char names[][20] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};

    printf("enter 12 names.\n\n");

    //copy input strings to array elements
    for(i = 1; i <= 12; i++)
    {
        printf("name %d: ", i);
        scanf("%s", str);
        strcpy(names[i-1], str);
    }

    //seed rand function with system time
    srand(time(NULL));

    //set rand max
    j = rand() % 11;

    //shuffle names array elements without any overlap
    for(i = 0; i < 11; i++)
    {
        //copy names[i] >> str for safekeeping
        strcpy(str, names[i]);

        //copy names[j] >> namesArray[i]
        strcpy(names[i], names[j]);

        //copy str >> names[j]
        strcpy(names[j], str);
    }

    //print each team's leader and members
    for(i = 0; i <= 2; i++)
    {
        printf("\n%s, you are team leader of group %c!\n", names[0], teams[i]);

        //print other three members of group
        for (j = 1; j <= 3; j++)
        {
            printf("%s, ", names[j]);
        }

        printf("you also belong to group %c.\n", teams[i]);
    }

    return 0;
}
