//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Hong

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

   //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(5);
   // add 3 elements to the vs vector
    vs.push_back("1");
    vs.push_back("2");
    vs.push_back("3");
    vs.push_back("55");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
  //cout << "\nAnother way to print vector: " << endl; 
  //for(int i = 0; i < vd.size(); i++)
  //{
  //  cout << vd[i] << endl; 
  //}

    //display the 3 elements in the vi vector
  cout << "\nValues in vd: \n";
  for(double vals :vi)
  {
    cout << vals << endl;
  }
   // display the 3 elements in the vs vector
  cout << "\nValues in vs: \n";
  for(int i = 0; i < vs.size(); i++)
  {
    cout << vs[i] << endl; 
  }
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3

    /****Section_Name***STL_Iterators*/ 
    cout << endl;
    vector<int> vint(10);
    vint[0] = 1;
    vint[1] = 2;
    vint[2] = 3;
    vint[3] = 4;
    vint[4] = 5;
    vint[5] = 6;
    vint[6] = 7;
    vint[7] = 8;
    vint[8] = 9;
    vint[9] = 10;

    vector<int>::iterator it;
    for(it = vint.begin(); it != vint.end(); ++it)
    {
      cout << " " << *it;
    }

    /****Section_Name*** Stack*/
    stack<int> st;
    st.push(100);           //push number on the stack
    assert(st.size() == 1); //verify one element is on the stack
    assert(st.top() == 100);// verify element value
    st.top() = 456;         // assign new value
    assert(st.top() == 456);
    st.pop();               // remove element
    assert(st.empty() == true);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    set<int> iset; //set of unique integer numbers
    iset.insert(11); // populate set with some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if(iset.find(55) != iset.end()) // is value already stored?
    {
      iset.insert(55);
    }
    assert(iset.size() == 4); // sanity check
    set<int>::iterator itz;
    for(itz = iset.begin(); itz != iset.end(); it++)
    {
      cout << " " << *it;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    pair<string, string> strstr;
    strstr.first = "Hello";
    strstr.second = "World";

    pair<int, string> intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair<string, int> strint("two", 2);
    assert(strint.first== "two");
    assert(strint.second == 2);
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }