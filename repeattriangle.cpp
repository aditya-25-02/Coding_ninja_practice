void printPatt(int n)
{   
    int temp = n;
   for(int r =0 ; r<n ; r++)
    {  
        char init = 'A';
       
       for( int s =0 ; s<r ; s++)
           cout<<" ";
           
       
        for( int i=0; i<temp ; i++)
          {
           cout<<init;
           init++;
          }
    
           init--;
    
        for( int j=0 ; j<temp ; j++)
          {
           cout<<init;
           init--;
          }
           
           cout<<"\n";
           temp--;
    }
}    

