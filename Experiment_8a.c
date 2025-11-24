/* NAME: Siddesh
UNI : 2510044
Branch: CIVIL
DIV: B */
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while (str[i] != '\n') {
        if (str[i] == '\0')
            break;
        printf("\nEach char: %c", str[i]);
        i++;
    }
    printf("\nLength of the string = %d\n", i);
    return 0;
}
