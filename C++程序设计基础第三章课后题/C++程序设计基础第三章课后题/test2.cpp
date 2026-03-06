#include<iostream>
using namespace std;

/*
    当用户输入三个不相等的整数时,以下程序分别按顺序和逆序输出它们的值。给出main函数,
	请把程序补充完整。
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int t1,t2,t3;
	orderFun *pf;		//说明函数指针
	cout << "请输入三个不相等的整数:";
	cin>>a>>b>>c;
	t1=a; t2=b; t3=c;
	pf=sequence;		//获取函数地址
	pf(t1,t2,t3);		//调用函数
	cout << "顺序输出:" << t1 << "" << t2 << " " << t3 << endl;
	t1=a; t2=b; t3=c;
	pf=retrograde;		//获取函数地址
	pf(t1,t2,t3);		//调用函数
	cout << "逆序输出:" << t1 << "" << t2 << "" << t3 << endl;
}
*/

//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int(*p)(int, int);
//	p = Max;
//	cout<<(*p)(a, b)<<endl;
//	return 0;
//}

//定义sequence函数，以实现顺序输出
void sequence(int &a,int &b,int &c)
{
	int min, middle, max;
	//求出三个数中的最小值
	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	//求出三个数中的最大值
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	//确定中间值
	if (a != max && a != min)
	{
		middle = a;
	}
	if (b != max && b != min)
	{
		middle = b;
	}
	if (c != max && c != min)
	{
		middle = c;
	}
	//实现顺序输出
	a = min;
	b = middle;
	c = max;
}

//定义retrograde函数，以实现逆序输出
void retrograde(int& a, int& b, int& c)
{
	int min, middle, max;
	//求出三个数中的最小值
	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	//求出三个数中的最大值
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	//确定中间值
	if (a != max && a != min)
	{
		middle = a;
	}
	if (b != max && b != min)
	{
		middle = b;
	}
	if (c != max && c != min)
	{
		middle = c;
	}
	//实现逆序输出
	a = max;
	b = middle;
	c = min;
}

typedef void orderFun(int&, int&, int&); //自定义函数类型

//int main()
//{
//	int a, b, c;
//	int t1, t2, t3;
//	orderFun* pf;		//说明函数指针
//	cout << "请输入三个不相等的整数:";
//	cin >> a >> b >> c;
//	t1 = a; t2 = b; t3 = c;
//	pf = sequence;		//获取函数地址
//	pf(t1, t2, t3);		//调用函数
//	cout << "顺序输出:" << t1 << " " << t2 << " " << t3 << endl;
//	t1 = a; t2 = b; t3 = c;
//	pf = retrograde;		//获取函数地址
//	pf(t1, t2, t3);		//调用函数
//	cout << "逆序输出:" << t1 << " " << t2 << " " << t3 << endl;
//}