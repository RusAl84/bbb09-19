// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
class B {
public:
    B() { cout << "Created class  B  " << endl; }
    void S() { cout << "   s   " << endl; }
};


class SberBank
{

    protected:
        int balance;
        int* pbb;
        void add100() {
            balance = balance + 101;
        }

    private:
        void add_x(int xx) { balance = balance + xx; }
        void sub_x(int xx) { balance = balance - xx; }

    public:
        float procent;

        B d[3];
        void add(int xx) {
            if (xx == 100) {
                add100();
            }
            else
                add_x(xx);
        }
        void view() { cout << "Balance: "<< balance << endl; }
        void sub(int xx) { balance = balance - xx - int(xx * procent); }
        void f1() {
            *pbb = 10000;
        }
        SberBank() {
            balance = 0;
            procent = 0.015;
            pbb = &balance;
        }

};


int main()
{
    SberBank* pA = new SberBank();
   // pA->f2();
    pA->view();
    pA->add(500);
    pA->view();
    pA->sub(300);
    pA->view();
    pA->procent = -15;
    pA->sub(100);
    pA->view();
    pA->f1;
    pA->view();
   // pA->f3();
   // pA->f4();

}

