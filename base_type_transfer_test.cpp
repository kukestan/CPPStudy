/*
参考文档
https://blog.csdn.net/weixin_44495599/article/details/119889240
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//char[] 转数字
	char a[100] = "123.123";
	int a_int = atoi(a);
	double a_d = atof(a);
	long a_l = atol(a);
	long long a_ll = atoll(a);
	cout << a_int << " " << a_d << " " << a_l << " " << a_ll << endl;

	//数字转char[]
	char b[100] = {0};
	sprintf(b, "%d", 10);
	cout << b << endl;
	sprintf(b, "%.10lf", 3.1415926535);
	cout << b << endl;
	//to_string() 竞赛不可用
	string s = to_string(19527);
	cout << s << endl;
	s = to_string(3.1415926);
	cout << s << endl;
	//仅win可用，竞赛不可用
	itoa(123, b, 16);//16进制
	cout << b << endl;
	ltoa(456L, b, 16);//16进制
	cout << b << endl;
	lltoa(456LL, b, 16);//16进制
	cout << b << endl;
	return 0;
}

