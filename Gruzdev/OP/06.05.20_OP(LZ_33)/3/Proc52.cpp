/** Proc52. Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если год Y (целое положительное число) является високосным, и False в противном случае. Вывести значение функции IsLeapYear для пяти данных значений параметра Y. Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400.
 */
// Выполнил: Груздев Роман, П1-18

#include <iostream>
using namespace std;

void IsLeapYear(unsigned long year){
	
	if(year % 4 == 0 && year % 100 != 0 && year % 400 != 0)
		cout << "Ого, действительно, этот год високосный!" << endl;
	else
		cout << "Нет, это самый обычный год" << endl;
}

int main(){
    unsigned long year;
	cout << "Проверь год на високосность!" << endl;
	cout << "Введи нужный тебе год: "; cin >> year; cout << endl;
	IsLeapYear(year);

    return 0;
}
