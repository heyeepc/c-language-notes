int numbers[] = {10, 20, 30};
int *p = numbers; // p 指向 numbers[0]

// 打印 numbers[0]
printf("%d\n", *p); // 输出 10

// 移动指针到下一个元素
p++; 

// 打印 numbers[1]
printf("%d\n", *p); // 输出 20
