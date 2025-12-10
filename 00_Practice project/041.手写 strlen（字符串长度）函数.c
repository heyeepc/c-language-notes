#include <stdio.h>

int my_strlen(char *s) {

    int count = 0;

    while (*s != '\0'){
        s++;
        count++;
    }

    return count;
}


int main() {

    char s[] = "hello";
    printf("%d\n", my_strlen(s));

    return 0;
}
