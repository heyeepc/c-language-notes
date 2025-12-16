#include <stdio.h>

int main(){

    struct Book  {

            char title[100];
            int price;

    };

    struct Book library[3] = {{"The C Programming Language", 120},
                         {"Flow: The Psychology of Optimal Experience", 98},
                         {"The Theory of Capitalist Development: Principles of Marxian Political Economy", 220},
    };

    for (int i = 0; i < 3; i++) {

        printf("标题: %s\n", library[i].title);
        printf("价格: %d\n", library[i].price);

    } ;

    return 0;
}
