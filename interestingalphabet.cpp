void printPatt(int n)
{
    char init = 'A' ;
    
    char req = init + n -1 ;
    
    for(  int i=0 ; i<n ; i++ )
       {
          char temp = req - i;
        
          for(int j=0 ; j<i+1 ; j++)
             {
                cout<<temp;
                temp++;
             }
          cout<<"\n";
       }
}

