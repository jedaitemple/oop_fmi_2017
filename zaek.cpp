#include<iostream>
#include<cstring>
#include<string>

using namespace std;
class EGG{
    char* str;
    int arr_size;
public:
    EGG();
    EGG(const  char* str_)
        {
            arr_size = strlen(str_);
            str = new char[arr_size+1];
            strcpy(str, str_);

        }
       void  print(){
            cout<<str<<endl;
            cout<<arr_size<<endl;

       }



};


class Basket{
        EGG* egg;
    char* arr;
    int size_arr;
    int number_egg;
public:
    Basket();
    Basket(const char* arr_):
        number_egg(0)
        {
            size_arr = strlen(arr_);
            arr = new char[size_arr+1];
            strcpy(arr, arr_);
            egg=0;
        }
    Basket  Add_egg(const EGG& EG1){
            egg =new  EGG(EG1);
            egg[number_egg]=EG1;
            number_egg++;
            return *this;
        }
        void print(){
                for(int i=0;i<=number_egg;i++){
                    egg[i].print();
                }


        }



};






int main(){
   EGG Q1("Kosio");
     EGG Q2("Ukalski");
    Basket b1("Konstantin");

    b1.Add_egg(Q1);
    b1.Add_egg(Q2);
     b1.Add_egg(Q1);
    b1.print();
return 0;

}
