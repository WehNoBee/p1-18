/** ���������� 3.13. ���������� � ������ ����� ����� �����. ��������� � ���������� ����� ������ ���� ������� ��������� � �������.
���� ���������� ��������� �������, �������� ������������ �� ���� � ���������� �������� ���������� �������� ��� ������������.
�������� ��������� ���, ����� ��� ���������� ����� ������� � ���������� ���������, ����� ����� ������� � �������������� � �.�. */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, h = 0;
    vector <int> ivec;
    cin >> x;
    while (x != 0){
        ivec.push_back(x);
        cin >> x;
    }
    if (ivec.size()%2 == 1){
        cout << "���-�� ����� ��������, ��������� ������� ��� �����." << endl;
        ivec.push_back(x);
        h = 1;
    }
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix += 2)
    cout << ivec[ix]+ivec[ix+1] << "  ";

    return 0;
}
