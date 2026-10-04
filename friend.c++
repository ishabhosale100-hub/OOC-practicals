#include<iostream>
using namespace std;
class student{
private:
  string name;
  int marks;
public:
  student(string n,int m){
    name = n;
    marks = m;
}
 friend class Result;
};
class Result{
public:
  void displayResult(student s){
  cout<<"Student name:"<<s.name<<endl;
  cout<<"Marks:"<<s.marks<<endl;
}
};
int main(){
student s1("Rahul",88);
Result r;
r.displayResult(s1);
return 0;
}












































