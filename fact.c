    #include <stdio.h>
     
    int main()
    {
      int i;
      long long int f=1,n;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
       f=f*i;
     printf("%lld\n",f);  
      return 0;
    }
