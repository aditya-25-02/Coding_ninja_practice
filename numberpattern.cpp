#include<iostream>
using namespace std;


int main(){

      int n;
      cin>>n;
      int temp = n;
      
      for( int r=0 ; r<n ; r++ )
      {
          
           int init_num = n-r;
          
           for(int num =0 ; num<r ; num++ )
             {
              cout<<init_num;
              init_num++;
             }
           
          for(int cpy =0; cpy < n-r ; cpy++)    
          cout<<n;
     
          cout<<"\n";
          
      } 
}



