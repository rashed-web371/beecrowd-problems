#include <stdio.h>
int main(void){
    int time, hours, minutes, seconds;
    //printf("Time in Seconds:");
    scanf("%i", &time);

     for(hours = 0; time >= 3600 ;hours++){
        time = time - 3600;
     }
     for(minutes = 0; time >= 60 ;minutes++){
        time = time - 60;
     }
     for(seconds = 0; time >= 1 ;seconds++){
        time = time - 1;
     }
     printf("%i:%i:%i\n", hours, minutes, seconds );
  
     return 0;
}
