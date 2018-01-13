#ifndef RR3D_CONFIG_H
#define RR3D_CONFIG_H
/* **************************************************************** */
/* **************************************************************** */
// һ�㲻��Ҫ�Ķ���
/* **************************************************************** */
/* **************************************************************** */

// ����ͨѶ����
#ifdef MY_ENABLE_BLUETOOTH
	#define MY_BAUDRATE 9600
#else
	#define MY_BAUDRATE 115200 //250000
#endif

#ifdef MY_ENABLE_BLUETOOTH
// This enables the serial port associated to the Bluetooth interface
#define BTENABLED              // Enable BT interface on AT90USB devices
#endif

// xyz�����������ã����ø���
#define MY_XYZ_PULLEY_TEETH 16

#ifdef MY_ENABLE_Bowenextruder
#define MY_DEFAULT_AXIS_STEPS_PER_UNIT_E  595//150.5*4//157
#else
#define MY_DEFAULT_AXIS_STEPS_PER_UNIT_E  150.5//157
#endif

#define MY_DEFAULT_MAX_FEEDRATE          {999, 999, 999, 999}    // (mm/sec)
#endif
