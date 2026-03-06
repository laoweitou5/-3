#include<iostream>
#include<string>
using namespace std;

/*
	编写一个程序,测试三个函数,它们都能够把main函数中的变量count的值增至原来的三倍。这
三个函数说明如下:
		(a)tripleByValue 函数通过值传递count的一份副本,把值增至原来的三倍并返回这一结果。
		(b)tripleByReference 函数通过引用参数传递count,用别名(即引用参数)把count原来的值增至三倍。
		(c)tripleByPointer函数通过指针参数传递count的地址,用间址方式把count原来的值增至三倍。
*/

//定义tripleByValue函数，值传递
int tripleByValue(int x)
{
	return x * 3;
}

//定义tripleByReference函数，引用
void tripleByReference(int& x)
{
	x = 3 * x;
}

//定义tripleByPointer函数，指针
void tripleByPointer(int* p)
{
	*p = 3 * (*p);
}

//int main()
//{
//	int count;
//	cout << "请输入count的值->" << endl;
//	cin >> count;
//	cout << "tripleByValue的执行结果为：" << tripleByValue(count) << endl;
//	tripleByReference(count);
//	cout << "tripleByReference的执行结果为：" << count << endl;
//	tripleByPointer(&count);
//	cout << "tripleByPointer的执行结果为：" << count << endl;
//	return 0;
//}