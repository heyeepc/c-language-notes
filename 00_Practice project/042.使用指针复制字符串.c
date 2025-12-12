#include <stdio.h>

void my_strcpy(char *dest, char *src) {

    while ( *src != '\0') {

        *dest = *src;
        src++;
        dest++;

    }

    *dest  = '\0';
}

int main(){

    char a[20];
    my_strcpy(a, "world");
    printf("%s\n", a);   // world

    return 0;

}
