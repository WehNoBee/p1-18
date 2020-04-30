/**
 Задание 3. Гусятинер Л.Б., (c) 17.04.2020.
Требуется подсчитать количество точек на плоскости с координатами x и y, 
удалённых от начала координат не более, чем на R, где R, x, y - вещественные числа
Общее количество точек - N.
В первой строке задается 1 <= N <= 100.
Во второй строке задается 1.0 <= R <= 100.0.
В следующих n строках задаются координаты -100.0 <= x, y <= 100.0
Решение - 1 балл

Выполнил: Курков Николай
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned int n;
	double r;
	double x, y;
	unsigned int count;
	
	cin >> n >> r;
	for (unsigned int i = 0; i < n; ++i){
		cin >> x >> y;
		if((sqrt(pow(x,2) + pow(y,2)) <= r) && (sqrt(pow(x,2) + pow(y,2)) >= -r))
			++count;

	}
	cout << count << endl;

	return 0;
}

/**
 Пример
Input
3
3.0
1.0 -1.0
2.0 10.0
0.0 0.0
Output
2
 */
