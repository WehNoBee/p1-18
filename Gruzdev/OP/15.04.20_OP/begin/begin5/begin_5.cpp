// ©  М. Э. Абрамян (Южный федеральный университет), 1998–2020
// Begin5°. Дана длина ребра куба a. Найти объём куба V = a^3 и площадь его поверхности S = 6·a^2.
// Автор решения: Груздев Роман Игоревич

#include <iostream>
using namespace std;

int main(){
int a, v, s;
        cin >> a;
    v = a * a * a;
    s = 6 * a * a;
        cout << "Объём куба = " << v << "\n"
        << "Площадь его поверхности = " << s << endl;
   return 0;
}


/** Вход: 5
   

    Выход: Объём куба = 125
Площадь его поверхности = 150 */

