/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int count=2;
void fibonnakki(int prev1,int prev2){
    if(count<=19){
        int new=prev1+prev2;
        printf("%d\n",new);
        prev2=prev1;
        prev1=new;
        count +=1;
        fibonnakki(prev1,prev2);
    }
    else{
        return;
    }
}
int main()
{
  fibonnakki(1,0);

    return 0;
}