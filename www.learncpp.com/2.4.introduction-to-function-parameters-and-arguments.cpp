
// 函数不使用参数可以不具名 (感觉没什么意义)
void doSomething(int) {

}
int doSomething2(int, int) {
    return 1;
}
int getDouble(int x) {
    return x * 2;
}
int add(int x, int y) {
    return x + y;
}

int main(){
    doSomething(1);
    doSomething2(1, 2);
    getDouble(2);
    add(1, 2);
}


