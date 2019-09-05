
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <webots/motor.h>
#include <webots/position_sensor.h>
#include <webots/robot.h>


#define MAX_SPEED_1 6.28
#define MAX_SPEED_2 1.5708

int main(int argc, char **argv) {

  wb_robot_init();

  double   time_step = wb_robot_get_basic_time_step();
  WbDeviceTag motor1 = wb_robot_get_device("motor_1");
  WbDeviceTag motor2 = wb_robot_get_device("motor_2");

   wb_motor_set_position(motor1,INFINITY);
   wb_motor_set_position(motor2,INFINITY);
   wb_motor_set_velocity(motor1, 0.1 * MAX_SPEED_1);
   wb_motor_set_velocity(motor2, 0.5 * MAX_SPEED_1);
  while (wb_robot_step(time_step) != -1) {
  };

  
  wb_robot_cleanup();

  return 0;
}
