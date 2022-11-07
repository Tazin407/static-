// Ekta class er kotogula data input nilam etar hishab rakha
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << " Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " And his serial is " << count<<endl;
    }
    static void getcount(){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count=1000; // eta class er variable.By default 0 theke initialize hoy
            //korle ekhan theke korte hobe. frst e kora jabe na
int main()
{
    Employee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();
    Employee::getcount(); //eta static function

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();


    lovish.setdata();
    lovish.getdata();
    Employee::getcount();


    return 0;
}
