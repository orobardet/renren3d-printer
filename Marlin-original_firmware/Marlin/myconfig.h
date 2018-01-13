#ifndef MYCONFIG_H
#define MYCONFIG_H

/* **************************************************************** */
/* **************************************************************** */
// 需要修改的参数都在这个文件中，请视情况修改
/* **************************************************************** */
/* **************************************************************** */

// Define this to set a custom name for your generic Mendel,
// 可以命名打印机的名字，不支持中文，字符长度不宜超过十二个
#define MY_CUSTOM_MENDEL_NAME "FlashX"


// [1]Center-to-center distance of the holes in the diagonal push rods.
// [1]碳杆长度，从一端球中心到另一端球中心的距离，参考值：235。
#define MY_DELTA_DIAGONAL_ROD 245 //235

// [2]Horizontal offset from middle of printer to smooth rod center.
// [2]打印头到滑杆水平距离，参考值：173.4
#define MY_DELTA_SMOOTH_ROD_OFFSET 173.4 // 1st set: 170.96 //173.4

// [3]Horizontal offset of the universal joints on the end effector.
// [3]效应器球中心和打印头的水平距离，参考距离24
#define MY_DELTA_EFFECTOR_OFFSET 22.86

// [4]Horizontal offset of the universal joints on the carriages.
// [4]滑车球中心到滑杆水平距离，24
#define MY_DELTA_CARRIAGE_OFFSET 23

// Print surface diameter/2 minus unreachable space (avoid collisions with vertical towers).
// 打印半径默认80mm,可以逐步改到85mm
#define MY_DELTA_PRINTABLE_RADIUS 110

// these are the offsets to the probe relative to the extruder tip (Hotend - Probe)//Ztanzheng
// 探针xyz的偏移
#define MY_X_PROBE_OFFSET_FROM_EXTRUDER 10 //-1//0
#define MY_Y_PROBE_OFFSET_FROM_EXTRUDER -10 //16//14.0
#define MY_Z_PROBE_OFFSET_FROM_EXTRUDER -7 //-4.5 //-2.6

//探针回收坐标
//z probe retract position
#define MY_X_retract_z_probe_Position -64 //-67.6
#define MY_Y_retract_z_probe_Position 71 //71.7
#define MY_Z_retract_z_probe_Position 28 //33

// For deltabots this means top and center of the Cartesian print volume.
// xyz轴Home位置
#define MY_MANUAL_X_HOME_POS 0
#define MY_MANUAL_Y_HOME_POS 0
// For delta: Distance between nozzle and print surface after homing.
// Glass
#define MY_MANUAL_Z_HOME_POS 267.65 // 267.4 //179.5//180.3
// Alu+buildtak
#define MY_MANUAL_Z_HOME_POS 267.6 // 267.55

// 回Home的速度控制，速度单位:毫米/秒
// 这个参数建议改改，原来的数值是200，你装好一按HOME，滑车就会高速撞到顶部（或底部，步进装反了），改小点滑车的速度就慢点安全点
#define MY_HOMING_FEEDRATE_SPEED 40 // set the homing speeds (mm/second)

//开启热床
//enable hotbed
#define MY_ENABLE_HOTBED

//开启蓝牙
//enable bluetooth
//#define MY_ENABLE_BLUETOOTH

//开启减速器的挤出机
//enable Bowenextruder
//#define MY_ENABLE_Bowenextruder
#endif //__MYCONFIG_H


