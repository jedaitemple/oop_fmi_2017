#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Car{
    char* name;
    char* number;
    unsigned int power;
public:
    Car(){}
    Car(const char* name_,const char* number_,unsigned int power_){
           int arr_size = strlen(name_);
            name = new char[arr_size+1];
            strcpy(name, name_);

            arr_size = strlen(number_);
            number = new char[arr_size+1];
            strcpy(number, number_);
            power=power_;
    }
    void print(){
        cout<<name<<" "<<number<<" "<<power<<endl;

    }
    Car(const Car& other){
            int arr_size = strlen(other.name);
            name = new char[arr_size+1];
            strcpy(name, other.name);

            arr_size = strlen(other.number);
            number = new char[arr_size+1];
            strcpy(number, other.number);
            power=other.power;


    }
    Car& operator=(const Car& other){
        int arr_size = strlen(other.name);
            name = new char[arr_size+1];
            strcpy(name, other.name);

            arr_size = strlen(other.number);
            number = new char[arr_size+1];
            strcpy(number, other.number);
            power=other.power;

    }
    ~Car(){
        delete []name;
        delete [] number;
    }

};
    class Person{
        char* name;
        Car* cars;
      int  number_car;
    public:

        Person(const char* name_):
            number_car(0)
            {
            int size_arr = strlen(name_);
            name = new char[size_arr+1];
            strcpy(name, name_);
            cars=0;
        }
          void  Add_car(const Car& C1){
              delete [] cars;
              number_car++;
            cars =new  Car[number_car];
            cars[number_car]=C1;


        }


    };

int main(){
    Car c1("Mclaren mercedes","0",100);
      Car c2("Ferrari","2",1000);

    Person p("Kosio");
    p.Add_car(c1);
    p.Add_car(c2);


return 0;
}
