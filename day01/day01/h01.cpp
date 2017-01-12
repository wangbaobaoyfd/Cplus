#include "iostream" //包含C++头文件

using namespace std;//std标准的命名空间（在这个命名空间定义了很多标准定义）

void main01() {
	//cout 标准输出（黑屏幕）
	//endl \n
	cout << "Hello world" << endl;
	system("pause");
}

//求圆的面积
//（面向过程的方式）
void main() {
	double r = 0;
	double s = 0;

	cout << "请输入圆的半径：";
	//cin 标准输入 代表键盘
	cin >> r;
	s = 3.14*r*r;
	cout << "圆的面积是s:" << s << endl;

	system("pause");
}