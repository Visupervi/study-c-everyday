// #include "../include/print.h"
#include <iostream>
using namespace std;
#define week 7
#define month 12 //宏常量
int main(){
  // vector<string> vec = {"Hello", "World"};
  // printMessage(vec);
  // int a = 10;
  // int b = 20;
  // int c = a + b;
  // const 修饰的变量也是常量简称为常变量
  // 短整型 short 2字节
  // 整型 int 4字节
  // long long 整型 8字节
  // float 单精度浮点型 4字节 
  // double 双精度浮点型 8字节
  // long double 长双精度浮点型 16字节
  // bool 布尔类型 true false 1字节
  // char 字符类型 1字节
  // string 字符串类型 不定长  
  // auto 自动类型推导
  // decltype 声明一个变量的类型与已有变量相同
  // const 常变量
  // const 修饰的变量必须初始化

  double T = 3.14;
  float pi = 3.14f;
  cout << "one week have " << week << " days" << std::endl;
  cout << "cicle rate is " << T << std::endl;
  return 0;
}