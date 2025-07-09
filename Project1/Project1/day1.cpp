#include <iostream>
using namespace std;
#include <string.h>
//常量的定义方式
// 1.define 宏常量
// 2.const 修饰的常量
// 
#define Day 7
//int main() {
//	cout << "hello world" << endl;
//	system("pause");
//}

//变量
//int main() {
//	int a = 10;
//	cout << "hello world" << endl;
//	cout << "a = " << a << endl;
//	cout << "一周总共有：" << Day << "天" << endl;
//	//const修饰的变量
//	const int month = 12; //const修改的变量也称为常量
//	cout << "一年总共有：" << month << "个月份" << endl;
//
//	system("pause");
//}


//int main() {
//	short num1 = 10;
//	cout << "short占用的内存空间为:" << sizeof(num1) << endl;
//	int num2 = 10;
//	cout << "int占用的内存空间为:" << sizeof(num2) << endl;
//	long num3 = 10;
//	cout << "long占用的内存空间为:" << sizeof(num3) << endl;
//	long long num4 = 10;
//	cout << "long long占用的内存空间为:" << sizeof(num4) << endl;
//	system("pause");
//	return 0;
//}

//int main() {
//	//默认情况输出一个小数，默认输出六位有效数字
//
//	//float f1 = 3.1415926f;
//	//double f2 = 3.1415926;
//	//cout << "float类型的结果为：" << f1 << endl;
//	//cout << "double类型的结果为：" << f2 << endl;
//	////统计float和double占用的内存空间
//	//cout << "float占用的内存空间为：" << sizeof(f1) << endl;
//	//cout << "double占用的内存空间为：" << sizeof(f2) << endl;
//	////c风格字符串书写
//	//char str1[] = "hello world";
//	//cout << str1 << endl;
//	////c++书写 包含一个头文件string不然要报错
//	//string str2 = "hello world";
//	//cout << str2 << endl;
//
//	//数据的输入
//	int a = 0;
//	cout << "请给数据进行操作" << endl;
//	cin >> a;
//	cout << "变量的值为" << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	//循环语句
//	/*int s = 0;
//	cout << "请输入分数" << endl;
//	cin >> s;
//
//	if (s > 600) {
//		cout << "能考上双一流" << endl;
//	}
//	else {
//		cout << "不能考上双一流" << endl;
//	}*/
//
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "请输入猪1的重量" << endl;
//	cin >> num1;
//	cout << "请输入猪2的重量" << endl;
//	cin >> num2;
//	cout << "请输入猪3的重量" << endl;
//	cin >> num3;
//	cout << "猪1的重量为" << num1 <<endl;
//	cout << "猪2的重量为" << num2 << endl;
//	cout << "猪3的重量为" << num3 << endl;
//	if (num1 > num2) {
//		if (num1 > num3) {
//			cout << "猪1最重" << endl;
//		}
//		else {
//			cout << "猪3最重" << endl;
//		}
//	}
//	else {
//		if (num2 > num3) {
//			cout << "猪2最重" << endl;
//		}
//		else {
//			cout << "猪3最重" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int num = 0;
//	while (num !=10) {
//		cout << num << endl;
//		num++;
//	}
//	system("pause");
//	return 0;
//}
#include <ctime>
int main() {
	//添加随机数种子防止每次随机数一样
	/*srand((unsigned int)time(NULL));
	int num = rand() % 100 +1;
	int val = 0;
	while (1) {
	cin >> val;
	if (val > num) {
		cout << "猜测过大" << endl;
	}
	else if (val < num) {
		cout << "猜测过小" << endl;
	}
	else {
		cout << "恭喜猜对了" << endl;
		break;
		}
	}*/
	

	//水仙花数
	//int num = 100;
	//do{
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;
	//	if (a * a * a + b * b * b + c * c * c == num) {
	//	cout << num << endl;
	//	}
	//	num++;
	//} while (num < 1000);
	/*for (int i=1;i <= 100;i++) {
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "过" << endl;
		}
		else {
		cout << i << endl;
		}
		
	}*/
	for (int i = 0;i < 10;i++) {
		cout << "* \n" << endl;
	}
	
	system("pause");
	return 0;
}