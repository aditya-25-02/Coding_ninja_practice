void printPatt(int n)
{
    for( int i=0 ; i<n; i++) 
       {
          for( int s =0 ; s<i ; s++)
              cout<<" ";
          for( int j=0 ; j<n-i ; j++)
              cout<<"*";
        
          cout<<"\n";
       } 
}

