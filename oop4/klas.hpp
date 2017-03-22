#include<iostream>
#include<cstring>
using namespace std;
class A{
private:
    int a;
    int b;
    char *arr;
    int size;


public:


     A(const A& a1){
        a=a1.a;
        b=a1.b;
            size = strlen(a1.arr);
            arr = new char[size+1];
            strcpy(arr, a1.arr);
    }
           A& operator=(const A&  a1){
        a=a1.a;
        b=a1.b;
            size = strlen(a1.arr);
            arr = new char[size+1];
            strcpy(arr, a1.arr);
    }

     ~A(){
        delete [] arr;
     }
    A(int a_,int b_,const char *arr_):
        a(a_),
        b(b_)
        {
             size = strlen(arr_);
            arr = new char[size+1];
            strcpy(arr, arr_);
        }

        void printf(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<arr<<endl;

        }
    void sub(){
        int c;
        c=a+b;
        cout<<c<<endl;

    }


};
