#include <stdio.h>
#include <string.h>

int main()
{
    const char arr[][10] = {"yes", "no"};
    char inpt[10];

    int i;
    int j;
    int cmp1;
    int cmp2;

    i = 0;
    while(i < 1)
    {
        printf("do you like boys?");
        scanf("%s", inpt);

        cmp1 = strcmp(inpt, arr[0]);
        cmp2 = strcmp(inpt, arr[1]);

        if (cmp1 != 0 && cmp2 != 0)
        {
            j = 0;
            while(j < 1)
            {
                printf("its a \"yes\" or \"no\" question.\n try again?");
                scanf("%s", inpt);

                cmp1 = strcmp(inpt, arr[0]);
                cmp2 = strcmp(inpt, arr[1]);

                if (cmp1 == 0) {
                    j++;
                    continue;
                } else if (cmp2 == 0) {
                    j++;
                    i++;
                    printf("idiot");
                } else
                {
                    continue;
                }
            }
        }

        else if (cmp2 == 0)
        {
            printf("loser...\ntry again?");
            scanf("%s", inpt);

            cmp1 = strcmp(inpt, arr[0]);
            cmp2 = strcmp(inpt, arr[1]);

            if(cmp1 != 0 && cmp2 != 0)
            {
            j = 0;
            while(j < 1) {

                printf("its a \"yes\" or \"no\" question.\n try again?");
                scanf("%s", inpt);

                cmp1 = strcmp(inpt, arr[0]);
                cmp2 = strcmp(inpt, arr[1]);

                if (cmp1 == 0) {
                    j++;
                    continue;
                } else if (cmp2 == 0) {
                    j++;
                    i++;
                    printf("die ig");
                } else {
                    continue;
                }
            }
            }
        }
        else
        {
            i++;
            printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠔⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡀⠀⠉⠓⢦⡀⠀⠀⠀⠀⢀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠖⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠙⢦⡀⠀⠀⣼⠀⠀⠙⢳⣄⡀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⣀⣀⣠⠴⠚⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⡀⠸⠄⠰⠻⣦⣀⠹⡄⠀⠀⠈⢿⠉⠓⠒⠦⢤⣶⠶\n"
                   "⠀⠀⠙⠛⠻⠤⠤⢤⡶⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢀⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⡀⠀⢰⡄⠙⣷⠀⢀⡀⠀⠀⣸⠀⠷⡏⠉⠉⠀⠀\n"
                   "⠀⠀⠀⠀⠀⣠⡞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⡿⢠⡏⠁⠀⠀⠀⠀⠀⠀⠀⢀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢧⡀⢿⡄⢨⡇⠀⠙⣇⠀⠙⠶⠞⠁⠀⠀⠘⢦⡀⠀⠀\n"
                   "⠀⠀⠀⢀⣼⠛⠙⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢱⠃⡼⠀⠀⠀⠀⠀⠀⠀⠀⢠⠼⡿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⠘⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀⡀⢳⡀⠀\n"
                   "⠀⠀⢠⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⡞⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢷⣧⠘⣆⡀⠀⠀⠀⠀⠀⠀⠸⡄⠀⠘⡇⠀⠀⠀⠀⢷⠀⠀⠀⠀⠀⠀⠈⣷⡄⢧⠀\n"
                   "⠀⢀⡿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⢀⡏⠀⡇⢰⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡀⠘⣯⠙⠓⠦⣄⡀⠀⠀⢻⡀⠀⢳⠀⠀⠀⠀⠸⡇⠀⠀⠀⠀⠀⠀⠸⣿⣼⠀\n"
                   "⠀⣼⠁⢧⡀⣠⠴⠁⠀⠀⠀⠀⠀⠀⢸⠃⣸⢀⡴⡟⢻⡇⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⣿⣇⠀⠈⢧⡀⠀⢹⣯⠀⠀⠀⢻⡄⢸⡀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⣇⠹⠆\n"
                   "⠀⡇⣠⠎⠉⠁⠀⠀⠀⠀⠀⠀⠀⢰⣿⢀⡿⠋⠀⣧⢸⣧⠀⠀⠀⠀⠀⠀⢷⠀⠀⠀⢹⣿⡄⠀⠀⠻⣦⠀⢻⡳⣄⠀⢀⡹⣬⡇⠀⠀⠀⢷⡘⢧⡀⠀⠀⠀⠀⠀⣻⠀⠀\n"
                   "⢸⡇⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⢿⡇⠀⠀⢸⣄⣿⣆⠀⠀⠀⠀⠀⠈⢷⠀⠀⠈⣿⣿⣉⣑⣒⣾⣷⣄⢳⡘⢦⣈⠻⣿⣧⡀⠀⠀⠀⢿⠛⠿⠦⠄⠀⣼⡇⡿⠀⠀\n"
                   "⠈⠁⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢸⠀⣀⡤⠞⢻⣧⣹⣆⠀⠀⠀⠀⠀⠸⣷⡀⢘⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣦⣿⠳⣮⣿⣟⢦⠀⠀⠸⡇⠀⠀⠀⢠⠿⣇⡇⠀⠀\n"
                   "⠀⠀⢹⡀⠀⠀⠀⠀⠀⣶⠀⠀⠀⢸⠹⣾⣇⣥⣶⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⣿⣿⣆⠀⢷⣽⠿⠿⣿⣿⣿⣿⣿⡿⢿⡇⠀⠉⠙⠓⠆⢲⢀⡇⠀⠀⣠⡏⢰⡿⠀⠀⠀\n"
                   "⠀⠀⠀⢳⡀⠀⠀⠀⠀⢿⠀⠀⠀⣸⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠓⢤⣶⣄⡀⠈⢿⣿⠳⣌⣿⠛⠒⠛⠛⠛⠛⠛⠃⢸⡷⠀⠀⠀⠀⠀⣿⣼⣃⠴⠋⠉⠉⢳⡀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⣽⠃⡀⠀⠀⢸⡄⠀⠀⣿⣿⠙⢿⣿⣿⣿⡿⠟⠉⠁⠀⠀⠀⠉⠛⠟⠒⠺⠿⠁⠈⠛⠂⠀⠀⠀⠀⠀⠀⢀⣿⡇⢠⡄⣰⣿⣼⣿⣿⠃⠀⠀⠀⠀⠈⡇⠀⠀⠀\n"
                   "⠀⠀⢀⣼⣡⢾⠇⡀⠀⠀⢧⡀⠀⠈⢻⡄⠨⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⣻⣷⣿⣽⢏⡿⠋⠀⠈⠳⡤⢤⠀⠀⠀⢳⠀⠀⠀\n"
                   "⠀⠀⠛⠋⠁⢸⠀⣇⠀⠀⠈⢳⣄⠀⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠖⠋⣰⣿⣁⡿⠛⠉⠳⣄⠀⠀⠀⠘⢾⠀⠀⠀⠘⡆⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠘⣷⡿⣆⠀⠀⠀⠻⣷⣤⣈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⠋⠈⠹⣇⠀⠀⠀⠈⢣⡀⠀⠀⠈⠳⡀⠀⠀⠃⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠀⠘⢷⡈⠳⣤⣀⣦⣽⣶⣍⡙⠛⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠤⠤⠤⣶⢻⡉⣹⠀⠀⠀⠀⣇⢠⡀⠀⠈⠑⢄⠀⠀⠀⠙⢤⡀⠀⠀⠉⠀⢀⡄⠀⠀\n"
                   "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣄⠻⠽⢿⡍⠁⠀⠀⠀⠀⠀⠀⠀⠀⢦⣀⣀⣀⣠⡤⠤⠤⠖⠛⠋⠉⠀⠀⠀⠀⠀⢸⣤⢷⡀⠀⠀⠀⠳⡄⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀\n"
                   "⠀⠀⠀⡴⠋⠑⠢⣄⢀⡴⠒⠋⠓⠦⣍⣙⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠖⠒⠋⠙⣆⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠋⠀⠀⠀⠀⠀\n"
                   "⠀⠀⢸⠃⠀⠀⠀⠈⢻⡴⠶⠦⣄⢀⣿⠿⣽⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡞⠁⠀⠀⠀⠀⠹⣾⣿⠀⠀⠀⠀⠀⢀⡴⠞⠁⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⡏⠀⠀⢰⠟⣶⠏⠀⠀⠀⡼⠋⠉⠓⢿⣿⣿⣷⡦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⢴⡿⠋⠀⠉⢷⡀⠀⠀⠀⢻⣽⢋⠙⠒⣶⡞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠤⢲⠇⠀⠀⣾⣰⠃⠀⠀⠀⡞⠁⠀⠀⣠⠞⠛⠻⣯⡛⢧⠉⠛⣶⠦⣄⣀⣀⣀⣠⠤⠖⠋⢠⡞⠀⠀⠙⢦⠈⣇⠀⠀⠀⢸⡟⣾⠀⠀⣿⡇⠀⠀⠀⣠⡇⠀⠀⠀⠀⠀⠀\n"
                   "⠀⢿⡀⠀⠀⡿⠃⠀⠀⠀⡼⠁⠀⢀⡜⠁⠀⠀⠀⠈⣇⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⢀⣀⠴⠋⠀⠀⠀⠀⠈⠧⢹⡀⠀⠀⣼⠹⠿⠀⠀⣿⠇⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠎⠙⢦⡚⠁⠀⠀⢀⡞⠀⠀⢠⠞⠀⠀⠀⢠⠞⠓⡿⠤⣄⣀⣼⣀⣠⠴⠖⠚⢉⣉⡀⠀⠀⠀⠀⠀⠀⠀⢠⡄⣧⠀⣼⠃⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⠑⢦⡀⠀⠉⠀⠀⠠⠋⠀⠀⠀⢠⡏⠀⡾⠁⡔⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⢳⠀⠀⠀⠀⠀⠀⠀⠀⣷⠸⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⢰⣧⠙⠶⣄⡀⠀⠀⠀⠀⠀⠀⣼⡄⠀⣇⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                   "⠀⠀⠀⠀⢸⣿⠀⠀⠀⢈⣙⠒⠒⠒⠒⠚⣹⠃⠀⣿⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠀⠀⠀\n");
        }
    }
        return 0;
}
