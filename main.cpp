#include <iostream>
#include <cstdlib>
#include "student.h"
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;
  //int N  = (argc-1)/2;

/* s1.set_name("Amy"); s1.set_age(20);
 s2.set_name("James");
 s2.set_age(17);
 s1.get_age()>s2.get_age() ? s1.print_name();cout<< "is older":s2.print_name(); cout <<"is older";*/



  student a[N];
  // Set age and set name for the first two ppl
  int i;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    string name = argv[(i*2)+1];
    int age = atoi(argv[(i*2)+2]);

    a[i].set_name(name);
    a[i].set_age(age);
  }
  
  int min_age = a[0].get_age();
  for(i=1;i<N;i++){
    if(a[i].get_age() < min_age){
      min_age = a[i].get_age();
    }
  }

  cout<<"Youngest student"<<endl;
  for(i=0;i<N;i++){
    if(a[i].get_age() == min_age){
      a[i].display();
    }
  }


  //2. Print name and age of all N ppl

  
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest 
  //student young=a[0];
 
  
  // Print all info for the yougest person
 
  
  
  //4. Change input from cin to argv

  
 return 0;

    
  }
  
  


