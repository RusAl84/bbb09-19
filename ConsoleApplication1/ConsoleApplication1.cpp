// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
class B {
public:
    B() { cout << "Created class  B  " << endl; }
    void S() { cout << "   s   " << endl; }
};


class A
{

    protected:
        int balance;
        double* pbb;
        char mas[5][3];
        void add100() {
            balance = balance + 101;
        }

    private:
        void add_x(int xx) { balance = balance + xx; }
        void sub_x(int xx) { balance = balance - xx; }
        double size_pen_krip;
    public:
        double procent;

        B d[3];
        void prishepit(int xx) {
            size_pen_krip = size_pen_krip - xx;

        }
        void view() { cout << "Balance: "<< balance << endl; }
        void sub(int xx) { balance = balance - xx - int(xx * procent); }
        void dostat_pen() {
            cout << "Size of Pen: " << size_pen_krip << endl;
        }
        A() {
            balance = 0;
            procent = 0.015;
            pbb = &procent;
            size_pen_krip = 17.0;
        }

};


int main()
{
    A  cA;
    cA.view();
    cA.dostat_pen();
    cA.prishepit(7.5);
    cA.dostat_pen();
   // pA->f3();
   // pA->f4();

}

