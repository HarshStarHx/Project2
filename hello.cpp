#include<iostream>
#include<iomanip>
#include<list>
#include<vector>
#include<queue>
#include<queue>
#include<algorithm>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<map>
using namespace std;

class Student{
    private:
    vector<int>st;
    public:
    Student(){}
    Student(vector<int>&val):st(val){}
    void print();

};
void Student::print()
{
      for(auto i:st)
      {
         cout<<i << setw(2);
      }
}
int main()
{
    
    vector<int>val{1,2,3,4,5,6,7,78,8,9,9};
     Student x(val);
     x.print();
    
}