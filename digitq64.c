/* Find the digit that occurs the most times in an integer number.

*/

# include <stdio.h>
int main()
{
    int num,d;
    int count[10]={0};
     
     printf("Enter an integer number \n ");
     scanf("%d",&num);
      
     
     while(num>0)
     {
         d=num%10;
         count[d]++;
         num/=10;
     }
     int maxfreq=count[0];
     for(int i=0;i<10;i++)
     {
         if(count[i]>count[maxfreq])
         maxfreq=count[i];
     }
     printf("Highest frequency %d \n",maxfreq);
     return 0;
     
    }
