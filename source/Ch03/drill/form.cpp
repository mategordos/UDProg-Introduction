#include "../../std_lib_facilities.h"

int main() {

  string first_name, friend_name;
  char friend_sex;
  int age;
  
  cout << "Enter the name of the person you want to write to: ";
  cin >> first_name;
  cout << "Enter the name of your friend: ";
  cin >> friend_name;
  cout << "Enter your friend's sex (m stands for male, f stands for female): ";
  cin >> friend_sex;
  cout << "Enter the age of your friend: ";
  cin >> age;
  cout << "\n\n\nDear " << first_name << ",\n";
  cout << "How are you doing buddy? I haven't heard about you for a while, what's cookin good lookin? ;)\n";
  cout << "Have you seen "  << friend_name << " lately?\n";
  
  if (friend_sex == 'm')
    cout << "If you see " << friend_name << " please ask him to call me.";
  if (friend_sex == 'f')  
    cout << "If you see " << friend_name << " please ask her to call me.";
    
  cout << "\nI hear you just had a birthday and you are " << age << " years old.";
  if(age <= 0 || age >= 110)
    simple_error("you're kidding!");
    
  if(age < 12)
    cout << " Next year you'll be " << age+1 << ".";
  if(age == 17)
    cout << " Next year you'll be able to vote.";
  if(age > 70)
  {
    cout << " I hope you enjoy your retirement. \n";
  }
  
  cout << "\nYours sincerely, \n\n" << "Gordos Máté\n";
    
    
  return 0;
}
