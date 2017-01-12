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
void main02() {
	double r = 0;
	double s = 0;

	cout << "请输入圆的半径：";
	//cin 标准输入 代表键盘
	cin >> r;
	s = 3.14*r*r;
	cout << "圆的面积是s:" << s << endl;

	system("pause");
}


//求圆的面积
//（面向对象的方式）
class MyCicle {//在C++中定义一个自定义数据类型
public:
	double m_s;
	double m_r;
public:
	void setR(double r) {
		m_r = r;
	}
	double getR() {
		return m_r;
	}
	double getS() {
		m_s = 3.14*m_r*m_r;
		return m_s;
	}
};
void main() {
	MyCicle c1;
	double r;
	cout << "请输入C1半径：";
	cin >> r;

	//给c1的属性赋值
	c1.setR(r);
	cout << "c1的面积是：" << c1.getS() << endl;

	system("pause");
}

