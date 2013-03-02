#include <stdio.h>

int main() {
    int color = 1;
    printf("Please choose a color(1: red,2: green,3: blue):\n");
    scanf("%d", &color);

    switch (color) {
        case 1: 
            printf("you chose red color\n");
            break;
        case 2:
            printf("you chose green color\n");
            break;
        case 3:
            printf("you chose blue color\n");
            break;
        default:
            printf("you did not choose any color\n");
    }
    return 0;
}
