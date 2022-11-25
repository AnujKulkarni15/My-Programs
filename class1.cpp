#include<iostream>
using namespace std;
class test
{
    private:
        int a,b,c;
    public:
        void addition(int a,int b)  /* parameterised constructor */
        {
            c=a+b;
            // return c;
        }
        void display()
        {
            cout<<"the sum is : "<<c;
        }
};
int main()
{
    test obj;
    obj.addition(5,4);
    obj.display();
    return 0;
}