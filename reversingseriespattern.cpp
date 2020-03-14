void printPatt(int n)
{
    int num = 1 ;
    
    for( int i=0 ; i<n ; i++ )
      {
         int temp = i+1 ;
        
         if(temp%2==0)
          {
             num+=temp;
             
             for( int j=0; j< temp ;j++)
               {
                  cout<<num<<" ";
                  num--;
               }
             
             num++;
          }      
         else
         {
             if(temp==1)
                 cout<<num;
             else
             {
                 num+=temp-1;
                 for( int j=0 ; j< temp ; j++ )
                   {
                     cout<<num<<" ";
                     num++;
                   } 
                 num--;
             }
         }
        
         cout<<"\n";
      }
}

