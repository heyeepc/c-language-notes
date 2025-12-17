#include <stdio.h>

int main(){

    struct Book  {

            char title[100];
            int price;

    };

    struct Book b1 = {"The C Programming Language", 120};
    struct Book *ptr;

    ptr = &b1;

    printf("标题: %s\n", ptr->title);
    printf("价格: %d\n", ptr->price);
    

    return 0;
}
