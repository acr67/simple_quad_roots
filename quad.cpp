#include <iostream>
#include <cmath>

int main() {
  double a, b, c;
  std::cout<<"Input the a, b, and c constants INDIVIDUALLY:\n";
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;

  if (a==0){
    std::cout<<"Invalid\n";
    return 0;
  }
  else if (b*b<4*a*c){
    std::cout<<"Negative radical, try again\n";
    return 0;
  }
  else{
    double val1=(-b+std::sqrt(b*b-4*a*c))/(2*a);
    double val2=(-b-std::sqrt(b*b-4*a*c))/(2*a);
    std::cout<<"Roots are "<<val1<<" and "<<val2<<"\n";
    return 0;
  }
}