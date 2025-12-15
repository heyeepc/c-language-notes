#include <stdio.h>

int main(){

    struct Book  {

        char title[100];
        int price;

    };

    struct Book my_book = {"The C Programming Language",120};

    printf("title %s\n ",my_book.title);
    printf("price %d\n ",my_book.price);


    return 0;

}
