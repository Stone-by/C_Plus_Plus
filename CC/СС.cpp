// СС.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a1, a2, b;
    string c, y;
    //ввод всех нужных данных для работы
    cout << "СС 1: " <<  endl;
    cin >> a1;
    cout << "СС 2: " << endl;
    cin >> a2;
    cout << "Число: " << endl;
    cin >> y;
    //первые две проверки на их корректность. чтобы были 2-16 системы и нельзя было вводить что то кроме символов включенных в эти сс
    if (a1 > 16 || a2 > 16) {
        cout << "Error! This CC not correct! Please use 2-16 CC!" << endl;
        return 0;
    }
    for (int i = 0; i < y.length(); i++) {
        //использую таблицу аськи 
        if ((65 <= y[i] && y[i] <= 70) || (48 <= y[i] && y[i] <= 57)) {
            continue;
        }
        else {
            cout << "Not correct input! Only 0123456789ABCDEF!" << endl;
            break;
            return 0;
        }
    }
    //если сс исходная 10 то сразу перевод
    if (a1 == 10) {
        //какая то шняга с переводом. скорей всего из стринга в инт
        b = atoi(y.c_str());
    Link:
        int d1;
        int d2;
        do {
            //делю просто и с остатком чтобы получать в специальную переменную нужные мне значения и при этом идти под массиву чтобы в конце выйти из него
            d1 = b / a2;
            d2 = b % a2;
            b = d1;
            //добавление букв в сс где надо 
            if (d2 > 9) {
                switch (d2)
                {
                case 10: {
                    c += "A";
                    break;
                }
                case 11: {
                    c += "B";
                    break;
                }
                case 12: {
                    c += "C";
                    break;
                }
                case 13: {
                    c += "D";
                    break;
                }
                case 14: {
                    c += "E";
                    break;
                }
                case 15: {
                    c += "F";
                    break;
                }
                default:
                    break;
                }
                continue;
            }
            //так можно привести к стрингу любое число. тип инт 2 и таким образом оно становится стринг 2
            c += to_string(d2);
        } while (d1 != 0);
        int dl = c.length();
        //разворот строки
        for (int i = 0; i < dl; i++) {
            cout << c[dl - i - 1];
        }
        return 0;
    }
    //если исходная меньше 10 то сначала полином обычный
    if(a1<10) {
        string hc = y;
        string per;
        int suma = 0;
        int chet = 0;
        int dl = hc.length();
        //просто полином. каждое число аля 222 в 3 = 2*3^2+2*3^1... и так далее каждую 2(или как то так уже забыть мог как правильно полиномом пользоваться)
        for (int i = 0; i < dl; i++) {
            per = hc[i];
            chet = atoi(per.c_str());
            suma += chet * pow(a1, (dl - i - 1));
        }
        b = suma;
        //ссылка наверх
        goto Link;
    }
    //если больше 10 то с учетом символов
    if (a1 > 10) {
        string hc = y;
        string per;
        int suma = 0;
        int chet = 0;
        int dl = hc.length();
        //тот же самый полином но с учетом букв
        for (int i = 0; i < dl; i++) {
            per = hc[i];
            switch (per[0])
            {
            case 'A': {
                chet = 10;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            case 'B': {
                chet = 11;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            case 'C': {
                chet = 12;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            case 'D': {
                chet = 13;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            case 'E': {
                chet = 14;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            case 'F': {
                chet = 15;
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
            default:
                chet = atoi(per.c_str());
                suma += chet * pow(a1, (dl - i - 1));
                break;
            }
        }
        b = suma;
        //ссылка на 10 сс
        goto Link;
    }
}

