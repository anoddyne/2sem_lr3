#include <string>

class _Stack
{
	//вершина стека
	int top;

	//размер стека
	int n;

	//массив для стека
	std::string* a;

public:
	//конструктор стека
	_Stack(int n);

	//деструктор стека
	~_Stack() {};
	bool Empty();
	bool Full();
	std::string Pop();
	void Push(std::string x);
};