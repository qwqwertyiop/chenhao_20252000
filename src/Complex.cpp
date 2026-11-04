// ============================================================
// Complex.cpp - Complex 复数类成员函数实现
// ============================================================

#include "Complex.h"

#include <iostream>
using namespace std;

// ============================================================
// 构造函数
// 初始化列表 : real(r), imag(i) 直接给成员变量赋值
// 比在函数体里赋值更高效
// ============================================================
Complex::Complex(double r, double i) : real(r), imag(i) {
}

// ============================================================
// 运算符重载：复数相加
// 实部相加，虚部相加，返回新的 Complex 对象
// ============================================================
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// ============================================================
// 运算符重载：复数相减
// ============================================================
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// ============================================================
// 成员函数：打印复数
// ============================================================
void Complex::print() const {
    if (imag >= 0) {
        cout << real << " + " << imag << "i" << endl;
    } else {
        cout << real << " - " << -imag << "i" << endl;
    }
}

// ============================================================
// Getter 函数
// ============================================================
double Complex::getReal() const { return real; }
double Complex::getImag() const { return imag; }
