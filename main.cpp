#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number n=";
  cin>>n;
  int i=1;
  int q=n;
   int r=0;
  while(i<=n)
  {
      int d=(q%10);
      r=((r*10)+d);
      q=(q/10);
      if(q==0){
        break;
      }
      i++;
  }
  cout<<"\nThe reverse number is="<<r<<endl;
  int p=n;
  int o=r;
  int j=1;
  while(j<=n)
  {
      int a=(p%10);
      int b=(o%10);
      p=(p/10);
      o=(o/10);
      if(a!=b)
      {
          cout<<"Not a pelindrome."<<endl;
          return 0;
      }
      j++;
  }
  cout<<n<<" is a pelindrome."<<endl;
    return 0;
}
