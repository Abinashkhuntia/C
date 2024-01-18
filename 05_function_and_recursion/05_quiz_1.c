#include <stdio.h>
void goodMorning();
void goodafternoon();
void goodnight();

int main(){
    goodMorning();
    goodafternoon();
    goodnight();
    return 0 ;                   /*If the passed variable is changed inside the function,
                                   the function call doesn’t change the value in the calling function.8*/
}

void goodMorning(){ 
printf("good Morning\n");
}

void goodafternoon(){ 
printf("good afternoont\n");
}
void goodnight(){ 
printf("good night\n");
}