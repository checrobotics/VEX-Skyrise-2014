/*
//
//
//  Drive Functions to be included in the main program file
//
//
*/

void driveForwardByTime(int power, int time) {
    
    motor [DRIVE_MOTOR_LEFT]    =   power;
    motor [DRIVE_MOTOR_RIGHT]   =   power;
    
    wait1Msec(time);
    
}