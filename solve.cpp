#include <iostream>  

// 解二元一次方程组的函数  
bool solveLinearEquation(double a1, double b1, double c1, double a2, double b2, double c2, double &x, double &y) {  
	double det = a1 * b2 - a2 * b1; // 计算行列式  
	if (det == 0) {  
		// 行列式为零，方程组无解或有无穷多解  
		std::cout << "The system of equations has no unique solution." << std::endl;  
		return false;  
	}  
	
	x = (c1 * b2 - c2 * b1) / det; // 使用克拉默法则求x  
	y = (a1 * c2 - a2 * c1) / det; // 使用克拉默法则求y  
	return true;  
}  

// 显示方程
void display(int a, int b, int c) {
	std::string xstr = " * x + ";
	std::string ystr = " * y = ";
	if(b < 0) {
		b = -b;
		xstr = " * x - ";
	}
	std::cout << a << xstr << b << ystr << c << std::endl;
}
int main() {  
	double a1, b1, c1, a2, b2, c2;  
	double x, y;  
	
	// 输入方程组的系数和常数项  
	std::cout << "Enter coefficients and constants for the system of equations:" << std::endl;  
	std::cout << "a1, b1, c1: ";  
	std::cin >> a1 >> b1 >> c1;  
	std::cout << "a2, b2, c2: ";  
	std::cin >> a2 >> b2 >> c2; 
	// 显示方程
	display(a1, b1, c1);
	display(a2, b2, c2);
	
	// 解方程组  
	if (solveLinearEquation(a1, b1, c1, a2, b2, c2, x, y)) {  
		std::cout << "The solution is: x = " << x << ", y = " << y << std::endl;  
	}  
	
	return 0;  
}
