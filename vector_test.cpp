/*
参考文档
https://juejin.cn/post/6996883632400891935
https://juejin.cn/post/6988731148788564004
*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	//定义
	vector<int> v1{1, 2, 3};
	vector<int> v2;
	vector<int> v3(5, 6);

	//添加元素
	v1.push_back(4);
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);

	//使用元素 end()不行
	cout << v1[3] << endl;
	cout << v1.back() << endl;
	cout << *v2.begin() << endl;
	cout << v2.front() << endl;
	cout << v2[0] << endl;
	cout << v3[0] << endl;
	cout << v3.at(0) << endl;

	//遍历1: 数组遍历
	for(unsigned i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	//遍历2: 迭代器遍历
	for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//遍历3：利用auto遍历
	for(auto it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//遍历4：利用auto基于范围for循环遍历
	for (auto iter : v2) 
	{
		cout << iter << " ";
	}
	cout << endl;

	//删除元素
	vector<int> v4(10);
	v4.push_back(100);
	for (auto iter : v4) 
	{
        cout << iter << " ";
	}
	cout << endl;
	cout << v4.size() << " " << v4.at(10) << endl;
	v4.pop_back();
	cout << v4.size() << endl;
	for (auto iter : v4) 
	{
		cout << iter << " ";
	}
    cout << endl;

	//插入元素insert
	v4.push_back(100);
	cout << v4.size() << endl;
	cout << v4.at(10) << endl;
	int iAdd = 10;
	v4.insert(v4.begin(), iAdd);
	for (auto iter : v4) 
	{
		cout << iter << " ";
	}
	cout << endl;
	v4.insert(v4.begin() + 1, 3, iAdd + 1);
	for (auto iter : v4) 
	{
		cout << iter << " ";
	}
	cout << endl;
	return 0;
}
