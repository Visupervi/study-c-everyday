//
// Created by Visupervi on 2025/9/4.
// 函数
#include <iostream>
#include <ostream>
#include "acculate.h"
using namespace std;

// 指针和引用

/**
 * 指针的定义，如何使用指针
 * @return
 */
int main() {
    int sum = add(1, 2);
    int *p;
    int a = 10;
    int b = 20;
    p = &sum; // 指针存的是sum的地址，怎么取地址使用&。
    // 使用指针，就是通过解引用的方式来找到指针指向的内存
    // 指针前面加 *，定义也是加的*，取也是加的*。
    // 不管什么类型的指针，占用的字符与编译系统有关，32位是4个字节，64位是8个字节
    // 空指针和野指针
    // 空指针是指向的内存是不可以访问的
    // 用途：初始化
    // const 修饰指针
    // const 修饰指针叫做常量指针， 指针指向的值不可以改，指针的指向可以改 const int *p
    // const 修饰常量叫做指针常量，指针指向的值可以改，指针的指向不可以改 int * const p
    // const 即修饰指针又修饰常量

    cout << "sum=" << sum << endl;
    cout << sizeof(int *) << endl;

    const int *p1 = &a;
    *p = 20; // 错误
    p = &b; // 正确

    int * const p2 = &a;
    *p2 = 30; // 正确
    // p2 = &b; // 错误
    return sum;
}
