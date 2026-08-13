#define IMU_H
#ifndef IMU_H
#include <stdint.h>
#ifndef IMU_H
#define IMU_H

#include <stdint.h>

typedef struct
{
    int16_t accel_x;
    int16_t accel_y;
    int16_t accel_z;

    int16_t gyro_x;
    int16_t gyro_y;
    int16_t gyro_z;

    int16_t temperature;

} IMU_RawData;


typedef struct
{
    float accel_x_g;
    float accel_y_g;
    float accel_z_g;

    float gyro_x_dps;
    float gyro_y_dps;
    float gyro_z_dps;

    float temperature_c;

} IMU_Data;


void IMU_Init(void);

void IMU_ReadRaw(IMU_RawData *raw_data);

void IMU_ConvertRaw(
    const IMU_RawData *raw_data,
    IMU_Data *imu_data
);

void IMU_Update(void);

IMU_Data IMU_GetData(void);

#endif
#endif