// pr15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include "cmath"
#include <functional>

using namespace std;

 double func3(double x, double y, double z, double v) {
    double w = pow(abs(cos(x) - cos(y)), (1 + 2 * sin(y) * sin(y)));
    w *= (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
    return w;
}

double func4(double x, double y, double z, double w) {
    double s1 = pow(y, -1 * sqrt(abs(x)));
     double b = log(s1)*(x-y/2)+pow(sin(atan(z)),2);
     return b;
 }


class my_Fun
{   // компоненты-данные 
        double x, y,z,v,w;
        std::function<double(double _x, double _y, double _z, double _v)> pf;
        // компоненты-функции 
    public:
        // функция инициализации 
        void set(double _x, double _y, double _z, double _v)
        {
            x = _x;
            y = _y;
            z = _z;
            v = _v;
        }
        // функция вывода результатов 
        void print(void)
        {
            cout << "w= " << w << endl;
        }
        void Run(void);
        my_Fun(void);
        my_Fun(double _x, double _y, double _z, double _v);



        void Run2(void)
        {
            std::cout << pf( x,  y,  z,  v) << endl;
        }
        void set2(std::function<double(double _x, double _y, double _z, double _w)> p, double _x, double _y, double _z, double _w)
        {
            pf = p;
            x = _x;
            y = _y;
            z = _z;
            w = _w;
        }
};

void my_Fun::Run(void)
{
    w = pow(abs(cos(x) - cos(y)), (1 + 2 * sin(y) * sin(y)));
    w *= (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
}
my_Fun::my_Fun(void) {
    w = 0;
}
my_Fun::my_Fun(double _x, double _y, double _z, double _v) {
     x = _x;
     y = _y;
     z = _z;
     v = _v;
 }


int main()
{
    //srand(time(0)); // автоматическая рандомизация
    //int kol_4 = 0;
    //int kol = 2000000;
    //for (int i = 0; i < kol; i++) {
    //    int si = 1 + rand() % 10;
    //    //cout << "rand_value = " << si << endl;
    //    if (si == 4) {
    //        kol_4++;
    //    }
    //}
    //cout << "kol_4 = " << kol_4 << endl;
    //double otn = (double)kol_4 / kol;
    
    
    //cout << "w = " << func(3.74*0.01,-0.825,16, 1.0553)<< endl;
   
    //my_Fun Fun1; //объявление объекта1,но не инициализация
    //Fun1.set("z",1.0); // инициализация данных
    //Fun1.print();                 // прямой вызов 
    //cout << "Input enter1..." << endl << endl;

    //my_Fun* p1 = &Fun1;  // воспользовались объектом 1
    //                 // новая инициализация
    //p1->set("Function1 = ", 1.0); // косвенный вызов   
    //p1->print();                  // косвенный вызов   
    //cout << "Input enter1..." << endl << endl;

    //my_Fun* p2 = new my_Fun(3.74 * 0.01, -0.825, 16, 1.0553);
    //my_Fun* p1 = p2;
    //my_Fun* p3 = p1;
    //p1->set(3.74 * 0.01, -0.825, 16, 1.0553);  // косвенный вызов   
    //p3->Run();

    //p1->print();                  // косвенный вызов   
    //// удаляется динамически выделенный объект
    //delete p3;

    my_Fun mf;
    //mf.set(3.74 * 0.01, -0.825, 16, 1.0553);
    //mf.Run();
    //cout << "var 3" << endl << endl;
    //mf.print();
    //delete &mf;
    mf.set2(func3, 3.74 * 0.01, -0.825, 16, 1.0553);
    cout << "var 3" << endl << endl;
    mf.Run2();
    mf.set2(func4, 0.4 * pow(10, 4), 4.642 * pow(10, -2), 20.001*100,-182.036);
    cout << "var 4" << endl << endl;
    mf.Run2();

    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
