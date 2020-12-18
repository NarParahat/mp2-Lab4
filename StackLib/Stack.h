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
    int ind; // ������
    int end; // �����
    int count; //����������
public:
    TQueue(int size = 0);
    TQueue(TQueue<T>& _v);
    ~TQueue();

    TQueue<T>& operator =(TQueue<T>& _v);

    void Push(T d); //������� 
    T Get(); //��������� 
    int Length();
    int IsEmpty(void) const; // �������� �������

    //++
    inline int min_elem(); //����� ������������ ��������
    inline int max_elem(); //����� ������������� ��������
    inline void file(); //������ � ����

    template <class T1>
    friend ostream& operator<< (ostream& ostr, const TQueue<T1>& A);
    template <class T1>
    friend istream& operator >> (istream& istr, TQueue<T1>& A);
};
#endif