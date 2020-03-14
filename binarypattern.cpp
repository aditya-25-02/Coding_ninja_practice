
void printPatt(int n)
{
    int binary =1;
    
    for( int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
          {
              cout<<binary;
          }
        cout<<"\n";
        
        if(binary)
            binary=0;
        else
            binary=1;
    }
}

