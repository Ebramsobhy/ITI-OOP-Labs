#include <iostream>

using namespace std;

class Fragation
{
  private:
   int num;
   int dom;
  public:
   void setnum(int a)
    {
        num = a;
    }
  void setdom(int b)
    {
        dom = b;
    }
   int getnum()
    {
        return num;
    }
   int getdom()
    {
        return dom;
    }
    Fragation()
    {

    }
    Fragation(int c)
    {
        num = c;
    }
    Fragation(int d,int h)
    {
        num = d;
        dom = h;
    }
    void display()
    {
        cout<< num << "/" << dom;
    }
    Fragation add(Fragation g)
    {
        Fragation s;
        s.num = (this -> num * g.dom) + (g.num * this ->dom);
        s.dom = this -> dom * g.dom;
        return s;
    }

};

int main()
{
    Fragation f1, f2, f3;
    f1.setnum(4);
    f1.setdom(2);
    f2.setnum(8);
    f2.setdom(4);
    f3 = f1.add(f2);
    f3.display();
    return 0;
}
