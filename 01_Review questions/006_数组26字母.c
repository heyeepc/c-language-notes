#include <stdio.h>

int main() {
    
    char alphabet[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    

    printf("%s\n", alphabet);

//或者逐个字符打印
//for(int i = 0; i < 26; i++) {
//    printf("%c", alphabet[i]);
    
    return 0;
}

