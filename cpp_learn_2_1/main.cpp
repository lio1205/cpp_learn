#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}



/*内存分区模型
 * 代码区：存放代码
 * 全局区：全局变量 静态变量 常量
 * 栈区：编译器自动分配   参数值 局部变量等
 * 堆区：程序员分配和释放 若不释放程序结束系统自动释放
 * */