// ©  М. Э. Абрамян (Южный федеральный университет), 1998–2020
// If2. Дано целое число. Если оно является положительным, то вычесть из него 8; в противном случае прибавить к нему 6. Вывести полученное число.
// Автор решения: Груздев Роман Игоревич


#include <iostream>
using namespace std;

int main(){
int n;
	cin >> n;
    if (n >= 0)
	cout << n - 8 << endl;
    else
	cout << n + 6 << endl;

   return 0;
}

/**
Input:
89

Output:
81
~~~~~~~~~~~~~
Input:
-7

Output:
-1
*/
