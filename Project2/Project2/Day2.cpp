#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;


//int main() {
//	/*for (int j = 0;j < 10;j++) {
//		for (int i = 0;i < 10;i++) {
//		cout << "* \n";
//
//		}
//		cout << endl;
//	}
//	*/
//	for (int i = 1;i < 10;i++) {
//		for (int j = 1;j <= i;j++) {
//			cout << i * j << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//命名空间 也是用函数的类型调用嵌套类似于文件夹
namespace LIU {
	int age = 18;
	void fun() {
		cout << "age=" << age << endl;
	}
	namespace zhi {
		void fun() {
			cout << "嵌套命名" << endl;
		}
	}
}

int main() {

	LIU::fun;
	LIU::zhi::fun;
	system("pause");
	return 0;
}