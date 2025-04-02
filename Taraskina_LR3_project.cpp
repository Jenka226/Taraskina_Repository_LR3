#include <iostream>
using namespace std;



double numberX(double x ){
    //разрабатывается Ивановым П. - ветка branch_fun_1
    cin>>x;
}
double numberY( double y){
    //разрабатывается Ивановым П. - ветка branch_fun_1
    cin>>y;
}
double numberZ(){
    //разрабатывается Ивановым П. - ветка branch_fun_1
    
}
double DrobPart(double x,double y, double z)
{
    //разрабатывается Петровым П. - ветка branch_fun_2
}

double Okruglenie() 
{
    //разрабатывается Василенко А. - ветка branch_fun_3
}


int main() {
    double x, y, z;
    double menu;
    

    do {
        cout << "Task 1. Ввести вещественное число x" << endl;
        cout << "Task 2. Ввести вещественное число y" << endl;
        cout << "Task 3. Ввести вещественное число z" << endl;
        cout << "Task 4. Найти дробную часть суммы x,y,z" << endl;
        cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "Введите число x " << num(x) << endl;
                break;
            case 2:
                cout << "Введите число y " << num(y) << endl;
                break;
            case 3:
                cout << "Введите число z " << num(z) << endl;
                break;
            case 4:
                cout << "Найти дробную часть суммы этих 3-х чисел " << DrobPart(x,y,z) << endl;
                break;
            case 5:
                cout << "Введите число х " << num(x) << endl;
                break;
            case 0:
                cout << "Выход из приложения." << endl;
                break;
            default:
                cout << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}