int main() {
    int value; //correct
    // 大多数情况下，函数名称也以小写字母开头（尽管在这一点上存在一些分歧）。
    // 我们将遵循此约定，因为函数main（所有程序都必须具有）以小写字母开头，C++ 标准库中的所有函数也是如此。
    int Value; // incorrect
    int VALUE; // incorrect
    int VaLuE; // incorrect
    // 以大写字母开头的标识符名称通常用于用户定义的类型（例如结构、类和枚举，我们稍后将介绍所有这些类型）。
    //如果变量或函数名称是多单词，则有两种常见约定：单词之间用下划线分隔，称为“蛇形命名法”，或驼峰命名法
    int my_variable_name; // correct (separated by underscores/snake_case)
    int my_function_name(); // correct (separated by underscores/snake_case)

    int myVariableName; // correct (intercapped/CamelCase)
    int myFunctionName(); // correct (intercapped/CamelCase)

//    int my variable name; // invalid (whitespace not allowed)
//    int my function name(); // invalid (whitespace not allowed)
//
//    int MyVariableName; // valid but incorrect (should start with lower case letter)
//    int MyFunctionName(); // valid but incorrect (should start with lower case letter)

    // 常见命名
    // int ccount	Bad	What does the c before “count” stand for?
    // int customerCount	Good	Clear what we’re counting
    // int i	Either	Okay if use is trivial, bad otherwise
    // int index	Either	Okay if obvious what we’re indexing
    // int totalScore	Either	Okay if there’s only one thing being scored, otherwise too ambiguous
    // int _count	Bad	Do not start names with underscore
    // int count	Either	Okay if obvious what we’re counting
    // int data	Bad	What kind of data?
    // int time	Bad	Is this in seconds, minutes, or hours?
    // int minutesElapsed	Good	Descriptive
    // int value1, value2	Either	Can be hard to differentiate between the two
    // int numApples	Good	Descriptive
    // int monstersKilled	Good	Descriptive
    // int x, y	Either	Okay if use is trivial, bad otherwise


}