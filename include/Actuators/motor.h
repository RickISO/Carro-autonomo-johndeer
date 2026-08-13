#ifndef MOTORS_H
#define MOTORS_H
#include <stdint.h>
typedef struct {
    int8_t motor_front_left;
    int8_t motor_front_right;
    int8_t motor_back_left;
    int8_t motor_back_right;
} Motorspeeds;
typedef enum 
{
    MOTOR_FRONT_LEFT = 0,
    MOTOR_FRONT_RIGHT=1,
    MOTOR_BACK_LEFT=2,
    MOTOR_BACK_RIGHT=3,
} MotorID;
#endif;