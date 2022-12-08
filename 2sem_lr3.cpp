//Задача 3, вариант 13, Бесшапошников Владимир
//Имеется текстовый файл, требуется получить новый файл, в котором должен быть
//скопирован исходный текст с инвертированным (обратным) порядком слов.

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "_Stack.h"

using namespace std;

//создаем функцию, чтобы менять порядок слов на обратный
void invert(string s) {

    //создаем пустой стек со строками вместимостью 200 слов
    _Stack file_string(200);

    //создаем буферную строку, чтобы хранить там слова, которые потом будем записывать поочередно в стек
    string buffer;

    //цикл для разбиения текста в файле на слова и добавление отдельных слов в стек
    for (int i = 0; i < s.length(); i++) {

        //если не найден пробел в тексте, то слова побуквенно добавляются в буферную строку
        if (s[i] != ' ') {
            buffer += s[i];
        }

        //если пробел найден, то добавляем полученное слово в стек и очищаем буфер для следующих слов
        else {
            file_string.Push(buffer);
            buffer.clear();
        }
    }

    //добавляем последнее слово в тексте, так как в конце может не быть пробела
    file_string.Push(buffer);

    //цикл для вывода текста в обратном порядке
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

    cout << "Исходный текст: " << endl;

    //цикл нужен для того, чтобы показать содержимое файла и записать все из файла в строку file
    if (input.is_open()) {
        while (getline(input, file)) {
            cout << file << endl;
        }
    }
    input.close();

    cout << endl << "Вывод текста в обратном порядке: " << endl;

    //вызов функции
    invert(file);

    cout << endl;

    return 0;
}

