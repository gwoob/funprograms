#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[20];
    int i;
    int j;

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

    printf("%s, you are team leader of group A!\n", namesArray[0]);
    
    //print the other three members of group A in sequence
    for(i = 1; i <= 3; i++)
    {
        printf("%s, ", namesArray[i]);
    }
    
    printf("you also belong to group A.\n\n");


    printf("%s, you are team leader of group B!\n", namesArray[4]);
    
    //print the other three members of group B in sequence
    for(i = 5; i <= 7; i++)
    {
        printf("%s, ", namesArray[i]);
    }
    
    printf("you also belong to group B.\n\n");


    printf("%s, you are team leader of group C!\n", namesArray[8]);
    
    //print the other three members of group A in sequence
    for(i = 9; i <= 11; i++)
    {
        printf("%s, ", namesArray[i]);
    }
    
    printf("you also belong to group C.\n\n");

    return 0;
}
