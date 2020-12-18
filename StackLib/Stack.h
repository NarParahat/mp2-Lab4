#ifndef _STACK_
#define _STACK_
#include <iostream>
#include <fstream>
using namespace std;

template <class T>
class TQueue
{
protected:
    int length;
    T* x;
    int ind; // начала
    int end; // конца
    int count; //Количество
public:
    TQueue(int size = 0);
    TQueue(TQueue<T>& _v);
    ~TQueue();

    TQueue<T>& operator =(TQueue<T>& _v);

    void Push(T d); //Вставка 
    T Get(); //Получение 
    int Length();
    int IsEmpty(void) const; // контроль пустоты

    //++
    inline int min_elem(); //Поиск минимального элемента
    inline int max_elem(); //Поиск максимального элемента
    inline void file(); //Запись в файл

    template <class T1>
    friend ostream& operator<< (ostream& ostr, const TQueue<T1>& A);
    template <class T1>
    friend istream& operator >> (istream& istr, TQueue<T1>& A);
};
#endif