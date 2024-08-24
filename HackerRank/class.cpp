// Problem Link : https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
#include <iostream>
#include <sstream>
using namespace std;

class Student{
  private:
    int age, standard;
    string first_name, last_name;
    public:
    //Set Function;
    void set_age(int s_age);
    void set_first_name(string s_fn);
    void set_last_name(string s_ln);
    void set_standard(int s_std);

    //Get Function;
    int get_age();
    string get_first_name();
    string get_last_name();
    int get_standard();
    void to_string();
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}

void Student::set_age(int s_age){
  age = s_age;
}

void Student::set_first_name(string s_fn)
{
  first_name = s_fn;
}

void Student::set_last_name(string s_ln){
  last_name = s_ln;
}

void Student::set_standard(int s_std){
  standard = s_std;
}

int Student::get_age()
{
  return age;
}

string Student::get_first_name()
{
  return first_name;
}

string Student::get_last_name()
{
  return last_name;
}

int Student::get_standard()
{
  return standard;
}

void Student::to_string(){
  cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
}
