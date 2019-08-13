#include <iostream>
int isBig(int s){
  if (s >100){
    std::cout << "this is a pretty big number, want to try a smaller one?" << "\n";
  }}
int main()
{
  std::cout << "Hello World!" << std::endl;
  std::cout << "This is my first time writing in C++" << "\n";
  int s;
  s= 110;
  isBig(s);
  std::cout << "Enter a new number" << "\n"; 
  std::cin >> s;
  std::cout << "The new number is: " << s << std::endl;
  std::cout << "let's see if we can make this number smaller" << "\n";
  while (s>50){
    s -= 10;
    std::cout << "s = " << s << "\n";
  }
  std::cout << "let's look at a different number. " << "\n";
  for(int r= 10; r <15; r++){
    std::cout << "r = " << r << "\n";
  }
    
  return 0; 
}
