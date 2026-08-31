#include <stdio.h>
/*

soma(7) -> soma(n - 1)
soma(6) -> soma(n - 1)
soma(5) -> soma(n - 1)
soma(4) -> soma(n - 1)
soma(3) -> soma(n - 1)
soma(2) -> soma(n - 1)
soma(1) -> soma(n - 1)
soma(0) -> return 0

*/

int soma (int n){
        
        if(n < 1) return 0;
        else return n + soma(n - 1);
        
    }    
int main()
{
  
  printf("%d", soma(7));

}