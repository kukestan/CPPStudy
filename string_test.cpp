/*
参考文档
https://juejin.cn/post/7086694183825571870
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	//一、原始字符串char[]
	char a[10] = "123";
	cout << a << endl;

	//可以溢出的输入
//	cin >> a;
//	cout << a << endl;
//	cout << sizeof(a) << endl;

	//不溢出输入
//	char b[10] = {0};
//	cin.get(b, sizeof(b));
//	cout << b << endl;
//	cout << sizeof(b) << endl;

	//不溢出输入
//	char c[10] = {0};
//	cin.getline(c, sizeof(c));
//	cout << c << endl;
//	cout << sizeof(c) << endl;

	//cstring
	char d[10] = "abcdefg";
	char e[10] = {0};
	char f[20] = {0};
	cout << d << endl;
	cout << strlen(d) << endl;//字符串长度
	strcpy(e, d);//字符拷贝
	cout << e << endl;
	strcat(f, d);//字符串连接
	strcat(f, e);
	cout << f << endl;
	cout << strstr(f, "ga") - f<< endl;//字符串搜索 地址相减，获取偏移量

	//二、td::string
	string s = "xyz";
//	cin >> s;//字符串输入
	cout << s << endl;
	cout << s.length() << endl;//字符串长度
	string s1 = s;//字符拷贝
	cout << s1 << endl;
	//字符串比较
	cout << bool(s1 == s) << endl;
	cout << s1.compare(s) << endl;
	string s2 = "abc";
	string s3 = "c";
	cout << bool(s2 == s3) << endl;
	cout << bool(s2 > s3) << endl;
	cout << bool(s2 < s3) << endl;
	cout << s2.compare(s3) << endl;
	cout << s1.find("z") << endl;//字符串搜索
	cout << s + s1 << endl;//字符串拼接
	
	//三、char[] 和 string 转化
	string ss = "123456";
	char aa[100] = {0};
	strcpy(aa, ss.c_str());
	cout << aa << endl;
	aa[0] = '9';
	ss = aa;
	cout << ss <<endl;
	return 0;
}
