void printPatt(int n)
{
    for( int r=0 ; r<n+1 ; r++)
    {
        for(int space=0; space< n-r ; space++)
            cout<<" ";
        
        int num = r;
        
        for( int left=0; left<r ; left++)
          {
            cout<<num;
            num--;
          }
        
            num++;
        
        cout<<"0";
        
        for( int right=0; right<r ; right++)
          {
             cout<<num;
             num++;
          }
        
        cout<<"\n";
    }
}

