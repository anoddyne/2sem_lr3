#pragma once
template <typename T> class _Stack
{
	int top;
	int n;
	T *a;
public:
	_Stack(int n)
	{
		// инициализация стека
		this->n = n;
		top = -1;
		a = new T[n];
	}
	~_Stack(void)
	{
	}
	bool Empty ()
	{	
		// проверка стека на пустоту
		return top == -1;
	}
	bool Full ()
	{	
		// проверка стека на переполнение
		return top == n - 1;
	}

	T Pop();
	void Push(T x);

	static const char* GetType()	
	{	
		// статический метод класса-шаблона, сообщающий информацию о типе T
		return typeid(T).name();
	}
};

template <typename T>
T _Stack<T>::Pop()
{	
	// удаление элемента			    
	return a[top--];
}

template <typename T>
void _Stack<T>::Push(T x)
{	
	// добавление элемента		       
	if (!Full())
		a[++top] = x;
}