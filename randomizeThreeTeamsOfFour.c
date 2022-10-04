#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[20];
    int i;
    int j;

    //array of team letters
    const char teamsArray[] = {'A', 'B', 'C'};

    //array of strings with 21 character max per array element
    char namesArray[][20] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};

    //copy user inputs to array elements
    for(i = 0; i <= 11; i++)
    {
        printf("\nenter a name: ");
        scanf("%s", str);
        strcpy(namesArray[i], str);
    }

    //seed rand function with system time
    srand(time(NULL));

    //set rand max
    j = rand() % 11;

    //shuffle array elements without any overlap
    for(i = 0; i < 11; i++)
    {
        //copy namesArray[i] (i = 0 first pass) element to a str for safekeeping
        strcpy(str, namesArray[i]);

        //copy namesArray[j] (j = rand) element to namesArray[i]
        strcpy(namesArray[i], namesArray[j]);

        //copy str to namesArray[j]
        strcpy(namesArray[j], str);
    }

    //print each team's leader and members
    for(i = 0; i <= 2; i++)
    {
        printf("%s, you are team leader of group %c!\n", namesArray[0], teamsArray[i]);

        //print other three members of group
        for (j = 1; j <= 3; j++)
        {
            printf("%s, ", namesArray[j]);
        }

        printf("you also belong to group %c.\n\n", teamsArray[i]);
    }

    return 0;
}
