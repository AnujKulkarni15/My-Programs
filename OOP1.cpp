#include<iostream>
using namespace std;
class overload
{
    
    public:
    float real,img;
    overload()
    {
        real=0;
        img=0;
    }
    overload(int r,int i)
    {
        real=r;
        img=i;
    }
    overload operator+(overload obj)
    {
        overload temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    overload operator*(overload obj)
    {
        overload temp;
        temp.real=(real*obj.img - img*obj.img);
        temp.img=(img*obj.real + real*obj.img);
        return temp;
    }
};
int main()
{
    overload s1(5,5);
    overload s2(10,10);
    overload s3;
    s3=s1+s2;
    cout<<"the sum of complex number is : ";
    cout<<s3.real<<"+"<<s3.img<<"i";
    s3=s1*s2;
    cout<<"Multiplication of complex number is : ";
    cout<<s3.real<<"+"<<s3.img<<"i";
    return 0;
}