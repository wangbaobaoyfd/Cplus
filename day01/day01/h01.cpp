#include "iostream" //����C++ͷ�ļ�

using namespace std;//std��׼�������ռ䣨����������ռ䶨���˺ܶ��׼���壩

void main01() {
	//cout ��׼���������Ļ��
	//endl \n
	cout << "Hello world" << endl;
	system("pause");
}

//��Բ�����
//��������̵ķ�ʽ��
void main() {
	double r = 0;
	double s = 0;

	cout << "������Բ�İ뾶��";
	//cin ��׼���� �������
	cin >> r;
	s = 3.14*r*r;
	cout << "Բ�������s:" << s << endl;

	system("pause");
}