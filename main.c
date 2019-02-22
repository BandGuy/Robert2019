#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
     set_servo_position(0,1114);
      cmpc(1); // turn squr up
    while(gmpc(1)<1317)
    {
        motor(0,0);
        motor(1,60);
    } 
     cmpc(1); // go forword
    while(gmpc(1)<5713)
    {
        motor(0,60);
        motor(1,60);
    } 
      cmpc(0); // turn to go to the pipe
    while(gmpc(0)<1900)
    {
        motor(0,60);
        motor(1,0);
    } 
      cmpc(1); // go forword
    while(gmpc(1)<6213)
    {
        motor(0,60);
        motor(1,60);
    } 
    
    set_servo_position(1,829);
    motor(0,100);
    motor(1,100);
    msleep(100);
    set_servo_position(0,396);
    msleep(200);

    return 0;
}
