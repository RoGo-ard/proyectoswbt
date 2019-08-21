#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <webots/motor.h>
#include <webots/position_sensor.h>
#include <webots/robot.h>

 static WbDeviceTag hip;
 static double  previous_position ;
 double position;
 int main(int argc, char **argv) {
 
  wb_robot_init();
  double time_step = wb_robot_get_basic_time_step();
   hip = wb_robot_get_device("hip");
   wb_position_sensor_enable(hip, time_step);
   
   previous_position = wb_position_sensor_get_value(hip);
 
  while (wb_robot_step(time_step) != -1) {
 printf("Valor sensor pos %f\n",position);
 position = wb_position_sensor_get_value(hip);
  };

  /* Enter your cleanup code here */

  /* This is necessary to cleanup webots resources */
  wb_robot_cleanup();

  return 0;
}
