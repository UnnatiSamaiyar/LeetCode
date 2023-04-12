class Solution 
{
public:
    int reverse(int x) 
    {
        int input=abs(x);
         int output=0;
         if (x>= 2147483647 || x<= -2147483647)
            return 0;
     
     while(input!=0)
      {
          
           int term=input%10;
        
        if(output > INT_MAX/10 ){
            return 0 ;
        }
         
        if(output < INT_MIN/10  ){
            return 0 ;
        }
        output=output*10+term;
        input=(input-term)/10;
        } 
          if(x<0)
        {
            return output*-1;
        }
        else
         {
            return output;
        }   
        
    }
};
