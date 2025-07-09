# c++
#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>
#include <time.h>
//namespace LIU {
//	int age = 18;
//	void fun() {
//		cout << "age=" << age << endl;
//	}
//	namespace ZHI {
//		void fun() {
//			cout << "嵌套命名" << endl;
//		}
//	}
//}
//class Student {
//private:
//	int age;
//	int id;
//public:
//	void setAge(int x) {
//		age = x;
//	}
//	int getAge() {
//		return age;
//	}
//	char name[20];
//	void speak() {
//		cout << "今年我:" << age << "岁" << endl;
//	}
//	void hobbit() {
//		speak();
//		cout << "打球" << endl;
//	}
//
//};
//
//int main() {
//
//	LIU::fun;
//	LIU::ZHI::fun;
//	
//	Student stu;
//	strcpy(stu.name, "张三");
//	cout << stu.name << endl;
//	stu.setAge(18);
//	stu.hobbit();
//	system("pause");
//	return 0;
//}

//面向对象
//int main() {
//	//读取文件大小
//	//fstream file;
//	//file.open("cat.jpg", ios::in);
//	//file.seekg(0, ios::end); //将文件指针移动到文件末尾
//	//int size = file.tellg(); //获取文件大小
//	//cout << "文件大小为：" << size << "字节" << endl;
//	//file.close();
//	
//	//读取与修改
//	//fstream file1("2.txt", ios::out | ios::in | ios::trunc); //打开文件，清空内容
//	//char str[] = "Hello, World!"; //要写入的字符串
//	//file1.write(str, sizeof(str)); //将字符串写入文件
//	//file1.close(); //关闭文件
//	//file1.open("2.txt", ios::out | ios::in); //打开文件，清空内容
//	//char str2[100] = { 0 };
//	//file1.read(str2, 1000); //读取文件内容
//	//cout << "读取的内容为：" << str2 << endl; //输出读取的内容
//	//
//	// 
//
//
//	//fstream file3("3.txt", ios::out | ios::in | ios::binary);
//	//char str[2][256] = {
//	//	{"好好学习"},
//	//	{"天天向上"}
//	//};
//	//int len = 0;
//	//len = strlen(str[0]); //获取第一行字符串长度
//	//file3.write((const char*)&len, 4); //写入第一行
//	//file3.write(str[0], len);
//	//len = strlen(str[1]);
//	//file3.write((const char*)&len, 4); //写入第二行
//	//file3.write(str[1], len); //写入第二行
//	//file3.close(); //关闭文件
//	//file3.open("3.txt", ios::in || ios::binary); //以二进制方式打开文件
//	//char gg[2][256] = { 0 };
//	//len = 0;
//	//
//	//file3.read((char *)&len,4);
//	//file3.read(gg[0], len); //读取第一行
//	//file3.read((char*)&len, 4);
//	//file3.read(gg[1], len); //读取第二行
//	//cout << "读取的内容为：" << gg[0] <<"和"<<gg[1] << endl; //输出读取的内容
//
//	
//	//eof函数
//	//file.open("1.txt",ios::out || ios::in);
//	//if (!file.is_open()) {
//	//
//	//cout << "文件打开失败" << endl;
//	//return 0;
//	//}
//	////定义一个超大容量的字符串完成对文件的存储
//	//char str[10240] = {0};
//	////记录录入的字符个数
//	//int n = 0;
//	////循环录入字符 直到文件末尾
//	//while (!file.eof()) {
//	//	str[n++] = file.get(); //读取一个字符
//	//}
//	//cout << str << endl; //输出字符串
//
//	//if (!file.is_open()) //成功返回1，否则返回0
//	//{
//	//	cout << "文件打开失败" << endl;
//	//	return 0;
//	//}
//	//file.put('c');
//	//char c = 'w';
//	//file.put(c);
//	//file.close();
//	//file.open("1.txt", ios::in);
//	//char w;
//	//w = file.get(); //读取一个字符
//	//cout << w << endl; //输出字符
//	//w = file.get(); //读取下一个字符
//	//cout << w << endl; //输出字符
//	//file.close();
//	//fstream file1;
//	//file.open("2.txt", ios::out | ios::in ); //打开文件，清空内容
//	//if (!file.is_open()) {
//	//cout << "文件打开失败" << endl;
//	//return 0;
//	//}
//	//char str[3][1024] = { 0 };
//	////file.get(str[0], 1024);	//读取一行
//	////file.get(); //读取换行符
//	////file.get(str[1], 1024);	//读取下一行
//	////file.get(); //读取换行符
//	////file.get(str[2], 1024);	//读取下一行
//	//for (int i = 0;i < 3;i++) {
//	//	file.getline(str[i], 1024); //读取一行
//	//}
//	////for (int i = 0;i < 3;i++) {
//	////	cout << str[i] << endl; //输出每一行
//
//	////}
//	//file.get(str[0], 1024, 'g');
//	//cout << str[0] << endl;//输出读取到的内容
//	//cout << (char)file.get()<< endl; //输出读取到的换行符
//	//file.close();
//	
//	//重载的输出
//	//fstream file4("4.txt", ios::out);
//	//int x = 666;
//	//char str[] = "Hello, World!";
//	//file4 << x << endl; //输出整数	
//	//file4 << str << endl; //输出字符串
//	//file4.close(); //关闭文件
//	
//	
//	////重载的输入
//	//fstream file5("5.txt", ios::out);
//	//int x = 666;
//	//char str[20] = "Hello, World!";
//	//file5 << x << endl; //输出整数	
//	//file5 << str << endl; //输出字符串
//	//file5.close(); //关闭文件
//	//file5.open("5.txt", ios::in);
//	//int a = 0;
//	//char arr[21] = { 0 }; //定义一个字符数组
//	//file5 >> a >>arr; //读取整数
//	//cout << "读取的整数为：" << a << endl; //输出读取的整数
//	//cout << "读取的字符串为：" << arr << endl; //输出读取的字符串
//
//	return 0;
//}


//函数 排序

//选择排序
void selectionSort(int arr[], int len) {
	//外层循环 次数根据当前元素数量来决定
	for (int i = len - 1;i > 0;--i) {
		for (int j = 0;j < i;j++) {
			if (arr[i] < arr[j]) {
			int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

//插入排序
void insertionSort(int arr[], int len) {
	for (int i = 1;i < len;i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int main() {
	int arr[] = { 6,3,5,7,1,7,2 };
	selectionSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	insertionSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
