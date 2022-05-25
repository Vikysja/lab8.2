// Project8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Квецко Вікторії
//Варіант 33

#include <iostream>
#include <string>

using namespace std;

string findWord(string, char);

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "Last word (starts with \"a\"): " << findWord(str, 'a') << endl;

    return 0;
}

string findWord(string str, char letter)
{
    if (str.find(letter) == -1)
        return "";

    string word = "";

    if (str.find(' ') == -1)
        word = str;

    size_t pos = 0;

    while ((pos = str.find(' ', pos)) != -1) {
        if (str[pos + 1] == letter)
            word.assign(str, pos + 1, str.find(' ', pos + 1) - pos - 1);
        pos++;
    }

    return word;
}