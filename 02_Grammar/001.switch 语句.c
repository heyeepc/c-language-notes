switch (表达式) {
    case 常量值1:
        // 当表达式的结果等于常量值1时执行
        语句;
        break; // 必须要有！跳出 switch
    case 常量值2:
        // 当表达式的结果等于常量值2时执行
        语句;
        break;
    // 可以有多个 case
    default:
        // 当表达式的结果与所有 case 都不匹配时执行（可选）
        语句;
        // break; // default 通常是最后一个，可以省略 break
}
