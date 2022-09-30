#pragma once
template <typename T> class _Stack
{
	int top;
	int n;
	T *a;
public:
	_Stack(int n)
	{
		// ������������� �����
		this->n = n;
		top = -1;
		a = new T[n];
	}
	~_Stack(void)
	{
	}
	bool Empty ()
	{	
		// �������� ����� �� �������
		return top == -1;
	}
	bool Full ()
	{	
		// �������� ����� �� ������������
		return top == n - 1;
	}

	T Pop();
	void Push(T x);

	static const char* GetType()	
	{	
		// ����������� ����� ������-�������, ���������� ���������� � ���� T
		return typeid(T).name();
	}
};

template <typename T>
T _Stack<T>::Pop()
{	
	// �������� ��������			    
	return a[top--];
}

template <typename T>
void _Stack<T>::Push(T x)
{	
	// ���������� ��������		       
	if (!Full())
		a[++top] = x;
}