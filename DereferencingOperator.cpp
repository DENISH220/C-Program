#include <iostream>
using namespace std;
class M
{
    int x;
    int y;
  public:
    void set_xy(int a,int b)
    {
        x=a;
        y=b;
    }
    friend intsum(M m);
}
int sum(M m)
{
    int M::* px = &M::x;
    int M::* Py = &M::y;
    M *pm = &m;
    int S=m.*px+pm->*py;
    return S;
}
int main()
{
    M m;
    void (M::*pf)(int,int)=&M::set_xy;
    (n.*pf)(10,20);
    cout <<"Sum = "<<Sum(n)<<"\n";
    M *op = &n;
    (op->*pf)(30,40);
    cout <<"Sum = "<<Sum(n)<<"\n";
    return 0;
}