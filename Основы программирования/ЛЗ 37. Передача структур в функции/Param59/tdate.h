/* Param59. ������� ��� TDate � ������ � ������ ������ ���� Day (����), Month (�����) � Year (���) �
� ������� LeapYear(D) ����������� ���� � ���������� ���� TDate, ������� ���������� True,
���� ��� � ���� D �������� ����������, � False � ��������� ������.
������� �������� ������� LeapYear ��� ���� ������ ��� (��������������, ��� ��� ���� �������� �����������).
���������� ��������� ���, ��������� �� 4, �� ����������� ��� �����, ������� ������� �� 100 � �� ������� �� 400.
*/

/* ��������� "����". ��������� �.�., 05.05.2020 */
#ifndef TDATE_H
#define TDATE_H

struct tdate{ /* ���� */
    int day; /* ���� */
    int month; /* ����� */
    int year; /* ��� */

    /* �������� �� ��� ���������� */
	bool leap_year();
};

#endif // DATE_H
