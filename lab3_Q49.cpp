#include<iostream>

using namespace std;

int main()
{
 int i, j, n, flag, sum=0;

 cout<<"\nProgram to find sum of all prime numbers between 1 to n.";
 cout<<"\nGive a value for n :";
 cin>>n;
 if(n<0) n*=-1;

 for(i=2; i<=n; ++i)
 {
     flag=1;

     for(j=2; j<=i/2; ++j)
        if(i%j==0)
                  { flag=0;  break;}

     if(flag) sum+=i;
 }

 cout<<"\nThe sum of all prime numbers upto "<<n<<" is :"<<sum<<endl;
 
 return 0;

}
 
