#include "_Stack.h"
#include <string>

//����������� ��� ������������� �����
_Stack::_Stack(int n)
{
	this->n = n;
	top = -1;
	a = new std::string[n];
}

//������� ��� �������� ����� �� �������
bool _Stack::Empty()
{
	return top == -1;
}

//������� ��� �������� ����� �� �������
bool _Stack::Full()
{
	return top == n - 1;
}

//������� ��� ������ �������� �� ������� �����
std::string _Stack::Pop()
{
	return a[top--];
}

//������� ��� ���������� �������� � ����
void _Stack::Push(std::string x)
{
	if (!Full())
		a[++top] = x;
}
