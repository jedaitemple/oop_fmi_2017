#include<iostream>
using namespace std;
char *strcpy(char *target, const char *source)
{
        int i;

        for(i = 0; source[i] != '\0'; ++i)
                target[i] = source[i];
        target[i] = source[i];

        return target;
}
int strlen(char *target){
    int i;

        for(i = 0; target[i] != '\0'; ++i)

        return i;
}




class Student{
    int fn_;
    char* name_;



public:
     Student(int fn, char* name ) :
        fn_(fn),
        name_(name)
        {
        }
        ~Student(){
            delete[] name_;
        }

        Student(){}


        Student(const Student& other){
                this->fn_=other.fn_;
                int size;
                size = strlen(other.name_);
                this->name_=new char[size];
                strcpy(this->name_,other.name_);
        }
        const Student& operator =(const Student& other){
                fn_=other.fn_;
                name_=other.name_;
        }

        void setfn(int fn){
                fn_=fn;
            }
        void setName(char* name){
                int size;
                size = strlen(name);
                this->name_=new char[size];
                strcpy(this->name_,name);
        }
        void getname(){
            cout<< name_<<endl;
        }
        int getfn(){
            return fn_;
        }


};
    class Set{
        int* arr;
        int size;

        void resize(){
            int* old_arr=arr;
            size+=1;
            arr=new int[size];
            for(int i=0;i<size;i++){
                old_arr[i]=arr[i];
            }
        delete [] old_arr;
        }

    public:
        Set(){}
        ~Set(){
            delete [] arr;
        }
        void add(int a){

                if(search(a)==0){
                    resize();
                    arr[size]=a;
                }
        }
        int search(int a){
                int i;
                for(int i=0;i<size;i++){
                    if(arr[i]==a){
                            return 1;
                    }
                }
            return 0;
        }

        void remove(){
            size=size-1;

        }



    };

int main(){


 return 0;
}
