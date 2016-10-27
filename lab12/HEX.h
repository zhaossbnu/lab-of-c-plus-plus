#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class HEX
{
public:
	char sign;						//����λ:  ��+����ʾ������-����ʾ����0�ķ��ż�Ϊ��+��
	char m_num[10];					//���Դ��10λʮ���������ݣ���������ȷ��2��4λʮ����������+��*�Ľ���������
public:
	HEX();							//���캯������ʼ���ɷ���λΪ��+��������ȫ��0��
	HEX(int n);						//����������ʮ���������ݣ���������ת����ʮ���������ݣ�
	~HEX();
	unsigned GetBit(int i);				//���ÿһλ���ݵ�ʮ������ֵ����������λ��
	operator int();						//��ʮ����������ת����ʮ��������
	int length();						//������ݵĳ���
	HEX operator+(HEX n);				//�ӷ�
	HEX operator-(HEX n);				//����
	HEX operator*(HEX n);				//�˷�
	HEX operator/(HEX n);					//��������ֻҪ�õ���
	HEX operator%(HEX n);				//ȡģ����ֻҪ�õ�����
	HEX& operator++();					//ǰ��++
	HEX operator++(int); 					//����++
	friend istream& operator>>(istream& i, HEX& n);		//����ʮ��������
	friend ostream& operator<<(ostream& o, HEX n);		//���ʮ��������

};

