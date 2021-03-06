#include<iostream.h>
#include<conio.h>
  class Fact
{
  int n,f;
   public:
    Fact();
    void get();
    void calculate();
    void show();
};
   
   Fact::Fact()
 {
   f=1;
 }
  
  void Fact::get()
 {
   cout<<"Enter No:";
   cin>>n;
 }
  void Fact::calculate()
 {
   for(int i=1;i<=n;i++)
    {
      f = f*i;
    }
 }
  void 	Fact::show()
 { 
  cout<<"No. is:"<<n;
  cout<<"It's Fact is:"<<f;
 }

   int main()
{
   Fact A;
   A.get();
   A.calculate();
   A.show();
   return 0;
}   