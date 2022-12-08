//������ 3, ������� 13, ������������� ��������
//������� ��������� ����, ��������� �������� ����� ����, � ������� ������ ����
//���������� �������� ����� � ��������������� (��������) �������� ����.

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "_Stack.h"

using namespace std;

//������� �������, ����� ������ ������� ���� �� ��������
void invert(string s) {

    //������� ������ ���� �� �������� ������������ 200 ����
    _Stack file_string(200);

    //������� �������� ������, ����� ������� ��� �����, ������� ����� ����� ���������� ���������� � ����
    string buffer;

    //���� ��� ��������� ������ � ����� �� ����� � ���������� ��������� ���� � ����
    for (int i = 0; i < s.length(); i++) {

        //���� �� ������ ������ � ������, �� ����� ���������� ����������� � �������� ������
        if (s[i] != ' ') {
            buffer += s[i];
        }

        //���� ������ ������, �� ��������� ���������� ����� � ���� � ������� ����� ��� ��������� ����
        else {
            file_string.Push(buffer);
            buffer.clear();
        }
    }

    //��������� ��������� ����� � ������, ��� ��� � ����� ����� �� ���� �������
    file_string.Push(buffer);

    //���� ��� ������ ������ � �������� �������
    while (!file_string.Empty()) {
        cout << file_string.Pop() << " ";
    }
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");
    string file;
    ifstream input("input.txt");

    cout << "�������� �����: " << endl;

    //���� ����� ��� ����, ����� �������� ���������� ����� � �������� ��� �� ����� � ������ file
    if (input.is_open()) {
        while (getline(input, file)) {
            cout << file << endl;
        }
    }
    input.close();

    cout << endl << "����� ������ � �������� �������: " << endl;

    //����� �������
    invert(file);

    cout << endl;

    return 0;
}

