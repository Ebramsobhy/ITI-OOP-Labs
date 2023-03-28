#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

// Task 2
class shape
{
public:

   int dim1;
   int dim2;
   int getArea();
};

class rectangle : public shape
{
public:

    getArea()
    {
        return dim1 * dim2;
    };
};

 class circle : public shape
{
   public:
};
 class square : public rectangle
{
  public:
};

#endif // ASSIGNMENT_H
