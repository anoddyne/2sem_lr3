#include <string>

class _Stack
{
	//������� �����
	int top;

	//������ �����
	int n;

	//������ ��� �����
	std::string* a;

public:
	//����������� �����
	_Stack(int n);

	//���������� �����
	~_Stack() {};
	bool Empty();
	bool Full();
	std::string Pop();
	void Push(std::string x);
};