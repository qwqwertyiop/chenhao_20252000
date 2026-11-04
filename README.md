算法组C++和CMake作业
项目结构
text
opp/
├── include/
│   └── Complex.h     # Complex 类声明
├── src/
│   ├── main.cpp      # 主程序（演示 Complex 类的使用）
│   └── Complex.cpp   # Complex 类成员函数实现
├── CMakeLists.txt    # CMake 构建配置
└── README.md         # 本说明文档
代码内容说明
include/Complex.h 里声明了 Complex（复数）类，src/Complex.cpp 里实现成员函数，包含：

知识点	对应代码
类的定义	class Complex { ... }
私有成员变量	private: double real; double imag;
构造函数	Complex(double r = 0, double i = 0)
运算符重载（+）	Complex operator+(const Complex& other)
运算符重载（-）	Complex operator-(const Complex& other)
成员函数	void print()
Getter 函数	double getReal(), double getImag()
src/main.cpp 里的 main() 函数演示了：

创建复数对象

用 + 和 - 运算符做复数运算

连续运算

通过 getter 访问私有成员

编译运行方法
方法一：用 CMake 构建（推荐，作业要求）
bash
# 1. 回到项目根目录
cd opp

# 2. 建立 build 目录
mkdir build
cd build

# 3. 生成（明确用 Ninja，顺便处理中文乱码）
cmake -G Ninja \
      -DCMAKE_CXX_FLAGS="-finput-charset=UTF-8 -fexec-charset=GBK" \
      ..

# 4. 构建
cmake -B build
cmake --build build

# 5. 运行
.\build\Debug\complex_demo.exe
预期输出
text
===== C++ 面向对象编程教学演示 =====

1. 创建复数对象：
   a = 3 + 4i
   b = 1 + 2i

2. 运算符重载演示：
   a + b = 4 + 6i
   a - b = 2 + 2i

3. 连续运算：
   a + b + (5+5i) = 9 + 11i

4. 通过 getter 访问私有成员：
   a 的实部 = 3
   a 的虚部 = 4

===== 演示结束 =====
作业
https://image.png/

C++标准库：https://www.runoob.com/cplusplus/cpp-standard-library.html（根据需求学习）

