#include <iostream>
using namespace std;
class A{
    int day_;
    int month_;
    int year_;
public:

    //drg konstruktor varshi sashtata rabota
     /*
    A(int day,int month,int year){
    day_=day;
    month_=month;
    year_=year;
    }
*/

     A(int day,int month,int year) :
    day_(day),
    month_(month),
    year_(year)
    {}
    A(const A &a1){// copy constructur
        day_=a1.day_;
        month_=a1.month_;
        year_=a1.year_;

    }
    A&  operator +=(const A &a1){
        day_+=a1.day_;
        month_+=a1.month_;
        year_+=a1.year_;


    }
      A&  operator +(const A &a1){
        day_+=a1.day_;
        month_+=a1.month_;
        year_+=a1.year_;


    }
    A& operator = (const A &a1){
        day_=a1.day_;
        month_=a1.month_;
        year_=a1.year_;
    }

    void setday(int day);
    void setmonth(int month);
    void setyear(int year);
    int day()const;
    int month() const;
    int year() const;
    bool isvalid(){
        if(year_>0 && (month_<=12 && month_>0) && day_<=31){
            return true;
        }else return false;

    }
    void print(){
        cout<<day_<<month_<<year_<<endl;
    }

    };



    int A::day() const {
        return day_;
    }
    int A::month() const{
        return month_;
    }
    int A::year() const{
        return  year_;
    }
    void A::setday(int day){
        day_=day;
    }
    void A::setmonth(int month){
        month_=month;
    }
    void A::setyear(int year){
        year_=year;
    }




int main(){
    A a1(4,11,1997);
    A a2(5,7,1289);

    //copy constructur a2(a1);

return 0;
}
