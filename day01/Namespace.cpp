#include "iostream" //该文件iostream没有引入标准的std

//using namespace std;//需要我们手动添加

void main01() {
	//如果不使用using
	std::cout << "namespace test" << std::endl;

	//如果使用using
	//cout << "namespace test" << endl;

	system("pause");
}

//定义命名空间
