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
void main02() {
	double r = 0;
	double s = 0;

	cout << "������Բ�İ뾶��";
	//cin ��׼���� �������
	cin >> r;
	s = 3.14*r*r;
	cout << "Բ�������s:" << s << endl;

	system("pause");
}


//��Բ�����
//���������ķ�ʽ��
class MyCicle {//��C++�ж���һ���Զ�����������
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
	cout << "������C1�뾶��";
	cin >> r;

	//��c1�����Ը�ֵ
	c1.setR(r);
	cout << "c1������ǣ�" << c1.getS() << endl;

	system("pause");
}

