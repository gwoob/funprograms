//ben carpenter October 2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[20];
    int i;
    int j;
    int k;

    //array containing group names
    const char team[] = {'A', 'B', 'C'};

    //array of strings with 21 character max per element
    char name[][20] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};

    printf("enter 12 names.\n");

    //copies input strings to array elements
    //for loop starts with i = 1 not i = 0 to make sure 1-12 is displayed instead of 0-11
    for(i = 1; i <= 12; i++)
    {
        printf("name %d: ", i);
        scanf("%s", str);
        strcpy(name[i - 1], str);
    }

    //seeds rand function with system time
    srand(time(NULL));

    //sets rand max
    j = rand() % 11;

    //shuffles name array elements without any overlap
    for(i = 0; i <= 11; i++)
    {
        //copies name[i] >> str
        strcpy(str, name[i]);

        //copies name[j] >> name[i]
        strcpy(name[i], name[j]);

        //copies str >> name[j]
        strcpy(name[j], str);
    }

    //clears screen
    system("clear");

    //prints each team's leader and members
    for(i = k = 0; i <= 11; k++)
    {
        printf("%s, you are leader of group %c!.. ", name[i], team[k]);
        i++;

        //prints the next following three elements
        for(j = 0; j <= 2; j++)
        {
            printf("%s, ", name[i]);
            i++;
        }

        printf("you are members of group %c.\n\n", team[k]);
    }

    return 0;
}
