// C++_Project.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>


/*
	cout演示
*/
void Cout()
{
	//由于include 的是iostream 而不是 iostream.h，导致该头文件没有定义全局命名空间，必须使用namespace std;
	//这样才能正确的使用cout  注：声明命名空间要使用using关键字
	using namespace std;
	//变量声明
	int test_flag;

	//cout语句演示   注：结尾处的是endl(小写L)而不是end1（数字1）;
	cout << "how many  test_flag  do you have ?" << endl;
	//获取键盘输入的数字
	cin >> test_flag;

	cout << "hare are 2 more.";
	
	//将键盘输入的变量进行相加
	test_flag = test_flag + 2;

	//下一行用来输出结果
	cout << "how you have " << test_flag << "test_flag." << endl;

	return;
}






//主函数
int main()
{
    //std::cout << "Hello World!\n"; 

	//调用 cout 演示函数
	Cout();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件





