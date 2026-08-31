#include <stdio.h>
/*

fat(7) -> fat(n - 1) n * fat = n*7
fat(6) -> fat(n - 1) n * fat = n*6
fat(5) -> fat(n - 1) n * fat = n*5
fat(4) -> fat(n - 1) n * fat = n*4
fat(3) -> fat(n - 1) n * fat = n*3
fat(2) -> fat(n - 1) n * fat = n*2
fat(1) -> fat(n - 1) n * fat = n*1
fat(0) -> return 1

*/

int fat (int n){
        
        if(n < 1) return 1;
        else return n * fat(n - 1);

    }    
int main()
{
  
  printf("%d", fat(7));

}