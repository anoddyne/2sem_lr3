#include "_Stack.h"
#include <string>

//конструктор для инициализации стека
_Stack::_Stack(int n)
{
	this->n = n;
	top = -1;
	a = new std::string[n];
}

//функция для проверки стека на пустоту
bool _Stack::Empty()
{
	return top == -1;
}

//функция для проверки стека на полноту
bool _Stack::Full()
{
	return top == n - 1;
}

//функция для вывода значения из вершины стека
std::string _Stack::Pop()
{
	return a[top--];
}

//функция для добавления значения в стек
void _Stack::Push(std::string x)
{
	if (!Full())
		a[++top] = x;
}
