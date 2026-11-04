// ============================================================
// C++面向对象编程教学示例
// 主题：Complex 复数类（演示类、构造函数、运算符重载）
// ============================================================

#include <iostream>

#include "Complex.h"

using namespace std;

// ============================================================
// 主函数：演示 Complex 类的使用
// ============================================================
int main() {
    cout << "===== C++ 面向对象编程教学演示 =====" << endl;
    cout << endl;

    // ---- 1. 创建对象（调用构造函数）----
    cout << "1. 创建复数对象：" << endl;
    Complex a(3, 4);   // a = 3 + 4i
    Complex b(1, 2);   // b = 1 + 2i

    cout << "   a = ";
    a.print();
    cout << "   b = ";
    b.print();
    cout << endl;

    // ---- 2. 运算符重载演示 ----
    cout << "2. 运算符重载演示：" << endl;

    Complex c = a + b;  // 调用 operator+，就像整数相加一样自然
    cout << "   a + b = ";
    c.print();

    Complex d = a - b;  // 调用 operator-
    cout << "   a - b = ";
    d.print();
    cout << endl;

    // ---- 3. 连续运算演示 ----
    cout << "3. 连续运算：" << endl;
    Complex e = a + b + Complex(5, 5);  // 可以连续相加
    cout << "   a + b + (5+5i) = ";
    e.print();
    cout << endl;

    // ---- 4. 使用 getter 访问私有成员 ----
    cout << "4. 通过 getter 访问私有成员：" << endl;
    cout << "   a 的实部 = " << a.getReal() << endl;
    cout << "   a 的虚部 = " << a.getImag() << endl;
    cout << endl;

    cout << "===== 演示结束 =====" << endl;
    return 0;
}
