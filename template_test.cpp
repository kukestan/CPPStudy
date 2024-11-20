/*
《C++新经典》 模板与泛型编程
第2章 模板基础知识
2.1 函数模板
*/
#include <iostream>
#include <stdexcept> // exception
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

//手动确定返回类型
template <typename V, typename T, typename U>
V add_1(T a, U b) {
	return a + b;
}

//自动确定返回类型
template <typename T, typename U>
auto add_2(T a, U b) {
	return a + b;
}

//返回类型后置为int
template <typename T, typename U>
auto add_3(T a, U b) -> decltype(10) { 
	return a + b;
}

template <typename T>
auto multiply(T a) {
	return a * 2;
}

int main(int argc, char** argv) {
	cout << add(1, 3) << endl;
	cout << add(1.4, 3.64) << endl;
	cout << add(1L, 9L) << endl;
	cout << add(string("Zhang"), string("Hao")) << endl;
	//手动确定返回类型
	cout << add_1<double>(1, 2.5) << endl;

	//自动确定返回类型
	cout << add_2(1, 2.5) << endl;

	//返回类型后置为int
	cout << add_3(1, 2.5) << endl;

	
	int result = multiply(10);
	cout << result << endl;
	//返回值被强制转换为int
	result = multiply(2.7);
	cout << result << endl;
	//参数被强制转换为int再运算
	result = multiply<int>(2.7);
	cout << result << endl;
	//自动推断返回值类型
	auto ret = multiply<>(2.7);
	cout << ret << endl;
	return 0;
}
