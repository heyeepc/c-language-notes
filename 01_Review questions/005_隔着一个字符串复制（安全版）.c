void my_strcpy_safe(char *dest, char *src) {

    while ( *src != '\0') {
        
        *dest = *src; // 1. 复制当前字符
        dest++;       // 2. 目标指针移动

        // 3. 检查下一个字符是否是'\0'。如果是，则不应再跳跃
        if (*(src + 1) == '\0') { 
            src++; // 只移动1步，使while在下次循环终止
        } else {
            src += 2; // 移动2步，跳过下一个字符
        }
    }
    
    *dest  = '\0';
}
