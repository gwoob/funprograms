#include <stdio.h>

int main() {

    const int YES = 1;
    const int NO = 2;

    int yesOrNoInput;
    int birthMonth;
    int birthDay;

    printf("do you know your zodiac sign?\n\"1\" if yes \"2\" if no:\n");
    scanf("%d", &yesOrNoInput);

    if (yesOrNoInput != YES && yesOrNoInput != NO) {
        printf("its a \"yes\" or \"no\" question");

    } else if (YES == yesOrNoInput) {
        printf("okay then, get lost.");

    } else if (NO == yesOrNoInput) {
        printf("oh i see.\nwhat's your birth month? (1-12)\n");
        scanf("%d", &birthMonth);
        printf("and the day? (1-31)\n");
        scanf("%d", &birthDay);
        printf("hmmm.. okay let me see here.\n");

        if (birthMonth == 1 && birthDay <= 20) {
            printf("capricorn!\n");

        } else if (birthMonth == 1 && birthDay >= 21) {
            printf("aquarius!\n");

        } else if (birthMonth == 2 && birthDay <= 19) {
            printf("aquarius!\n");

        } else if (birthMonth == 2 && birthDay >= 20) {
            printf("pisces!\n");

        } else if (birthMonth == 3 && birthDay <= 20) {
            printf("pisces!\n");

        } else if (birthMonth == 3 && birthDay >= 21) {
            printf("aries!\n");

        } else if (birthMonth == 4 && birthDay <= 20) {
            printf("aries!\n");

        } else if (birthMonth == 4 && birthDay >= 21) {
            printf("taurus!\n");

        } else if (birthMonth == 5 && birthDay <= 20) {
            printf("taurus!\n");

        } else if (birthMonth == 5 && birthDay >= 21) {
            printf("gemini!\n");

        } else if (birthMonth == 6 && birthDay <= 21) {
            printf("gemini!\n");

        } else if (birthMonth == 6 && birthDay >= 22) {
            printf("cancer!\n");

        } else if (birthMonth == 7 && birthDay <= 22) {
            printf("cancer!\n");

        } else if (birthMonth == 7 && birthDay >= 23) {
            printf("leo!\n");

        } else if (birthMonth == 8 && birthDay <= 23) {
            printf("leo!\n");

        } else if (birthMonth == 8 && birthDay >= 24) {
            printf("virgo!\n");

        } else if (birthMonth == 9 && birthDay <= 22) {
            printf("virgo!\n");

        } else if (birthMonth == 9 && birthDay >= 23) {
            printf("libra!\n");

        } else if (birthMonth == 10 && birthDay <= 22) {
            printf("libra!\n");

        } else if (birthMonth == 10 && birthDay >= 23) {
            printf("scorpio!\n");

        } else if (birthMonth == 11 && birthDay <= 22) {
            printf("scorpio!\n");

        } else if (birthMonth == 11 && birthDay >= 23) {
            printf("sagittarius!\n");

        } else if (birthMonth == 12 && birthDay <= 21) {
            printf("sagittarius!\n");

        } else if (birthMonth == 12 && birthDay >= 22) {
            printf("capricorn!\n");
        }
    }

return 0;
}
