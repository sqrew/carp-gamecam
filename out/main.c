#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <carp_stdbool.h>
#include <core.h>
#include <carp_memory.h>
#include <carp_bool.h>
#include <carp_byte.h>
#include <carp_int.h>
#include <carp_long.h>
#include <carp_double.h>
#include <carp_float.h>
#include <carp_stdint.h>
#include <carp_char.h>
#include <carp_string.h>
#include <carp_system.h>
#include <errno.h>
#include <carp_io.h>
#include <carp_pattern.h>
#include <carp_debug.h>
#include <carp_binary.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>



//Types:

// Depth 3
typedef struct {
    union {
    struct {
        Long member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__Long;
#define Maybe__Long_Just_tag 0
#define Maybe__Long_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        String member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__String;
#define Maybe__String_Just_tag 0
#define Maybe__String_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        double member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__double;
#define Maybe__double_Just_tag 0
#define Maybe__double_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        float member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__float;
#define Maybe__float_Just_tag 0
#define Maybe__float_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        int member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__int;
#define Maybe__int_Just_tag 0
#define Maybe__int_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        uint8_t member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__uint8_t;
#define Maybe__uint8_t_Just_tag 0
#define Maybe__uint8_t_Nothing_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        Char member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Char_String;
#define Result__Char_String_Success_tag 0
#define Result__Char_String_Error_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        String member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__String_String;
#define Result__String_String_Success_tag 0
#define Result__String_String_Error_tag 1

// Depth 3
typedef struct {
    union {
    struct {
        bool member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__bool_String;
#define Result__bool_String_Success_tag 0
#define Result__bool_String_Error_tag 1

// Depth 3
typedef struct {
    double x;
    double y;
    double z;
} Vec3;

// Depth 3
typedef struct {
    int passed;
    int failed;
} TestState;

// Depth 4
typedef Array Array__Array__uint8_t;

// Depth 4
typedef Array Array__Bucket__ColorId_String;

// Depth 4
typedef Array Array__Char;

// Depth 4
typedef Array Array__Pair__ColorId_String;

// Depth 4
typedef Array Array__PatternMatchResult;

// Depth 4
typedef Array Array__Result__Uint16_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint32_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint64_Array__uint8_t;

// Depth 4
typedef Array Array__String;

// Depth 4
typedef Array Array__Uint16;

// Depth 4
typedef Array Array__Uint32;

// Depth 4
typedef Array Array__Uint64;

// Depth 4
typedef Array Array__float;

// Depth 4
typedef Array Array__int;

// Depth 4
typedef Array Array__uint8_t;

// Depth 4
typedef bool(*Fn__Char_Char_bool)(Char, Char);

// Depth 4
typedef Char(*Fn__Char_MUL__Char)(Char*);

// Depth 4
typedef bool(*Fn__Char_bool)(Char);

// Depth 4
typedef int(*Fn__Char_int)(Char);

// Depth 4
typedef Long(*Fn__Long_Long_Long)(Long, Long);

// Depth 4
typedef bool(*Fn__Long_Long_bool)(Long, Long);

// Depth 4
typedef Long(*Fn__Long_MUL__Long)(Long*);

// Depth 4
typedef String(*Fn__Long_String)(Long);

// Depth 4
typedef bool(*Fn__Long_bool)(Long);

// Depth 4
typedef double(*Fn__Long_double)(Long);

// Depth 4
typedef int(*Fn__Long_int)(Long);

// Depth 4
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 4
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 4
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 4
typedef int(*Fn__String_MUL__Char_int)(String*, Char);

// Depth 4
typedef bool(*Fn__String_MUL__Long_MUL__bool)(String*, Long*);

// Depth 4
typedef String(*Fn__String_MUL__Long_String)(String*, Long);

// Depth 4
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String_MUL__String)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 4
typedef int(*Fn__String_MUL__String_MUL__int)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__bool)(String*);

// Depth 4
typedef String(*Fn__String_MUL__bool_String)(String*, bool);

// Depth 4
typedef bool(*Fn__String_MUL__double_MUL__bool)(String*, double*);

// Depth 4
typedef String(*Fn__String_MUL__double_String)(String*, double);

// Depth 4
typedef bool(*Fn__String_MUL__float_MUL__bool)(String*, float*);

// Depth 4
typedef String(*Fn__String_MUL__float_String)(String*, float);

// Depth 4
typedef int(*Fn__String_MUL__int)(String*);

// Depth 4
typedef Char(*Fn__String_MUL__int_Char)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_Char_void)(String*, int, Char);

// Depth 4
typedef String(*Fn__String_MUL__int_MUL__String)(String*, int*);

// Depth 4
typedef bool(*Fn__String_MUL__int_MUL__bool)(String*, int*);

// Depth 4
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_String_MUL__void)(String*, int, String*);

// Depth 4
typedef String(*Fn__String_MUL__int_int_String)(String*, int, int);

// Depth 4
typedef bool(*Fn__String_MUL__uint8_t_MUL__bool)(String*, uint8_t*);

// Depth 4
typedef String(*Fn__String_MUL__uint8_t_String)(String*, uint8_t);

// Depth 4
typedef void(*Fn__String_MUL__void)(String*);

// Depth 4
typedef String(*Fn__String_String)(String);

// Depth 4
typedef Char(*Fn___Char)();

// Depth 4
typedef String(*Fn___String)();

// Depth 4
typedef double(*Fn___double)();

// Depth 4
typedef int(*Fn___int)();

// Depth 4
typedef void(*Fn___void)();

// Depth 4
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 4
typedef String(*Fn__bool_String)(bool);

// Depth 4
typedef bool(*Fn__bool_bool)(bool);

// Depth 4
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 4
typedef Long(*Fn__double_Long)(double);

// Depth 4
typedef double(*Fn__double_MUL__double)(double*);

// Depth 4
typedef String(*Fn__double_String)(double);

// Depth 4
typedef double(*Fn__double_double)(double);

// Depth 4
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 4
typedef double(*Fn__double_double_double)(double, double);

// Depth 4
typedef double(*Fn__double_double_double_double)(double, double, double);

// Depth 4
typedef float(*Fn__double_float)(double);

// Depth 4
typedef int(*Fn__double_int)(double);

// Depth 4
typedef float(*Fn__float_MUL__float)(float*);

// Depth 4
typedef String(*Fn__float_String)(float);

// Depth 4
typedef double(*Fn__float_double)(float);

// Depth 4
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 4
typedef float(*Fn__float_float_float)(float, float);

// Depth 4
typedef int(*Fn__float_int)(float);

// Depth 4
typedef Char(*Fn__int_Char)(int);

// Depth 4
typedef String(*Fn__int_Char_String)(int, Char);

// Depth 4
typedef Long(*Fn__int_Long)(int);

// Depth 4
typedef int(*Fn__int_MUL__int)(int*);

// Depth 4
typedef int*(*Fn__int_MUL__int_MUL_)(int*);

// Depth 4
typedef String(*Fn__int_String)(int);

// Depth 4
typedef bool(*Fn__int_bool)(int);

// Depth 4
typedef double(*Fn__int_double)(int);

// Depth 4
typedef float(*Fn__int_float)(int);

// Depth 4
typedef int(*Fn__int_int)(int);

// Depth 4
typedef int(*Fn__int_int_MUL__int)(int, int*);

// Depth 4
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 4
typedef int(*Fn__int_int_int)(int, int);

// Depth 4
typedef uint8_t(*Fn__int_uint8_t)(int);

// Depth 4
typedef void(*Fn__int_void)(int);

// Depth 4
typedef String(*Fn__uint8_t_MUL__String)(uint8_t*);

// Depth 4
typedef uint8_t(*Fn__uint8_t_MUL__uint8_t)(uint8_t*);

// Depth 4
typedef String(*Fn__uint8_t_String)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_bool)(uint8_t);

// Depth 4
typedef int(*Fn__uint8_t_int)(uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_uint8_t_bool)(uint8_t, uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t_uint8_t)(uint8_t, uint8_t);

// Depth 5
typedef struct {
    Vec3 pos;
    Vec3 front;
    Vec3 right;
    Vec3 up;
    Vec3 world_MINUS_up;
    double yaw;
    double pitch;
    double fov;
    double aspect;
    double near;
    double far;
} Camera;

// Depth 5
typedef int(*Fn__Fn___void_int)(Lambda);

// Depth 5
typedef void(*Fn__int_Fn__int_void_void)(int, Lambda);

// Depth 6
typedef Result__Char_String(*Fn__Char_Result__Char_String)(Char);

// Depth 6
typedef Maybe__Long(*Fn__Long_Maybe__Long)(Long);

// Depth 6
typedef String(*Fn__Maybe__String_String)(Maybe__String);

// Depth 6
typedef String(*Fn__Maybe__String_String_String)(Maybe__String, String);

// Depth 6
typedef Maybe__String(*Fn__String_Maybe__String)(String);

// Depth 6
typedef Result__Char_String(*Fn__String_Result__Char_String)(String);

// Depth 6
typedef Result__String_String(*Fn__String_Result__String_String)(String);

// Depth 6
typedef Result__bool_String(*Fn__String_Result__bool_String)(String);

// Depth 6
typedef String(*Fn__Vec3_MUL__String)(Vec3*);

// Depth 6
typedef Vec3(*Fn__Vec3_MUL__Vec3)(Vec3*);

// Depth 6
typedef Vec3(*Fn__Vec3_MUL__Vec3_MUL__Vec3)(Vec3*, Vec3*);

// Depth 6
typedef double(*Fn__Vec3_MUL__Vec3_MUL__double)(Vec3*, Vec3*);

// Depth 6
typedef double(*Fn__Vec3_MUL__double)(Vec3*);

// Depth 6
typedef double*(*Fn__Vec3_MUL__double_MUL_)(Vec3*);

// Depth 6
typedef Vec3(*Fn__Vec3_MUL__double_Vec3)(Vec3*, double);

// Depth 6
typedef Vec3(*Fn__Vec3_Vec3)(Vec3);

// Depth 6
typedef Maybe__Long(*Fn___Maybe__Long)();

// Depth 6
typedef Maybe__String(*Fn___Maybe__String)();

// Depth 6
typedef Maybe__double(*Fn___Maybe__double)();

// Depth 6
typedef Maybe__float(*Fn___Maybe__float)();

// Depth 6
typedef Maybe__int(*Fn___Maybe__int)();

// Depth 6
typedef Maybe__uint8_t(*Fn___Maybe__uint8_t)();

// Depth 6
typedef Vec3(*Fn___Vec3)();

// Depth 6
typedef Result__bool_String(*Fn__bool_Result__bool_String)(bool);

// Depth 6
typedef Maybe__double(*Fn__double_Maybe__double)(double);

// Depth 6
typedef Vec3(*Fn__double_double_double_Vec3)(double, double, double);

// Depth 6
typedef Maybe__float(*Fn__float_Maybe__float)(float);

// Depth 6
typedef Maybe__int(*Fn__int_Maybe__int)(int);

// Depth 6
typedef Maybe__uint8_t(*Fn__uint8_t_Maybe__uint8_t)(uint8_t);

// Depth 6
typedef struct {
    Array__float data;
} Mat4;

// Depth 7
typedef Array__Char(*Fn__Array__Char_Array__Char)(Array__Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_Char_Array__Char)(Array__Char, Char);

// Depth 7
typedef Pattern(*Fn__Array__Char_MUL__Pattern)(Array__Char*);

// Depth 7
typedef String(*Fn__Array__Char_MUL__String)(Array__Char*);

// Depth 7
typedef int(*Fn__Array__Char_MUL__int)(Array__Char*);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_Array__Char)(Array__Char*, int);

// Depth 7
typedef Char*(*Fn__Array__Char_MUL__int_Char_MUL_)(Array__Char*, int);

// Depth 7
typedef void(*Fn__Array__Char_MUL__int_Char_void)(Array__Char*, int, Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_int_Array__Char)(Array__Char*, int, int);

// Depth 7
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 7
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 7
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 7
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 7
typedef Array__float(*Fn__Array__float_Array__float)(Array__float);

// Depth 7
typedef String(*Fn__Array__float_MUL__String)(Array__float*);

// Depth 7
typedef int(*Fn__Array__float_MUL__int)(Array__float*);

// Depth 7
typedef float*(*Fn__Array__float_MUL__int_float_MUL_)(Array__float*, int);

// Depth 7
typedef void(*Fn__Array__float_MUL__int_float_void)(Array__float*, int, float);

// Depth 7
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 7
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 7
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__Array__uint8_t)(Array__uint8_t*);

// Depth 7
typedef String(*Fn__Array__uint8_t_MUL__String)(Array__uint8_t*);

// Depth 7
typedef int(*Fn__Array__uint8_t_MUL__int)(Array__uint8_t*);

// Depth 7
typedef Maybe__uint8_t(*Fn__Array__uint8_t_MUL__int_Maybe__uint8_t)(Array__uint8_t*, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__int_int_Array__uint8_t)(Array__uint8_t*, int, int);

// Depth 7
typedef uint8_t*(*Fn__Array__uint8_t_MUL__int_uint8_t_MUL_)(Array__uint8_t*, int);

// Depth 7
typedef void(*Fn__Array__uint8_t_MUL__int_uint8_t_void)(Array__uint8_t*, int, uint8_t);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_uint8_t_Array__uint8_t)(Array__uint8_t, uint8_t);

// Depth 7
typedef Array__String(*Fn__Fn__String_MUL__bool_MUL__Array__String_Array__String)(Lambda*, Array__String);

// Depth 7
typedef int(*Fn__Fn__int_int_MUL__int_MUL__int_Array__int_MUL__int)(Lambda*, int, Array__int*);

// Depth 7
typedef Array__String(*Fn__Fn__uint8_t_MUL__String_MUL__Array__uint8_t_MUL__Array__String)(Lambda*, Array__uint8_t*);

// Depth 7
typedef Array__uint8_t(*Fn__Fn__uint8_t_uint8_t_MUL__Array__uint8_t_Array__uint8_t)(Lambda*, Array__uint8_t);

// Depth 7
typedef Array__String(*Fn__Pattern_MUL__String_MUL__Array__String)(Pattern*, String*);

// Depth 7
typedef Array__int(*Fn__Pattern_MUL__String_MUL__Array__int)(Pattern*, String*);

// Depth 7
typedef Array__Char(*Fn__String_MUL__Array__Char)(String*);

// Depth 7
typedef Array__String(*Fn__String_MUL__Array__Char_MUL__Array__String)(String*, Array__Char*);

// Depth 7
typedef String(*Fn__String_MUL__Array__String_MUL__String)(String*, Array__String*);

// Depth 7
typedef Array__uint8_t(*Fn__String_MUL__Array__uint8_t)(String*);

// Depth 7
typedef Array__uint8_t(*Fn___Array__uint8_t)();

// Depth 7
typedef Array__Char(*Fn__int_Array__Char)(int);

// Depth 7
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 7
typedef Array__float(*Fn__int_Array__float)(int);

// Depth 7
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 7
typedef Array__uint8_t(*Fn__int_Array__uint8_t)(int);

// Depth 7
typedef Array__Char(*Fn__int_Char_MUL__Array__Char)(int, Char*);

// Depth 7
typedef Array__Char(*Fn__int_Fn___Char_MUL__Array__Char)(int, Lambda*);

// Depth 7
typedef Array__float(*Fn__int_float_MUL__Array__float)(int, float*);

// Depth 8
typedef String(*Fn__Camera_MUL__String)(Camera*);

// Depth 8
typedef Vec3*(*Fn__Camera_MUL__Vec3_MUL_)(Camera*);

// Depth 8
typedef void(*Fn__Camera_MUL__Vec3_void)(Camera*, Vec3);

// Depth 8
typedef double*(*Fn__Camera_MUL__double_MUL_)(Camera*);

// Depth 8
typedef void(*Fn__Camera_MUL__double_void)(Camera*, double);

// Depth 8
typedef void(*Fn__Camera_MUL__void)(Camera*);

// Depth 8
typedef Camera(*Fn__Vec3_Vec3_Vec3_Vec3_Vec3_double_double_double_double_double_double_Camera)(Vec3, Vec3, Vec3, Vec3, Vec3, double, double, double, double, double, double);

// Depth 8
typedef Camera(*Fn__Vec3_double_double_double_Camera)(Vec3, double, double, double);

// Depth 9
typedef Mat4(*Fn__Array__float_Mat4)(Array__float);

// Depth 9
typedef Mat4(*Fn__Camera_MUL__Mat4)(Camera*);

// Depth 9
typedef Array__float*(*Fn__Mat4_MUL__Array__float_MUL_)(Mat4*);

// Depth 9
typedef String(*Fn__Mat4_MUL__String)(Mat4*);

// Depth 9
typedef Mat4(*Fn___Mat4)();

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__Array__uint8_t_Array__uint8_t_Array__Array__uint8_t)(Array__Array__uint8_t, Array__uint8_t);

// Depth 10
typedef int(*Fn__Array__Array__uint8_t_MUL__int)(Array__Array__uint8_t*);

// Depth 10
typedef Array__uint8_t*(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_MUL_)(Array__Array__uint8_t*, int);

// Depth 10
typedef void(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_void)(Array__Array__uint8_t*, int, Array__uint8_t);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__uint8_t_MUL__int_Array__Array__uint8_t)(Array__uint8_t*, int);

// Depth 10
typedef Array__int(*Fn__Fn__Array__uint8_t_MUL__int_MUL__Array__Array__uint8_t_MUL__Array__int)(Lambda*, Array__Array__uint8_t*);

// Depth 10
typedef Array__Array__uint8_t(*Fn__int_Array__Array__uint8_t)(int);

// Depth 101
typedef struct {
    union {
    // LittleEndian
    // BigEndian
    char __dummy;
    } u;
    char _tag;
} ByteOrder;
#define ByteOrder_LittleEndian_tag 0
#define ByteOrder_BigEndian_tag 1

// Depth 101
typedef struct {
    union {
    char __dummy;
    } u;
    char _tag;
} Opaque;

// Depth 101
typedef struct {
    union {
    // Black
    // Red
    // Green
    // Yellow
    // Blue
    // Magenta
    // Cyan
    // White
    // Reset
    // None
    // Bold
    // Italic
    // Underline
    // BlinkSlow
    // BlinkRapid
    // BgBlack
    // BgRed
    // BgGreen
    // BgYellow
    // BgBlue
    // BgMagenta
    // BgCyan
    // BgWhite
    char __dummy;
    } u;
    char _tag;
} ColorId;
#define ColorId_Black_tag 0
#define ColorId_Red_tag 1
#define ColorId_Green_tag 2
#define ColorId_Yellow_tag 3
#define ColorId_Blue_tag 4
#define ColorId_Magenta_tag 5
#define ColorId_Cyan_tag 6
#define ColorId_White_tag 7
#define ColorId_Reset_tag 8
#define ColorId_None_tag 9
#define ColorId_Bold_tag 10
#define ColorId_Italic_tag 11
#define ColorId_Underline_tag 12
#define ColorId_BlinkSlow_tag 13
#define ColorId_BlinkRapid_tag 14
#define ColorId_BgBlack_tag 15
#define ColorId_BgRed_tag 16
#define ColorId_BgGreen_tag 17
#define ColorId_BgYellow_tag 18
#define ColorId_BgBlue_tag 19
#define ColorId_BgMagenta_tag 20
#define ColorId_BgCyan_tag 21
#define ColorId_BgWhite_tag 22

// Depth 103
typedef struct {
    union {
    struct {
        Uint16 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__Uint16;
#define Maybe__Uint16_Just_tag 0
#define Maybe__Uint16_Nothing_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        Uint32 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__Uint32;
#define Maybe__Uint32_Just_tag 0
#define Maybe__Uint32_Nothing_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        Uint64 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
} Maybe__Uint64;
#define Maybe__Uint64_Just_tag 0
#define Maybe__Uint64_Nothing_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        FILE* member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__FILE_MUL__String;
#define Result__FILE_MUL__String_Success_tag 0
#define Result__FILE_MUL__String_Error_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        Uint16 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Uint16_Array__uint8_t;
#define Result__Uint16_Array__uint8_t_Success_tag 0
#define Result__Uint16_Array__uint8_t_Error_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        Uint32 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Uint32_Array__uint8_t;
#define Result__Uint32_Array__uint8_t_Success_tag 0
#define Result__Uint32_Array__uint8_t_Error_tag 1

// Depth 103
typedef struct {
    union {
    struct {
        Uint64 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Uint64_Array__uint8_t;
#define Result__Uint64_Array__uint8_t_Success_tag 0
#define Result__Uint64_Array__uint8_t_Error_tag 1

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty;

// Depth 103
typedef struct {
    Uint32 i;
} Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty;

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty;

// Depth 103
typedef struct {
    Uint64 i;
} Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty;

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty;

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty;

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty;

// Depth 103
typedef struct {
    ByteOrder order;
} Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty;

// Depth 104
typedef Uint16(*Fn__Array__uint8_t_MUL__Uint16)(Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__Array__uint8_t_MUL__Uint32)(Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__Array__uint8_t_MUL__Uint64)(Array__uint8_t*);

// Depth 104
typedef Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef String(*Fn__ByteOrder_MUL__String)(ByteOrder*);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint16_Array__uint8_t)(ByteOrder, Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint32_Array__uint8_t)(ByteOrder, Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint64_Array__uint8_t)(ByteOrder, Uint64);

// Depth 104
typedef bool(*Fn__FILE_MUL__FILE_MUL__bool)(FILE*, FILE*);

// Depth 104
typedef bool(*Fn__FILE_MUL__bool)(FILE*);

// Depth 104
typedef int(*Fn__FILE_MUL__int)(FILE*);

// Depth 104
typedef void(*Fn__FILE_MUL__int_int_void)(FILE*, int, int);

// Depth 104
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 104
typedef bool(*Fn__Int16_Int16_bool)(Int16, Int16);

// Depth 104
typedef Long(*Fn__Int16_Long)(Int16);

// Depth 104
typedef Int16(*Fn__Int16_MUL__Int16)(Int16*);

// Depth 104
typedef String(*Fn__Int16_String)(Int16);

// Depth 104
typedef bool(*Fn__Int32_Int32_bool)(Int32, Int32);

// Depth 104
typedef Long(*Fn__Int32_Long)(Int32);

// Depth 104
typedef Int32(*Fn__Int32_MUL__Int32)(Int32*);

// Depth 104
typedef String(*Fn__Int32_String)(Int32);

// Depth 104
typedef bool(*Fn__Int64_Int64_bool)(Int64, Int64);

// Depth 104
typedef Long(*Fn__Int64_Long)(Int64);

// Depth 104
typedef Int64(*Fn__Int64_MUL__Int64)(Int64*);

// Depth 104
typedef String(*Fn__Int64_String)(Int64);

// Depth 104
typedef bool(*Fn__Int8_Int8_bool)(Int8, Int8);

// Depth 104
typedef Long(*Fn__Int8_Long)(Int8);

// Depth 104
typedef Int8(*Fn__Int8_MUL__Int8)(Int8*);

// Depth 104
typedef String(*Fn__Int8_String)(Int8);

// Depth 104
typedef Int16(*Fn__Long_Int16)(Long);

// Depth 104
typedef Int32(*Fn__Long_Int32)(Long);

// Depth 104
typedef Int64(*Fn__Long_Int64)(Long);

// Depth 104
typedef Int8(*Fn__Long_Int8)(Long);

// Depth 104
typedef Uint16(*Fn__Long_Uint16)(Long);

// Depth 104
typedef Uint32(*Fn__Long_Uint32)(Long);

// Depth 104
typedef Uint64(*Fn__Long_Uint64)(Long);

// Depth 104
typedef Uint8(*Fn__Long_Uint8)(Long);

// Depth 104
typedef String(*Fn__Opaque_MUL__String)(Opaque*);

// Depth 104
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 104
typedef int(*Fn__String_MUL__int_int_FILE_MUL__int)(String*, int, int, FILE*);

// Depth 104
typedef Long(*Fn__Uint16_Long)(Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__Uint16_MUL__Array__uint8_t)(Uint16*);

// Depth 104
typedef Uint16(*Fn__Uint16_MUL__Uint16)(Uint16*);

// Depth 104
typedef uint8_t(*Fn__Uint16_MUL__uint8_t)(Uint16*);

// Depth 104
typedef String(*Fn__Uint16_String)(Uint16);

// Depth 104
typedef Uint16(*Fn__Uint16_Uint16_Uint16)(Uint16, Uint16);

// Depth 104
typedef bool(*Fn__Uint16_Uint16_bool)(Uint16, Uint16);

// Depth 104
typedef Long(*Fn__Uint32_Long)(Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__Uint32_MUL__Array__uint8_t)(Uint32*);

// Depth 104
typedef Uint32(*Fn__Uint32_MUL__Uint32)(Uint32*);

// Depth 104
typedef uint8_t(*Fn__Uint32_MUL__uint8_t)(Uint32*);

// Depth 104
typedef String(*Fn__Uint32_String)(Uint32);

// Depth 104
typedef Uint32(*Fn__Uint32_Uint32_Uint32)(Uint32, Uint32);

// Depth 104
typedef bool(*Fn__Uint32_Uint32_bool)(Uint32, Uint32);

// Depth 104
typedef Long(*Fn__Uint64_Long)(Uint64);

// Depth 104
typedef Array__uint8_t(*Fn__Uint64_MUL__Array__uint8_t)(Uint64*);

// Depth 104
typedef Uint64(*Fn__Uint64_MUL__Uint64)(Uint64*);

// Depth 104
typedef uint8_t(*Fn__Uint64_MUL__uint8_t)(Uint64*);

// Depth 104
typedef String(*Fn__Uint64_String)(Uint64);

// Depth 104
typedef Uint64(*Fn__Uint64_Uint64_Uint64)(Uint64, Uint64);

// Depth 104
typedef bool(*Fn__Uint64_Uint64_bool)(Uint64, Uint64);

// Depth 104
typedef double(*Fn__Uint64_double)(Uint64);

// Depth 104
typedef Long(*Fn__Uint8_Long)(Uint8);

// Depth 104
typedef Uint8(*Fn__Uint8_MUL__Uint8)(Uint8*);

// Depth 104
typedef String(*Fn__Uint8_String)(Uint8);

// Depth 104
typedef bool(*Fn__Uint8_Uint8_bool)(Uint8, Uint8);

// Depth 104
typedef ByteOrder(*Fn___ByteOrder)();

// Depth 104
typedef Uint16(*Fn___Uint16)();

// Depth 104
typedef Uint32(*Fn___Uint32)();

// Depth 104
typedef Uint64(*Fn___Uint64)();

// Depth 104
typedef Uint16(*Fn__uint8_t_uint8_t_Uint16)(uint8_t, uint8_t);

// Depth 104
typedef Uint32(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_Uint32)(uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 104
typedef Uint64(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_Uint64)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 106
typedef struct {
    union {
    struct {
        Array__Uint16 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Array__Uint16_int;
#define Result__Array__Uint16_int_Success_tag 0
#define Result__Array__Uint16_int_Error_tag 1

// Depth 106
typedef struct {
    union {
    struct {
        Array__Uint32 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Array__Uint32_int;
#define Result__Array__Uint32_int_Success_tag 0
#define Result__Array__Uint32_int_Error_tag 1

// Depth 106
typedef struct {
    union {
    struct {
        Array__Uint64 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
} Result__Array__Uint64_int;
#define Result__Array__Uint64_int_Success_tag 0
#define Result__Array__Uint64_int_Error_tag 1

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint16_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint32_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint64_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Maybe__Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__FILE_MUL__Result__FILE_MUL__String)(FILE*);

// Depth 106
typedef FILE*(*Fn__Result__FILE_MUL__String_FILE_MUL_)(Result__FILE_MUL__String);

// Depth 106
typedef bool(*Fn__Result__FILE_MUL__String_MUL__bool)(Result__FILE_MUL__String*);

// Depth 106
typedef String(*Fn__Result__FILE_MUL__String_String)(Result__FILE_MUL__String);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint16_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_MUL__Uint16)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint16_Array__uint8_t_MUL__bool)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_Uint16)(Result__Uint16_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint32_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_MUL__Uint32)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint32_Array__uint8_t_MUL__bool)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_Uint32)(Result__Uint32_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint64_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_MUL__Uint64)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint64_Array__uint8_t_MUL__bool)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_Uint64)(Result__Uint64_Array__uint8_t);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_MUL__String_MUL__Result__FILE_MUL__String)(String*, String*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_Result__FILE_MUL__String)(String);

// Depth 106
typedef Maybe__Uint16(*Fn__Uint16_Maybe__Uint16)(Uint16);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Uint16_Result__Uint16_Array__uint8_t)(Uint16);

// Depth 106
typedef Maybe__Uint32(*Fn__Uint32_Maybe__Uint32)(Uint32);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Uint32_Result__Uint32_Array__uint8_t)(Uint32);

// Depth 106
typedef Maybe__Uint64(*Fn__Uint64_Maybe__Uint64)(Uint64);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Uint64_Result__Uint64_Array__uint8_t)(Uint64);

// Depth 106
typedef Maybe__Uint16(*Fn___Maybe__Uint16)();

// Depth 106
typedef Maybe__Uint32(*Fn___Maybe__Uint32)();

// Depth 106
typedef Maybe__Uint64(*Fn___Maybe__Uint64)();

// Depth 106
typedef struct {
    Array__Uint16 a;
    int b;
} Pair__Array__Uint16_int;

// Depth 106
typedef struct {
    Array__Uint32 a;
    int b;
} Pair__Array__Uint32_int;

// Depth 106
typedef struct {
    Array__Uint64 a;
    int b;
} Pair__Array__Uint64_int;

// Depth 107
typedef Array__Uint16(*Fn__Array__Uint16_MUL__Array__Uint16)(Array__Uint16*);

// Depth 107
typedef int(*Fn__Array__Uint16_MUL__int)(Array__Uint16*);

// Depth 107
typedef Uint16*(*Fn__Array__Uint16_MUL__int_Uint16_MUL_)(Array__Uint16*, int);

// Depth 107
typedef void(*Fn__Array__Uint16_MUL__int_Uint16_void)(Array__Uint16*, int, Uint16);

// Depth 107
typedef Array__Uint32(*Fn__Array__Uint32_MUL__Array__Uint32)(Array__Uint32*);

// Depth 107
typedef int(*Fn__Array__Uint32_MUL__int)(Array__Uint32*);

// Depth 107
typedef Uint32*(*Fn__Array__Uint32_MUL__int_Uint32_MUL_)(Array__Uint32*, int);

// Depth 107
typedef void(*Fn__Array__Uint32_MUL__int_Uint32_void)(Array__Uint32*, int, Uint32);

// Depth 107
typedef Array__Uint64(*Fn__Array__Uint64_MUL__Array__Uint64)(Array__Uint64*);

// Depth 107
typedef int(*Fn__Array__Uint64_MUL__int)(Array__Uint64*);

// Depth 107
typedef Uint64*(*Fn__Array__Uint64_MUL__int_Uint64_MUL_)(Array__Uint64*, int);

// Depth 107
typedef void(*Fn__Array__Uint64_MUL__int_Uint64_void)(Array__Uint64*, int, Uint64);

// Depth 107
typedef Array__Uint16(*Fn__Fn__Array__uint8_t_MUL__Uint16_MUL__Array__Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint32(*Fn__Fn__Array__uint8_t_MUL__Uint32_MUL__Array__Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint64(*Fn__Fn__Array__uint8_t_MUL__Uint64_MUL__Array__Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint16_MUL__Array__uint8_t_MUL__Array__Uint16_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint16_MUL__uint8_t_MUL__Array__Uint16_MUL__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint32_MUL__Array__uint8_t_MUL__Array__Uint32_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint32_MUL__uint8_t_MUL__Array__Uint32_MUL__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint64_MUL__Array__uint8_t_MUL__Array__Uint64_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint64_MUL__uint8_t_MUL__Array__Uint64_MUL__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__Uint16(*Fn__int_Array__Uint16)(int);

// Depth 107
typedef Array__Uint32(*Fn__int_Array__Uint32)(int);

// Depth 107
typedef Array__Uint64(*Fn__int_Array__Uint64)(int);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Result__Uint16_Array__uint8_t*(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_MUL_)(Array__Result__Uint16_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_void)(Array__Result__Uint16_Array__uint8_t*, int, Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Result__Uint32_Array__uint8_t*(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_MUL_)(Array__Result__Uint32_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_void)(Array__Result__Uint32_Array__uint8_t*, int, Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Result__Uint64_Array__uint8_t*(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_MUL_)(Array__Result__Uint64_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_void)(Array__Result__Uint64_Array__uint8_t*, int, Result__Uint64_Array__uint8_t);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__Array__Uint16_Result__Array__Uint16_int)(Array__Uint16);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__Array__Uint16_int_Pair__Array__Uint16_int)(Array__Uint16, int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__Array__Uint32_Result__Array__Uint32_int)(Array__Uint32);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__Array__Uint32_int_Pair__Array__Uint32_int)(Array__Uint32, int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__Array__Uint64_Result__Array__Uint64_int)(Array__Uint64);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__Array__Uint64_int_Pair__Array__Uint64_int)(Array__Uint64, int);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint16_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint32_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint64_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Uint16_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Uint32_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Uint64_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint16*(*Fn__Pair__Array__Uint16_int_MUL__Array__Uint16_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint16_int_MUL__int_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef Array__Uint32*(*Fn__Pair__Array__Uint32_int_MUL__Array__Uint32_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint32_int_MUL__int_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef Array__Uint64*(*Fn__Pair__Array__Uint64_int_MUL__Array__Uint64_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint64_int_MUL__int_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__int_Array__Result__Uint16_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__int_Array__Result__Uint32_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__int_Array__Result__Uint64_Array__uint8_t)(int);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__int_Result__Array__Uint16_int)(int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__int_Result__Array__Uint32_int)(int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__int_Result__Array__Uint64_int)(int);

// Depth 504
typedef struct {
    Array__Pair__ColorId_String entries;
} Bucket__ColorId_String;

// Depth 504
typedef struct {
    String* val;
} Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty;

// Depth 504
typedef struct {
    int len;
    int n_MINUS_buckets;
    Array__Bucket__ColorId_String buckets;
} Map__ColorId_String;

// Depth 504
typedef struct {
    ColorId a;
    String b;
} Pair__ColorId_String;

// Depth 504
typedef struct {
    String* data;
} Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty;

// Depth 505
typedef struct {
    Lambda* f;
    ByteOrder order;
} Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty;

// Depth 505
typedef struct {
    Lambda* f;
    ByteOrder order;
} Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty;

// Depth 505
typedef struct {
    Lambda* f;
    ByteOrder order;
} Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty;

// Depth 505
typedef CChar*(*Fn__CChar_MUL__CChar_MUL_)(CChar*);

// Depth 505
typedef FILE*(*Fn__CChar_MUL__CChar_MUL__FILE_MUL_)(CChar*, CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__CChar_MUL__bool)(CChar*, CChar*);

// Depth 505
typedef String(*Fn__CChar_MUL__String)(CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__bool)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int_int_FILE_MUL__int)(CChar*, int, int, FILE*);

// Depth 505
typedef ColorId(*Fn__ColorId_MUL__ColorId)(ColorId*);

// Depth 505
typedef bool(*Fn__ColorId_MUL__ColorId_MUL__bool)(ColorId*, ColorId*);

// Depth 505
typedef String(*Fn__ColorId_MUL__String)(ColorId*);

// Depth 505
typedef int(*Fn__ColorId_MUL__int)(ColorId*);

// Depth 505
typedef String(*Fn__ColorId_String)(ColorId);

// Depth 505
typedef String(*Fn__ColorId_String_MUL__String)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_String_MUL__void)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_void)(ColorId);

// Depth 505
typedef Array__float(*Fn__LambdaEnv_Array__float_Array__float)(LambdaEnv, Array__float);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint16_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint32_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint64_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_String_MUL__bool)(LambdaEnv, String*);

// Depth 505
typedef Vec3(*Fn__LambdaEnv_Vec3_Vec3)(LambdaEnv, Vec3);

// Depth 505
typedef double(*Fn__LambdaEnv_double_double)(LambdaEnv, double);

// Depth 505
typedef int(*Fn__LambdaEnv_int_int)(LambdaEnv, int);

// Depth 505
typedef uint8_t(*Fn__LambdaEnv_uint8_t_uint8_t)(LambdaEnv, uint8_t);

// Depth 505
typedef String(*Fn__PatternMatchResult_MUL__String)(PatternMatchResult*);

// Depth 505
typedef Maybe__String(*Fn__PatternMatchResult_MUL__String_MUL__Maybe__String)(PatternMatchResult*, String*);

// Depth 505
typedef bool(*Fn__PatternMatchResult_MUL__bool)(PatternMatchResult*);

// Depth 505
typedef int(*Fn__PatternMatchResult_MUL__int)(PatternMatchResult*);

// Depth 505
typedef int*(*Fn__PatternMatchResult_MUL__int_MUL_)(PatternMatchResult*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__PatternMatchResult)(Pattern*, String*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__int_PatternMatchResult)(Pattern*, String*, int);

// Depth 505
typedef CChar*(*Fn__String_MUL__CChar_MUL_)(String*);

// Depth 505
typedef TestState(*Fn__TestState_Fn__int_int_MUL__TestState)(TestState, Lambda*);

// Depth 505
typedef String(*Fn__TestState_MUL__String)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__TestState)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__double_double_String_MUL__String_MUL__Fn__double_double_bool_TestState)(TestState*, double, double, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__double_double_String_MUL__String_MUL__bool_TestState)(TestState*, double, double, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__double_double_String_MUL__TestState)(TestState*, double, double, String*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__float_float_String_MUL__String_MUL__Fn__float_float_bool_TestState)(TestState*, float, float, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__float_float_String_MUL__String_MUL__bool_TestState)(TestState*, float, float, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__float_float_String_MUL__TestState)(TestState*, float, float, String*);

// Depth 505
typedef int*(*Fn__TestState_MUL__int_MUL_)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__String_MUL__Fn__int_int_bool_TestState)(TestState*, int, int, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__String_MUL__bool_TestState)(TestState*, int, int, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__TestState)(TestState*, int, int, String*);

// Depth 505
typedef void(*Fn__TestState_MUL__void)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_int_TestState)(TestState, int);

// Depth 505
typedef ColorId(*Fn___ColorId)();

// Depth 505
typedef CChar*(*Fn__int_CChar_MUL_)(int);

// Depth 505
typedef TestState(*Fn__int_int_TestState)(int, int);

// Depth 507
typedef String(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 507
typedef void(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 507
typedef int(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__int)(Bucket__ColorId_String*, ColorId*);

// Depth 507
typedef String(*Fn__Bucket__ColorId_String_MUL__int_String)(Bucket__ColorId_String*, int);

// Depth 507
typedef void(*Fn__Bucket__ColorId_String_MUL__int_String_MUL__void)(Bucket__ColorId_String*, int, String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_MUL__String_MUL__Pair__ColorId_String)(ColorId*, String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_String_Pair__ColorId_String)(ColorId, String);

// Depth 507
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String)(Map__ColorId_String*, ColorId*);

// Depth 507
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Map__ColorId_String*, ColorId*, String*);

// Depth 507
typedef void(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Map__ColorId_String*, ColorId*, String*);

// Depth 507
typedef int*(*Fn__Map__ColorId_String_MUL__int_MUL_)(Map__ColorId_String*);

// Depth 507
typedef void(*Fn__Map__ColorId_String_MUL__int_void)(Map__ColorId_String*, int);

// Depth 507
typedef ColorId*(*Fn__Pair__ColorId_String_MUL__ColorId_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef String*(*Fn__Pair__ColorId_String_MUL__String_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_Pair__ColorId_String)(Pair__ColorId_String);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_String_Pair__ColorId_String)(Pair__ColorId_String, String);

// Depth 507
typedef Bucket__ColorId_String(*Fn___Bucket__ColorId_String)();

// Depth 507
typedef Map__ColorId_String(*Fn___Map__ColorId_String)();

// Depth 508
typedef int(*Fn__Array__PatternMatchResult_MUL__int)(Array__PatternMatchResult*);

// Depth 508
typedef PatternMatchResult*(*Fn__Array__PatternMatchResult_MUL__int_PatternMatchResult_MUL_)(Array__PatternMatchResult*, int);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Array__PatternMatchResult_PatternMatchResult_Array__PatternMatchResult)(Array__PatternMatchResult, PatternMatchResult);

// Depth 508
typedef Array__String(*Fn__Fn__PatternMatchResult_MUL__String_MUL__Array__PatternMatchResult_MUL__Array__String)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__int(*Fn__Fn__PatternMatchResult_MUL__int_MUL__Array__PatternMatchResult_MUL__Array__int)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Pattern_MUL__String_MUL__Array__PatternMatchResult)(Pattern*, String*);

// Depth 510
typedef Bucket__ColorId_String*(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_MUL_)(Array__Bucket__ColorId_String*, int);

// Depth 510
typedef void(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_void)(Array__Bucket__ColorId_String*, int, Bucket__ColorId_String);

// Depth 510
typedef Bucket__ColorId_String(*Fn__Array__Pair__ColorId_String_Bucket__ColorId_String)(Array__Pair__ColorId_String);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__Pair__ColorId_String_void)(Array__Pair__ColorId_String*, Pair__ColorId_String);

// Depth 510
typedef int(*Fn__Array__Pair__ColorId_String_MUL__int)(Array__Pair__ColorId_String*);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Fn__Pair__ColorId_String_Pair__ColorId_String_MUL__void)(Array__Pair__ColorId_String*, int, Lambda*);

// Depth 510
typedef Pair__ColorId_String(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef Pair__ColorId_String*(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_MUL_)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_void)(Array__Pair__ColorId_String*, int, Pair__ColorId_String);

// Depth 510
typedef Map__ColorId_String(*Fn__Array__Pair__ColorId_String_Map__ColorId_String)(Array__Pair__ColorId_String);

// Depth 510
typedef Array__Pair__ColorId_String*(*Fn__Bucket__ColorId_String_MUL__Array__Pair__ColorId_String_MUL_)(Bucket__ColorId_String*);

// Depth 510
typedef Array__Bucket__ColorId_String*(*Fn__Map__ColorId_String_MUL__Array__Bucket__ColorId_String_MUL_)(Map__ColorId_String*);

// Depth 510
typedef Array__Bucket__ColorId_String(*Fn__int_Array__Bucket__ColorId_String)(int);

// Depth 510
typedef Array__Bucket__ColorId_String(*Fn__int_Fn___Bucket__ColorId_String_MUL__Array__Bucket__ColorId_String)(int, Lambda*);

// Depth 510
typedef Map__ColorId_String(*Fn__int_int_Array__Bucket__ColorId_String_Map__ColorId_String)(int, int, Array__Bucket__ColorId_String);


//Declarations:

// Depth 500
bool _DIV__EQ___int(int a, int b);

// Depth 500
bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b);

// Depth 500
bool _LT__EQ___Char(Char a, Char b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p);

// Depth 500
Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p);

// Depth 500
Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef);

// Depth 500
void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p);

// Depth 500
Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef);

// Depth 500
void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p);

// Depth 500
int id__int(int x);

// Depth 500
int main(int argc, char** argv);

// Depth 500
int max__int(int a, int b);

// Depth 500
int min__int(int a, int b);

// Depth 500
bool not(bool a);

// Depth 500
bool null_QMARK___CChar(CChar* p);

// Depth 500
bool null_QMARK___FILE(FILE* p);

// Depth 1000

// Depth 500
Array Array_allocate__Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Bucket__ColorId_String (int n);

// Depth 500
Array Array_allocate__Char (int n);

// Depth 500
Array Array_allocate__Result__Uint16_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint32_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint64_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__Uint16 (int n);

// Depth 500
Array Array_allocate__Uint32 (int n);

// Depth 500
Array Array_allocate__Uint64 (int n);

// Depth 500
Array Array_allocate__float (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
Array Array_allocate__uint8_t (int n);

// Depth 500
void Array_aset_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_BANG___float (Array *aRef, int n, float newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___float (Array *aRef, int n, float newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue);

// Depth 500
void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a);

// Depth 500
Array Array_copy__Result__Uint16_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint32_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint64_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Uint16 (Array* a);

// Depth 500
Array Array_copy__Uint32 (Array* a);

// Depth 500
Array Array_copy__Uint64 (Array* a);

// Depth 500
Array Array_copy__float (Array* a);

// Depth 500
Array Array_copy__uint8_t (Array* a);

// Depth 500
void Array_delete__Array__uint8_t (Array a);

// Depth 500
void Array_delete__Bucket__ColorId_String (Array a);

// Depth 500
void Array_delete__Char (Array a);

// Depth 500
void Array_delete__Pair__ColorId_String (Array a);

// Depth 500
void Array_delete__PatternMatchResult (Array a);

// Depth 500
void Array_delete__Result__Uint16_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint32_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint64_Array__uint8_t (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__Uint16 (Array a);

// Depth 500
void Array_delete__Uint32 (Array a);

// Depth 500
void Array_delete__Uint64 (Array a);

// Depth 500
void Array_delete__float (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
void Array_delete__uint8_t (Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a);

// Depth 500
int Array_length__Array__uint8_t (Array *a);

// Depth 500
int Array_length__Char (Array *a);

// Depth 500
int Array_length__Pair__ColorId_String (Array *a);

// Depth 500
int Array_length__PatternMatchResult (Array *a);

// Depth 500
int Array_length__Result__Uint16_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint32_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint64_Array__uint8_t (Array *a);

// Depth 500
int Array_length__String (Array *a);

// Depth 500
int Array_length__Uint16 (Array *a);

// Depth 500
int Array_length__Uint32 (Array *a);

// Depth 500
int Array_length__Uint64 (Array *a);

// Depth 500
int Array_length__float (Array *a);

// Depth 500
int Array_length__int (Array *a);

// Depth 500
int Array_length__uint8_t (Array *a);

// Depth 500
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index);

// Depth 500
Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n);

// Depth 500
Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index);

// Depth 500
String Array_prn__float(Array__float* x);

// Depth 500
void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value);

// Depth 500
Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value);

// Depth 500
Array Array_push_MINUS_back__Char(Array a, Char value);

// Depth 500
Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value);

// Depth 500
Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value);

// Depth 500
int Array_reduce__int_int(Lambda* f, int x, Array__int* xs);

// Depth 500
Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f);

// Depth 500
Array__Char Array_repeat__Char(int n, Lambda* f);

// Depth 500
Array__Char Array_replicate__Char(int n, Char* e);

// Depth 500
Array__float Array_replicate__float(int n, float* e);

// Depth 500
Array__Char Array_reverse__Char(Array__Char a);

// Depth 500
Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
String Array_str__float (Array* a);

// Depth 500
Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index);

// Depth 500
Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i);

// Depth 500
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n);

// Depth 500
Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n);

// Depth 500
Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n);

// Depth 500
Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n);

// Depth 500
PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n);

// Depth 500
Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n);

// Depth 500
String* Array_unsafe_MINUS_nth__String (Array *aRef, int n);

// Depth 500
Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n);

// Depth 500
Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n);

// Depth 500
Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n);

// Depth 500
float* Array_unsafe_MINUS_nth__float (Array *aRef, int n);

// Depth 500
int* Array_unsafe_MINUS_nth__int (Array *aRef, int n);

// Depth 500
uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n);

// Depth 500
Array__uint8_t Array_zero__uint8_t();

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b);

// Depth 500
Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i);

// Depth 500
Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i);

// Depth 500
Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y);

// Depth 500
Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order);

// Depth 500
String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs);

// Depth 500
Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes);

// Depth 500
Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i);

// Depth 500
Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is);

// Depth 500
Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i);

// Depth 500
Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is);

// Depth 500
Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i);

// Depth 500
Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is);

// Depth 500
Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
ByteOrder Binary_system_MINUS_endianness();

// Depth 500
String Binary_to_MINUS_hex_MINUS_str(uint8_t b);

// Depth 500
Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 500
Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 1000

// Depth 500
bool Bool_blit(bool x);

// Depth 500
int Bool_hash(bool* k);

// Depth 500
String Bool_prn(bool x);

// Depth 500
bool Bool_zero();

// Depth 1000

// Depth 500
String BoolRef_format(String* s, bool* x);

// Depth 500
String BoolRef_prn(bool* x);

// Depth 500
String BoolRef_str(bool* x);

// Depth 1000

// Depth 500
Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p);

// Depth 500
void Bucket_delete__ColorId_String(Bucket__ColorId_String p);

// Depth 500
Bucket__ColorId_String Bucket_empty__ColorId_String();

// Depth 500
Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p);

// Depth 500
int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k);

// Depth 500
String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i);

// Depth 500
String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value);

// Depth 500
Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries);

// Depth 500
void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val);

// Depth 1000

// Depth 500
uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y);

// Depth 500
uint8_t Byte_blit(uint8_t x);

// Depth 500
bool Byte_even_QMARK_(uint8_t a);

// Depth 500
Maybe__uint8_t Byte_from_MINUS_string(String* s);

// Depth 500
int Byte_hash(uint8_t* k);

// Depth 500
bool Byte_odd_QMARK_(uint8_t a);

// Depth 500
uint8_t Byte_pow(uint8_t x, uint8_t y);

// Depth 500
String Byte_prn(uint8_t x);

// Depth 500
uint8_t Byte_random();

// Depth 500
uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper);

// Depth 500
uint8_t Byte_zero();

// Depth 1000

// Depth 500
ByteOrder ByteOrder_BigEndian();

// Depth 500
ByteOrder ByteOrder_LittleEndian();

// Depth 500
ByteOrder ByteOrder_blit(ByteOrder x);

// Depth 500
ByteOrder ByteOrder_copy(ByteOrder* pRef);

// Depth 500
void ByteOrder_delete(ByteOrder p);

// Depth 500
int ByteOrder_get_MINUS_tag(ByteOrder *p);

// Depth 500
String ByteOrder_prn(ByteOrder *p);

// Depth 500
String ByteOrder_str(ByteOrder *p);

// Depth 1000

// Depth 500
bool ByteRef__LT_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__EQ_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__GT_(uint8_t* a, uint8_t* b);

// Depth 500
String ByteRef_format(String* s, uint8_t* x);

// Depth 500
String ByteRef_prn(uint8_t* x);

// Depth 500
String ByteRef_str(uint8_t* x);

// Depth 1000

// Depth 500
double* Camera_aspect(Camera* p);

// Depth 500
Camera Camera_copy(Camera* pRef);

// Depth 500
void Camera_delete(Camera p);

// Depth 500
double* Camera_far(Camera* p);

// Depth 500
double* Camera_fov(Camera* p);

// Depth 500
Vec3* Camera_front(Camera* p);

// Depth 500
Camera Camera_init(Vec3 pos, Vec3 front, Vec3 right, Vec3 up, Vec3 world_MINUS_up, double yaw, double pitch, double fov, double aspect, double near, double far);

// Depth 500
Mat4 Camera_look_MINUS_at(Camera* c);

// Depth 500
void Camera_move_MINUS_forward_BANG_(Camera* c, double dist);

// Depth 500
void Camera_move_MINUS_right_BANG_(Camera* c, double dist);

// Depth 500
void Camera_move_MINUS_up_BANG_(Camera* c, double dist);

// Depth 500
double* Camera_near(Camera* p);

// Depth 500
Camera Camera_new(Vec3 pos, double yaw, double pitch, double aspect);

// Depth 500
Mat4 Camera_perspective(Camera* c);

// Depth 500
double* Camera_pitch(Camera* p);

// Depth 500
Vec3* Camera_pos(Camera* p);

// Depth 500
String Camera_prn(Camera *p);

// Depth 500
double Camera_rad(double deg);

// Depth 500
Vec3* Camera_right(Camera* p);

// Depth 500
void Camera_rotate_BANG_(Camera* c, double dydp, double dpitch);

// Depth 500
Camera Camera_set_MINUS_aspect(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_aspect_BANG_(Camera* pRef, double newValue);

// Depth 500
Camera Camera_set_MINUS_far(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_far_BANG_(Camera* pRef, double newValue);

// Depth 500
Camera Camera_set_MINUS_fov(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_fov_BANG_(Camera* pRef, double newValue);

// Depth 500
Camera Camera_set_MINUS_front(Camera p, Vec3 newValue);

// Depth 500
void Camera_set_MINUS_front_BANG_(Camera* pRef, Vec3 newValue);

// Depth 500
Camera Camera_set_MINUS_near(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_near_BANG_(Camera* pRef, double newValue);

// Depth 500
Camera Camera_set_MINUS_pitch(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_pitch_BANG_(Camera* pRef, double newValue);

// Depth 500
Camera Camera_set_MINUS_pos(Camera p, Vec3 newValue);

// Depth 500
void Camera_set_MINUS_pos_BANG_(Camera* pRef, Vec3 newValue);

// Depth 500
Camera Camera_set_MINUS_right(Camera p, Vec3 newValue);

// Depth 500
void Camera_set_MINUS_right_BANG_(Camera* pRef, Vec3 newValue);

// Depth 500
Camera Camera_set_MINUS_up(Camera p, Vec3 newValue);

// Depth 500
void Camera_set_MINUS_up_BANG_(Camera* pRef, Vec3 newValue);

// Depth 500
Camera Camera_set_MINUS_world_MINUS_up(Camera p, Vec3 newValue);

// Depth 500
void Camera_set_MINUS_world_MINUS_up_BANG_(Camera* pRef, Vec3 newValue);

// Depth 500
Camera Camera_set_MINUS_yaw(Camera p, double newValue);

// Depth 500
void Camera_set_MINUS_yaw_BANG_(Camera* pRef, double newValue);

// Depth 500
String Camera_str(Camera *p);

// Depth 500
Vec3* Camera_up(Camera* p);

// Depth 500
Camera Camera_update_MINUS_aspect(Camera p, Lambda *updater);

// Depth 500
void Camera_update_MINUS_basis_BANG_(Camera* c);

// Depth 500
Camera Camera_update_MINUS_far(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_fov(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_front(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_near(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_pitch(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_pos(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_right(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_up(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_world_MINUS_up(Camera p, Lambda *updater);

// Depth 500
Camera Camera_update_MINUS_yaw(Camera p, Lambda *updater);

// Depth 500
Vec3* Camera_world_MINUS_up(Camera* p);

// Depth 500
double* Camera_yaw(Camera* p);

// Depth 1000

// Depth 500
bool Char_alpha_QMARK_(Char c);

// Depth 500
bool Char_alphanum_QMARK_(Char c);

// Depth 500
Char Char_blit(Char x);

// Depth 500
int Char_hash(Char* k);

// Depth 500
bool Char_lower_MINUS_case_QMARK_(Char c);

// Depth 500
int Char_meaning(Char* char_MINUS_ref);

// Depth 500
bool Char_num_QMARK_(Char c);

// Depth 500
Char Char_random();

// Depth 500
Char Char_random_MINUS_between(Char a, Char b);

// Depth 500
bool Char_upper_MINUS_case_QMARK_(Char c);

// Depth 500
Char Char_zero();

// Depth 1000

// Depth 500
bool CharRef__LT_(Char* a, Char* b);

// Depth 500
bool CharRef__EQ_(Char* a, Char* b);

// Depth 500
bool CharRef__GT_(Char* a, Char* b);

// Depth 1000

// Depth 500
bool Color__EQ___ColorId(ColorId* a, ColorId* b);

// Depth 500
String Color_color(ColorId cid);

// Depth 500
String Color_colorize(ColorId cid, String* s);

// Depth 500
int Color_hash(ColorId* k);

// Depth 500
Map__ColorId_String Color_table;

// Depth 1000

// Depth 500
ColorId Color_Id_BgBlack();

// Depth 500
ColorId Color_Id_BgBlue();

// Depth 500
ColorId Color_Id_BgCyan();

// Depth 500
ColorId Color_Id_BgGreen();

// Depth 500
ColorId Color_Id_BgMagenta();

// Depth 500
ColorId Color_Id_BgRed();

// Depth 500
ColorId Color_Id_BgWhite();

// Depth 500
ColorId Color_Id_BgYellow();

// Depth 500
ColorId Color_Id_Black();

// Depth 500
ColorId Color_Id_BlinkRapid();

// Depth 500
ColorId Color_Id_BlinkSlow();

// Depth 500
ColorId Color_Id_Blue();

// Depth 500
ColorId Color_Id_Bold();

// Depth 500
ColorId Color_Id_Cyan();

// Depth 500
ColorId Color_Id_Green();

// Depth 500
ColorId Color_Id_Italic();

// Depth 500
ColorId Color_Id_Magenta();

// Depth 500
ColorId Color_Id_None();

// Depth 500
ColorId Color_Id_Red();

// Depth 500
ColorId Color_Id_Reset();

// Depth 500
ColorId Color_Id_Underline();

// Depth 500
ColorId Color_Id_White();

// Depth 500
ColorId Color_Id_Yellow();

// Depth 500
ColorId Color_Id_copy(ColorId* pRef);

// Depth 500
void Color_Id_delete(ColorId p);

// Depth 500
int Color_Id_get_MINUS_tag(ColorId *p);

// Depth 500
String Color_Id_prn(ColorId *p);

// Depth 500
String Color_Id_str(ColorId *p);

// Depth 1000

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
double Double_blit(double x);

// Depth 500
double Double_clamp__double(double min, double max, double val);

// Depth 500
double Double_dec(double x);

// Depth 500
double Double_e;

// Depth 500
Maybe__double Double_from_MINUS_string(String* s);

// Depth 500
int Double_hash(double* k);

// Depth 500
double Double_inc(double x);

// Depth 500
double Double_pi;

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_random();

// Depth 500
double Double_random_MINUS_between(double lower, double upper);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 500
String DoubleRef_format(String* s, double* x);

// Depth 500
String DoubleRef_prn(double* x);

// Depth 500
String DoubleRef_str(double* x);

// Depth 1000

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
float Float_blit(float x);

// Depth 500
float Float_dec(float x);

// Depth 500
Maybe__float Float_from_MINUS_string(String* s);

// Depth 500
int Float_hash(float* k);

// Depth 500
float Float_inc(float x);

// Depth 500
float Float_pi;

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_random();

// Depth 500
float Float_random_MINUS_between(float lower, float upper);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 500
String FloatRef_format(String* s, float* x);

// Depth 500
String FloatRef_prn(float* x);

// Depth 500
String FloatRef_str(float* x);

// Depth 1000

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f);

// Depth 500
void Function_delete__Long_Uint32 (Lambda f);

// Depth 500
void Function_delete__Long_Uint64 (Lambda f);

// Depth 500
void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__int (Lambda f);

// Depth 500
void Function_delete__String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__double_double_bool (Lambda f);

// Depth 500
void Function_delete__float_float_bool (Lambda f);

// Depth 500
void Function_delete__int_int (Lambda f);

// Depth 500
void Function_delete__int_int_MUL__int (Lambda f);

// Depth 500
void Function_delete__int_int_bool (Lambda f);

// Depth 500
void Function_delete__uint8_t_MUL__String (Lambda f);

// Depth 500
void Function_delete__uint8_t_uint8_t (Lambda f);

// Depth 500
void Function_delete__void (Lambda f);

// Depth 1000

// Depth 500
int Heap_lchild(int i);

// Depth 500
int Heap_parent(int i);

// Depth 500
int Heap_rchild(int i);

// Depth 1000

// Depth 500
Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name);

// Depth 500
void IO_color(ColorId cid);

// Depth 500
void IO_colorize(ColorId cid, String* s);

// Depth 500
Result__Char_String IO_fgetc(FILE* file);

// Depth 500
Maybe__String IO_getenv(String* s);

// Depth 500
Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode);

// Depth 500
Result__String_String IO_read_MINUS__GT_EOF(String* filename);

// Depth 500
Result__String_String IO_read_MINUS_file(String* filename);

// Depth 500
Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name);

// Depth 1000

// Depth 500
void IO_Raw_fclose_BANG_(FILE* file);

// Depth 500
void IO_Raw_fflush_BANG_(FILE* file);

// Depth 500
FILE* IO_Raw_fopen(String* pathname, String* mode);

// Depth 500
int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_unlink(String* file_MINUS_name);

// Depth 500
void IO_Raw_unlink_BANG_(String* file_MINUS_name);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
int Int_blit(int x);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
int Int_from_MINUS_int(int a);

// Depth 500
Maybe__int Int_from_MINUS_string(String* s);

// Depth 500
int Int_hash(int* k);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_positive_MINUS_mod(int k, int n);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_random();

// Depth 500
int Int_random_MINUS_between(int lower, int upper);

// Depth 500
int Int_to_MINUS_int(int a);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
Int16 Int16_blit(Int16 x);

// Depth 500
int Int16_hash(Int16* k);

// Depth 500
String Int16_prn(Int16 a);

// Depth 500
Int16 Int16_zero();

// Depth 1000

// Depth 500
bool Int16Extra__EQ_(Int16* a, Int16* b);

// Depth 500
String Int16Extra_prn(Int16* a);

// Depth 500
String Int16Extra_str(Int16* a);

// Depth 1000

// Depth 500
Int32 Int32_blit(Int32 x);

// Depth 500
int Int32_hash(Int32* k);

// Depth 500
String Int32_prn(Int32 a);

// Depth 500
Int32 Int32_zero();

// Depth 1000

// Depth 500
bool Int32Extra__EQ_(Int32* a, Int32* b);

// Depth 500
String Int32Extra_prn(Int32* a);

// Depth 500
String Int32Extra_str(Int32* a);

// Depth 1000

// Depth 500
Int64 Int64_blit(Int64 x);

// Depth 500
int Int64_hash(Int64* k);

// Depth 500
String Int64_prn(Int64 a);

// Depth 500
Int64 Int64_zero();

// Depth 1000

// Depth 500
bool Int64Extra__EQ_(Int64* a, Int64* b);

// Depth 500
String Int64Extra_prn(Int64* a);

// Depth 500
String Int64Extra_str(Int64* a);

// Depth 1000

// Depth 500
Int8 Int8_blit(Int8 x);

// Depth 500
int Int8_hash(Int8* k);

// Depth 500
String Int8_prn(Int8 a);

// Depth 500
Int8 Int8_zero();

// Depth 1000

// Depth 500
bool Int8Extra__EQ_(Int8* a, Int8* b);

// Depth 500
String Int8Extra_prn(Int8* a);

// Depth 500
String Int8Extra_str(Int8* a);

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 500
String IntRef_format(String* s, int* x);

// Depth 500
String IntRef_prn(int* x);

// Depth 500
String IntRef_str(int* x);

// Depth 1000

// Depth 500
Long Long_blit(Long x);

// Depth 500
bool Long_even_QMARK_(Long a);

// Depth 500
Maybe__Long Long_from_MINUS_string(String* s);

// Depth 500
int Long_hash(Long* k);

// Depth 500
bool Long_odd_QMARK_(Long a);

// Depth 500
String Long_prn(Long x);

// Depth 500
Long Long_random();

// Depth 500
Long Long_random_MINUS_between(Long lower, Long upper);

// Depth 500
Long Long_zero();

// Depth 1000

// Depth 500
bool LongRef__LT_(Long* a, Long* b);

// Depth 500
bool LongRef__EQ_(Long* a, Long* b);

// Depth 500
bool LongRef__GT_(Long* a, Long* b);

// Depth 500
String LongRef_format(String* s, Long* x);

// Depth 500
String LongRef_prn(Long* x);

// Depth 500
String LongRef_str(Long* x);

// Depth 1000

// Depth 500
Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
Map__ColorId_String Map_create__ColorId_String();

// Depth 500
void Map_delete__ColorId_String(Map__ColorId_String p);

// Depth 500
int Map_dflt_MINUS_len;

// Depth 500
Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a);

// Depth 500
String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value);

// Depth 500
String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k);

// Depth 500
Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets);

// Depth 500
int* Map_len__ColorId_String(Map__ColorId_String* p);

// Depth 500
int Map_max_MINUS_load;

// Depth 500
int Map_min_MINUS_load;

// Depth 500
int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue);

// Depth 1000

// Depth 500
Mat4 Mat4_copy(Mat4* pRef);

// Depth 500
Array__float* Mat4_data(Mat4* p);

// Depth 500
void Mat4_delete(Mat4 p);

// Depth 500
Mat4 Mat4_identity();

// Depth 500
Mat4 Mat4_init(Array__float data);

// Depth 500
Mat4 Mat4_mul(Mat4* a, Mat4* b);

// Depth 500
String Mat4_prn(Mat4 *p);

// Depth 500
Mat4 Mat4_set_MINUS_data(Mat4 p, Array__float newValue);

// Depth 500
void Mat4_set_MINUS_data_BANG_(Mat4* pRef, Array__float newValue);

// Depth 500
String Mat4_str(Mat4 *p);

// Depth 500
Mat4 Mat4_update_MINUS_data(Mat4 p, Lambda *updater);

// Depth 500
Mat4 Mat4_zero();

// Depth 1000

// Depth 500
Maybe__Long Maybe_Just__Long(Long member0);

// Depth 500
Maybe__String Maybe_Just__String(String member0);

// Depth 500
Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0);

// Depth 500
Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0);

// Depth 500
Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0);

// Depth 500
Maybe__double Maybe_Just__double(double member0);

// Depth 500
Maybe__float Maybe_Just__float(float member0);

// Depth 500
Maybe__int Maybe_Just__int(int member0);

// Depth 500
Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0);

// Depth 500
Maybe__Long Maybe_Nothing__Long();

// Depth 500
Maybe__String Maybe_Nothing__String();

// Depth 500
Maybe__Uint16 Maybe_Nothing__Uint16();

// Depth 500
Maybe__Uint32 Maybe_Nothing__Uint32();

// Depth 500
Maybe__Uint64 Maybe_Nothing__Uint64();

// Depth 500
Maybe__double Maybe_Nothing__double();

// Depth 500
Maybe__float Maybe_Nothing__float();

// Depth 500
Maybe__int Maybe_Nothing__int();

// Depth 500
Maybe__uint8_t Maybe_Nothing__uint8_t();

// Depth 500
void Maybe_delete__Long(Maybe__Long p);

// Depth 500
void Maybe_delete__String(Maybe__String p);

// Depth 500
void Maybe_delete__Uint16(Maybe__Uint16 p);

// Depth 500
void Maybe_delete__Uint32(Maybe__Uint32 p);

// Depth 500
void Maybe_delete__Uint64(Maybe__Uint64 p);

// Depth 500
void Maybe_delete__double(Maybe__double p);

// Depth 500
void Maybe_delete__float(Maybe__float p);

// Depth 500
void Maybe_delete__int(Maybe__int p);

// Depth 500
void Maybe_delete__uint8_t(Maybe__uint8_t p);

// Depth 500
String Maybe_from__String(Maybe__String a, String dflt);

// Depth 500
String Maybe_unsafe_MINUS_from__String(Maybe__String a);

// Depth 1000

// Depth 500
Opaque Opaque_copy(Opaque* pRef);

// Depth 500
void Opaque_delete(Opaque p);

// Depth 500
int Opaque_get_MINUS_tag(Opaque *p);

// Depth 500
String Opaque_prn(Opaque *p);

// Depth 500
String Opaque_str(Opaque *p);

// Depth 1000

// Depth 500
Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p);

// Depth 500
int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
String* Pair_b__ColorId_String(Pair__ColorId_String* p);

// Depth 500
void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p);

// Depth 500
void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p);

// Depth 500
void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p);

// Depth 500
void Pair_delete__ColorId_String(Pair__ColorId_String p);

// Depth 500
Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val);

// Depth 500
Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b);

// Depth 500
Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b);

// Depth 500
Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b);

// Depth 500
Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b);

// Depth 500
Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue);

// Depth 1000

// Depth 500
int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m);

// Depth 500
String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m);

// Depth 500
Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data);

// Depth 500
int Pattern_find(Pattern* pattern, String* data);

// Depth 500
Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data);

// Depth 500
Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data);

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__Char* chars);

// Depth 500
Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
PatternMatchResult Pattern_match(Pattern* pattern, String* data);

// Depth 500
String Pattern_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 500
bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res);

// Depth 500
Array__String Pattern_split(Pattern* p, String* s);

// Depth 1000

// Depth 500
int* Pattern_MatchResult_end(PatternMatchResult* p);

// Depth 500
PatternMatchResult Pattern_MatchResult_init(int start, int end);

// Depth 500
String Pattern_MatchResult_prn(PatternMatchResult *p);

// Depth 500
String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
int* Pattern_MatchResult_start(PatternMatchResult* p);

// Depth 500
String Pattern_MatchResult_str(PatternMatchResult matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater);

// Depth 1000

// Depth 500
int * Pointer_address__int(int * a);

// Depth 500
bool Pointer_eq__CChar(CChar *p1, CChar *p2);

// Depth 500
bool Pointer_eq__FILE(FILE *p1, FILE *p2);

// Depth 1000

// Depth 500
bool Random__;

// Depth 500
double Random_a;

// Depth 500
double Random_c;

// Depth 500
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_();

// Depth 500
double Random_m;

// Depth 500
double Random_random();

// Depth 500
double Random_s;

// Depth 500
void Random_seed();

// Depth 500
void Random_seed_MINUS_from(double new_MINUS_seed);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0);

// Depth 500
Result__Char_String Result_Error__String_Char(String member0);

// Depth 500
Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0);

// Depth 500
Result__String_String Result_Error__String_String(String member0);

// Depth 500
Result__bool_String Result_Error__String_bool(String member0);

// Depth 500
Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0);

// Depth 500
Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0);

// Depth 500
Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0);

// Depth 500
Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0);

// Depth 500
Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0);

// Depth 500
Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0);

// Depth 500
Result__Char_String Result_Success__Char_String(Char member0);

// Depth 500
Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0);

// Depth 500
Result__String_String Result_Success__String_String(String member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0);

// Depth 500
Result__bool_String Result_Success__bool_String(bool member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef);

// Depth 500
Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef);

// Depth 500
Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef);

// Depth 500
void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p);

// Depth 500
void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p);

// Depth 500
void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p);

// Depth 500
void Result_delete__Char_String(Result__Char_String p);

// Depth 500
void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p);

// Depth 500
void Result_delete__String_String(Result__String_String p);

// Depth 500
void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p);

// Depth 500
void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p);

// Depth 500
void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p);

// Depth 500
void Result_delete__bool_String(Result__bool_String p);

// Depth 500
bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a);

// Depth 500
bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a);

// Depth 500
Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a);

// Depth 500
Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a);

// Depth 1000

// Depth 500
int Set_dflt_MINUS_len;

// Depth 500
int Set_max_MINUS_load;

// Depth 500
int Set_min_MINUS_load;

// Depth 1000

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c);

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c);

// Depth 500
bool String__Lambda_words_14_env(String* s);

// Depth 500
bool String_allocated_QMARK_(String* s);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_lower(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_upper(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
String String_concat(Array__String* strings);

// Depth 500
bool String_contains_MINUS_string_QMARK_(String* s, String* needle);

// Depth 500
bool String_contains_QMARK_(String* s, Char c);

// Depth 500
int String_count_MINUS_char(String* s, Char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
int String_hash(String* k);

// Depth 500
Char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
String String_join(String* sep, Array__String* strings);

// Depth 500
String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, Char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, Char pad, String* s);

// Depth 500
String String_prefix(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
String String_slice(String* s, int a, int b);

// Depth 500
Array__String String_split_MINUS_by(String* s, Array__Char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_suffix(String* s, int b);

// Depth 500
int String_sum_MINUS_length(Array__String* strings);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__LT_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 500
bool StringCopy__GT_(String a, String b);

// Depth 500
String StringCopy_prn(String s);

// Depth 500
String StringCopy_str(String s);

// Depth 1000

// Depth 500
String System_error_MINUS_text();

// Depth 500
void System_exit__void(int code);

// Depth 500
String System_strerror(int error_MINUS_no);

// Depth 1000

// Depth 500
TestState Test_assert_MINUS_equal__double_String(TestState* state, double x, double y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__float_String(TestState* state, float x, float y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__int_String(TestState* state, int x, int y, String* descr);

// Depth 500
TestState Test_display_MINUS_test__double_double_String_String(TestState* state, double expected, double actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__float_float_String_String(TestState* state, float expected, float actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
void Test_handle_MINUS_signal__void(int x);

// Depth 500
TestState Test_handler__double_double_String_String(TestState* state, double expected, double actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__float_float_String_String(TestState* state, float expected, float actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, Lambda op);

// Depth 500
void Test_print_MINUS_test_MINUS_results(TestState* state);

// Depth 500
TestState Test_reset(TestState state);

// Depth 500
int Test_run_MINUS_child(Lambda x);

// Depth 500
int Test_run_MINUS_child_MINUS_signals(Lambda x);

// Depth 1000

// Depth 500
TestState Test_State_copy(TestState* pRef);

// Depth 500
void Test_State_delete(TestState p);

// Depth 500
int* Test_State_failed(TestState* p);

// Depth 500
TestState Test_State_init(int passed, int failed);

// Depth 500
int* Test_State_passed(TestState* p);

// Depth 500
String Test_State_prn(TestState *p);

// Depth 500
TestState Test_State_set_MINUS_failed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue);

// Depth 500
TestState Test_State_set_MINUS_passed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue);

// Depth 500
String Test_State_str(TestState *p);

// Depth 500
TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater);

// Depth 500
TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater);

// Depth 1000

// Depth 500
Uint16 Uint16_blit(Uint16 x);

// Depth 500
int Uint16_hash(Uint16* k);

// Depth 500
String Uint16_prn(Uint16 a);

// Depth 500
Uint16 Uint16_zero();

// Depth 1000

// Depth 500
bool Uint16Extra__EQ_(Uint16* a, Uint16* b);

// Depth 500
String Uint16Extra_prn(Uint16* a);

// Depth 500
String Uint16Extra_str(Uint16* a);

// Depth 1000

// Depth 500
Uint32 Uint32_blit(Uint32 x);

// Depth 500
int Uint32_hash(Uint32* k);

// Depth 500
String Uint32_prn(Uint32 a);

// Depth 500
Uint32 Uint32_zero();

// Depth 1000

// Depth 500
bool Uint32Extra__EQ_(Uint32* a, Uint32* b);

// Depth 500
String Uint32Extra_prn(Uint32* a);

// Depth 500
String Uint32Extra_str(Uint32* a);

// Depth 1000

// Depth 500
Uint64 Uint64_blit(Uint64 x);

// Depth 500
int Uint64_hash(Uint64* k);

// Depth 500
String Uint64_prn(Uint64 a);

// Depth 500
Uint64 Uint64_zero();

// Depth 1000

// Depth 500
bool Uint64Extra__EQ_(Uint64* a, Uint64* b);

// Depth 500
String Uint64Extra_prn(Uint64* a);

// Depth 500
String Uint64Extra_str(Uint64* a);

// Depth 1000

// Depth 500
Uint8 Uint8_blit(Uint8 x);

// Depth 500
int Uint8_hash(Uint8* k);

// Depth 500
String Uint8_prn(Uint8 a);

// Depth 500
Uint8 Uint8_zero();

// Depth 1000

// Depth 500
bool Uint8Extra__EQ_(Uint8* a, Uint8* b);

// Depth 500
String Uint8Extra_prn(Uint8* a);

// Depth 500
String Uint8Extra_str(Uint8* a);

// Depth 1000

// Depth 500
bool Unit__EQ_();

// Depth 500
void Unit_copy();

// Depth 500
String Unit_prn();

// Depth 500
void Unit_zero();

// Depth 1000

// Depth 500
bool UnitRef__EQ_();

// Depth 1000

// Depth 500
Vec3 Vec3_add(Vec3* a, Vec3* b);

// Depth 500
Vec3 Vec3_copy(Vec3* pRef);

// Depth 500
Vec3 Vec3_cross(Vec3* a, Vec3* b);

// Depth 500
void Vec3_delete(Vec3 p);

// Depth 500
double Vec3_dot(Vec3* a, Vec3* b);

// Depth 500
Vec3 Vec3_init(double x, double y, double z);

// Depth 500
double Vec3_mag(Vec3* v);

// Depth 500
double Vec3_mag_MINUS_sq(Vec3* v);

// Depth 500
Vec3 Vec3_mul(Vec3* v, double s);

// Depth 500
Vec3 Vec3_new(double x, double y, double z);

// Depth 500
Vec3 Vec3_normalize(Vec3* v);

// Depth 500
String Vec3_prn(Vec3* v);

// Depth 500
Vec3 Vec3_set_MINUS_x(Vec3 p, double newValue);

// Depth 500
void Vec3_set_MINUS_x_BANG_(Vec3* pRef, double newValue);

// Depth 500
Vec3 Vec3_set_MINUS_y(Vec3 p, double newValue);

// Depth 500
void Vec3_set_MINUS_y_BANG_(Vec3* pRef, double newValue);

// Depth 500
Vec3 Vec3_set_MINUS_z(Vec3 p, double newValue);

// Depth 500
void Vec3_set_MINUS_z_BANG_(Vec3* pRef, double newValue);

// Depth 500
String Vec3_str(Vec3 *p);

// Depth 500
Vec3 Vec3_sub(Vec3* a, Vec3* b);

// Depth 500
Vec3 Vec3_update_MINUS_x(Vec3 p, Lambda *updater);

// Depth 500
Vec3 Vec3_update_MINUS_y(Vec3 p, Lambda *updater);

// Depth 500
Vec3 Vec3_update_MINUS_z(Vec3 p, Lambda *updater);

// Depth 500
double* Vec3_x(Vec3* p);

// Depth 500
double* Vec3_y(Vec3* p);

// Depth 500
double* Vec3_z(Vec3* p);

// Depth 500
Vec3 Vec3_zero();


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;
#if defined _WIN32
  SetConsoleOutputCP(CP_UTF8);
#endif
    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        Map_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Map_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Map_dflt_MINUS_len = 16;
    }

    // Depth 0
    {
        Random_s = 1.938011e7;
    }

    // Depth 0
    {
        Random_m = 4.294967296e9;
    }

    // Depth 0
    {
        Random_c = 1.0;
    }

    // Depth 0
    {
        Random_a = 69069.0;
    }

    // Depth 0
    {
        Set_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Set_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Set_dflt_MINUS_len = 16;
    }

    // Depth 2
    {
        Random_seed();
        bool _6 = true;
        Random__ = _6;
    }

    // Depth 8
    {
        Array _164 = { .len = 23, .capacity = 23, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 23) };
        ColorId _5 = Color_Id_Black();
        static String _7 = "30";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        Pair__ColorId_String _9 = Pair_init__ColorId_String(_5, _8);
        ((Pair__ColorId_String*)_164.data)[0] = _9;
        ColorId _12 = Color_Id_Red();
        static String _14 = "31";
        String *_14_ref = &_14;
        String _15 = String_copy(_14_ref);
        Pair__ColorId_String _16 = Pair_init__ColorId_String(_12, _15);
        ((Pair__ColorId_String*)_164.data)[1] = _16;
        ColorId _19 = Color_Id_Green();
        static String _21 = "32";
        String *_21_ref = &_21;
        String _22 = String_copy(_21_ref);
        Pair__ColorId_String _23 = Pair_init__ColorId_String(_19, _22);
        ((Pair__ColorId_String*)_164.data)[2] = _23;
        ColorId _26 = Color_Id_Yellow();
        static String _28 = "33";
        String *_28_ref = &_28;
        String _29 = String_copy(_28_ref);
        Pair__ColorId_String _30 = Pair_init__ColorId_String(_26, _29);
        ((Pair__ColorId_String*)_164.data)[3] = _30;
        ColorId _33 = Color_Id_Blue();
        static String _35 = "34";
        String *_35_ref = &_35;
        String _36 = String_copy(_35_ref);
        Pair__ColorId_String _37 = Pair_init__ColorId_String(_33, _36);
        ((Pair__ColorId_String*)_164.data)[4] = _37;
        ColorId _40 = Color_Id_Magenta();
        static String _42 = "35";
        String *_42_ref = &_42;
        String _43 = String_copy(_42_ref);
        Pair__ColorId_String _44 = Pair_init__ColorId_String(_40, _43);
        ((Pair__ColorId_String*)_164.data)[5] = _44;
        ColorId _47 = Color_Id_Cyan();
        static String _49 = "36";
        String *_49_ref = &_49;
        String _50 = String_copy(_49_ref);
        Pair__ColorId_String _51 = Pair_init__ColorId_String(_47, _50);
        ((Pair__ColorId_String*)_164.data)[6] = _51;
        ColorId _54 = Color_Id_White();
        static String _56 = "37";
        String *_56_ref = &_56;
        String _57 = String_copy(_56_ref);
        Pair__ColorId_String _58 = Pair_init__ColorId_String(_54, _57);
        ((Pair__ColorId_String*)_164.data)[7] = _58;
        ColorId _61 = Color_Id_Reset();
        static String _63 = "0";
        String *_63_ref = &_63;
        String _64 = String_copy(_63_ref);
        Pair__ColorId_String _65 = Pair_init__ColorId_String(_61, _64);
        ((Pair__ColorId_String*)_164.data)[8] = _65;
        ColorId _68 = Color_Id_None();
        static String _70 = "0";
        String *_70_ref = &_70;
        String _71 = String_copy(_70_ref);
        Pair__ColorId_String _72 = Pair_init__ColorId_String(_68, _71);
        ((Pair__ColorId_String*)_164.data)[9] = _72;
        ColorId _75 = Color_Id_Bold();
        static String _77 = "1";
        String *_77_ref = &_77;
        String _78 = String_copy(_77_ref);
        Pair__ColorId_String _79 = Pair_init__ColorId_String(_75, _78);
        ((Pair__ColorId_String*)_164.data)[10] = _79;
        ColorId _82 = Color_Id_Italic();
        static String _84 = "3";
        String *_84_ref = &_84;
        String _85 = String_copy(_84_ref);
        Pair__ColorId_String _86 = Pair_init__ColorId_String(_82, _85);
        ((Pair__ColorId_String*)_164.data)[11] = _86;
        ColorId _89 = Color_Id_Underline();
        static String _91 = "4";
        String *_91_ref = &_91;
        String _92 = String_copy(_91_ref);
        Pair__ColorId_String _93 = Pair_init__ColorId_String(_89, _92);
        ((Pair__ColorId_String*)_164.data)[12] = _93;
        ColorId _96 = Color_Id_BlinkSlow();
        static String _98 = "5";
        String *_98_ref = &_98;
        String _99 = String_copy(_98_ref);
        Pair__ColorId_String _100 = Pair_init__ColorId_String(_96, _99);
        ((Pair__ColorId_String*)_164.data)[13] = _100;
        ColorId _103 = Color_Id_BlinkRapid();
        static String _105 = "6";
        String *_105_ref = &_105;
        String _106 = String_copy(_105_ref);
        Pair__ColorId_String _107 = Pair_init__ColorId_String(_103, _106);
        ((Pair__ColorId_String*)_164.data)[14] = _107;
        ColorId _110 = Color_Id_BgBlack();
        static String _112 = "40";
        String *_112_ref = &_112;
        String _113 = String_copy(_112_ref);
        Pair__ColorId_String _114 = Pair_init__ColorId_String(_110, _113);
        ((Pair__ColorId_String*)_164.data)[15] = _114;
        ColorId _117 = Color_Id_BgRed();
        static String _119 = "41";
        String *_119_ref = &_119;
        String _120 = String_copy(_119_ref);
        Pair__ColorId_String _121 = Pair_init__ColorId_String(_117, _120);
        ((Pair__ColorId_String*)_164.data)[16] = _121;
        ColorId _124 = Color_Id_BgGreen();
        static String _126 = "42";
        String *_126_ref = &_126;
        String _127 = String_copy(_126_ref);
        Pair__ColorId_String _128 = Pair_init__ColorId_String(_124, _127);
        ((Pair__ColorId_String*)_164.data)[17] = _128;
        ColorId _131 = Color_Id_BgYellow();
        static String _133 = "43";
        String *_133_ref = &_133;
        String _134 = String_copy(_133_ref);
        Pair__ColorId_String _135 = Pair_init__ColorId_String(_131, _134);
        ((Pair__ColorId_String*)_164.data)[18] = _135;
        ColorId _138 = Color_Id_BgBlue();
        static String _140 = "44";
        String *_140_ref = &_140;
        String _141 = String_copy(_140_ref);
        Pair__ColorId_String _142 = Pair_init__ColorId_String(_138, _141);
        ((Pair__ColorId_String*)_164.data)[19] = _142;
        ColorId _145 = Color_Id_BgMagenta();
        static String _147 = "45";
        String *_147_ref = &_147;
        String _148 = String_copy(_147_ref);
        Pair__ColorId_String _149 = Pair_init__ColorId_String(_145, _148);
        ((Pair__ColorId_String*)_164.data)[20] = _149;
        ColorId _152 = Color_Id_BgCyan();
        static String _154 = "46";
        String *_154_ref = &_154;
        String _155 = String_copy(_154_ref);
        Pair__ColorId_String _156 = Pair_init__ColorId_String(_152, _155);
        ((Pair__ColorId_String*)_164.data)[21] = _156;
        ColorId _159 = Color_Id_BgWhite();
        static String _161 = "47";
        String *_161_ref = &_161;
        String _162 = String_copy(_161_ref);
        Pair__ColorId_String _163 = Pair_init__ColorId_String(_159, _162);
        ((Pair__ColorId_String*)_164.data)[22] = _163;
        Map__ColorId_String _165 = Map_from_MINUS_array__ColorId_String(_164);
        Color_table = _165;
    }
}

//Definitions:
bool _DIV__EQ___int(int a, int b) {
    bool _9 = Int__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b) {
    bool _9 = Byte__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _LT__EQ___Char(Char a, Char b) {
    bool _19;
    bool _9 = Char__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

Array Array_allocate__Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Array__uint8_t));
    return a;
}

Array Array_allocate__Bucket__ColorId_String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Bucket__ColorId_String));
    return a;
}

Array Array_allocate__Char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Char));
    return a;
}

Array Array_allocate__Result__Uint16_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint16_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint32_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint32_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint64_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint64_Array__uint8_t));
    return a;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__Uint16 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint16));
    return a;
}

Array Array_allocate__Uint32 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint32));
    return a;
}

Array Array_allocate__Uint64 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint64));
    return a;
}

Array Array_allocate__float (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(float));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

Array Array_allocate__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(uint8_t));
    return a;
}

void Array_aset_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Char' */

    ((Char*)a.data)[n] = newValue;
}

void Array_aset_BANG___float (Array *aRef, int n, float newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Float' */

    ((float*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Bucket__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Pair__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint16_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint32_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint64_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint16*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint32*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint64*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___float (Array *aRef, int n, float newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((float*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((uint8_t*)a.data)[n] = newValue;
}

void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f) {
    Pair__ColorId_String _15 = Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(a, i);
    Pair__ColorId_String _16 = (*f).env ? ((Pair__ColorId_String(*)(LambdaEnv, Pair__ColorId_String))(*f).callback)((*f).env, _15) : ((Pair__ColorId_String(*)(Pair__ColorId_String))(*f).callback)(_15);
    Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String(a, i, _16);
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _9 = Array_copy__Result__Uint16_Array__uint8_t(a);
    Array__Result__Uint16_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _9 = Array_copy__Result__Uint32_Array__uint8_t(a);
    Array__Result__Uint32_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _9 = Array_copy__Result__Uint64_Array__uint8_t(a);
    Array__Result__Uint64_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint16_Array__uint8_t _11 = Array_allocate__Result__Uint16_Array__uint8_t(_10);
        Array__Result__Uint16_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Result__Uint16_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint16_Array__uint8_t _38 = (*f).env ? ((Result__Uint16_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint16_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Result__Uint16_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint32_Array__uint8_t _11 = Array_allocate__Result__Uint32_Array__uint8_t(_10);
        Array__Result__Uint32_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Result__Uint32_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint32_Array__uint8_t _38 = (*f).env ? ((Result__Uint32_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint32_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Result__Uint32_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint64_Array__uint8_t _11 = Array_allocate__Result__Uint64_Array__uint8_t(_10);
        Array__Result__Uint64_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Result__Uint64_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint64_Array__uint8_t _38 = (*f).env ? ((Result__Uint64_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint64_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Result__Uint64_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint16* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint32* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint64* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__int* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((int(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__String* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((String(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__int* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((int(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint16* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint32* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Uint64* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__uint8_t(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__uint8_t(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__String* _29 = &na; // ref
                uint8_t* _37 = Array_unsafe_MINUS_nth__uint8_t(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, uint8_t*))(*f).callback)((*f).env, _37) : ((String(*)(uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__uint8_t(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array Array_copy__Result__Uint16_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint16_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint16_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint16_Array__uint8_t(&(((Result__Uint16_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint32_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint32_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint32_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint32_Array__uint8_t(&(((Result__Uint32_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint64_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint64_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint64_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint64_Array__uint8_t(&(((Result__Uint64_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Uint16 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint16) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint16) * a->len);
    return copy;
}

Array Array_copy__Uint32 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint32) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint32) * a->len);
    return copy;
}

Array Array_copy__Uint64 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint64) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint64) * a->len);
    return copy;
}

Array Array_copy__float (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(float) * a->capacity);
    memcpy(copy.data, a->data, sizeof(float) * a->len);
    return copy;
}

Array Array_copy__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(uint8_t) * a->capacity);
    memcpy(copy.data, a->data, sizeof(uint8_t) * a->len);
    return copy;
}

void Array_delete__Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Array_delete__uint8_t(((Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Bucket__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Bucket_delete__ColorId_String(((Bucket__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Pair__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Pair_delete__ColorId_String(((Pair__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__PatternMatchResult (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Pattern.MatchResult' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint16_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint32_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint64_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint16 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint16' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint32 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint32' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint64 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint64' */
    }
    CARP_FREE(a.data);
}

void Array_delete__float (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Float' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

void Array_delete__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Byte' */
    }
    CARP_FREE(a.data);
}

Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint16_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint16_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint16_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint16_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint16_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint32_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint32_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint32_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint32_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint32_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint64_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint64_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint64_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint64_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint64_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_String_MUL__bool)(*predicate).callback)((*predicate).env, &(((String*)a.data)[i])) : ((Fn__String_MUL__bool)(*predicate).callback)(&(((String*)a.data)[i]))) {
            (((String*)a.data)[insertIndex++]) = ((String*)a.data)[i];
        } else {
            String_delete(((String*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a) { 
    for(int i = 0; i < a.len; ++i) {
        ((uint8_t*)a.data)[i] = (*f).env ? ((Fn__LambdaEnv_uint8_t_uint8_t)(*f).callback)((*f).env, (((uint8_t*)a.data)[i])) : ((Fn__uint8_t_uint8_t)(*f).callback)((((uint8_t*)a.data)[i]));
    }
    return a;
}

int Array_length__Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Char (Array *a) { return (*a).len; }
int Array_length__Pair__ColorId_String (Array *a) { return (*a).len; }
int Array_length__PatternMatchResult (Array *a) { return (*a).len; }
int Array_length__Result__Uint16_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint32_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint64_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__String (Array *a) { return (*a).len; }
int Array_length__Uint16 (Array *a) { return (*a).len; }
int Array_length__Uint32 (Array *a) { return (*a).len; }
int Array_length__Uint64 (Array *a) { return (*a).len; }
int Array_length__float (Array *a) { return (*a).len; }
int Array_length__int (Array *a) { return (*a).len; }
int Array_length__uint8_t (Array *a) { return (*a).len; }
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index) {
    Maybe__uint8_t _37;
    bool _22;
    bool _10 = _GT__EQ___int(index, 0);
    if (_10) {
        int _16 = Array_length__uint8_t(xs);
        bool _17 = Int__LT_(index, _16);
        bool _18 = _17;
        _22 = _18;
    } else {
        bool _21 = false;
        _22 = _21;
    }
    if (_22) {
        uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, index);
        uint8_t _30 = Byte_copy(_29);
        Maybe__uint8_t _31 = Maybe_Just__uint8_t(_30);
        Maybe__uint8_t _32 = _31;
        _37 = _32;
    } else {
        Maybe__uint8_t _35 = Maybe_Nothing__uint8_t();
        Maybe__uint8_t _36 = _35;
        _37 = _36;
    }
    return _37;
}

Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n) {
    Array__Array__uint8_t _67;
    /* let */ {
        int x = 0;
        int y = 0;
        Array _11 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Array__uint8_t) * 0) };
        Array__Array__uint8_t a = _11;
        int _19 = Array_length__uint8_t(arr);
        bool _20 = Int__LT_(x, _19);
        bool _64 = _20;
        while (_64) {
            int _27 = Int__PLUS_(x, n);
            y = _27;  // Int = Int
            int _34 = Array_length__uint8_t(arr);
            bool _35 = Int__GT_(y, _34);
            if (_35) {
                int _41 = Array_length__uint8_t(arr);
                y = _41;  // Int = Int
            } else {
                /* () */
            }
            Array__uint8_t _56 = Array_slice__uint8_t(arr, x, y);
            Array__Array__uint8_t _57 = Array_push_MINUS_back__Array__uint8_t(a, _56);
            a = _57;  // (Array (Array Byte)) = (Array (Array Byte))
            x = y;  // Int = Int
            int _19 = Array_length__uint8_t(arr);
            bool _20 = Int__LT_(x, _19);
            _64 = _20;
        }
        Array__Array__uint8_t _66 = a;
        _67 = _66;
    }
    return _67;
}

Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index) {
    Array__Char _9 = Array_slice__Char(xs, 0, end_MINUS_index);
    return _9;
}

String Array_prn__float(Array__float* x) {
    String _6 = Array_str__float(x);
    return _6;
}

void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Pair__ColorId_String) * aRef->capacity);
    }
    ((Pair__ColorId_String*)aRef->data)[aRef->len - 1] = value;
}

Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Array__uint8_t) * a.capacity);
    }
    ((Array__uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__Char(Array a, Char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Char) * a.capacity);
    }
    ((Char*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(PatternMatchResult) * a.capacity);
    }
    ((PatternMatchResult*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(uint8_t) * a.capacity);
    }
    ((uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

int Array_reduce__int_int(Lambda* f, int x, Array__int* xs) {
    int _47;
    /* let */ {
        int total = x;
        /* let */ {
            int i = 0;
            int _20 = Array_length__int(xs);
            bool _21 = Int__LT_(i, _20);
            bool _43 = _21;
            while (_43) {
                int* _32 = Array_unsafe_MINUS_nth__int(xs, i);
                int _33 = (*f).env ? ((int(*)(LambdaEnv, int, int*))(*f).callback)((*f).env, total, _32) : ((int(*)(int, int*))(*f).callback)(total, _32);
                total = _33;  // Int = Int
                int _40 = Int__PLUS_(i, 1);
                i = _40;  // Int = Int
                int _20 = Array_length__int(xs);
                bool _21 = Int__LT_(i, _20);
                _43 = _21;
            }
        }
        int _46 = total;
        _47 = _46;
    }
    return _47;
}

Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f) {
    Array__Bucket__ColorId_String _44;
    /* let */ {
        Array__Bucket__ColorId_String _9 = Array_allocate__Bucket__ColorId_String(n);
        Array__Bucket__ColorId_String a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _40 = _20;
            while (_40) {
                Array__Bucket__ColorId_String* _25 = &a; // ref
                Bucket__ColorId_String _30 = (*f).env ? ((Bucket__ColorId_String(*)(LambdaEnv))(*f).callback)((*f).env) : ((Bucket__ColorId_String(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String(_25, i, _30);
                int _37 = Int__PLUS_(i, 1);
                i = _37;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _40 = _20;
            }
        }
        Array__Bucket__ColorId_String _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_repeat__Char(int n, Lambda* f) {
    Array__Char _44;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _40 = _20;
            while (_40) {
                Array__Char* _25 = &a; // ref
                Char _30 = (*f).env ? ((Char(*)(LambdaEnv))(*f).callback)((*f).env) : ((Char(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _30);
                int _37 = Int__PLUS_(i, 1);
                i = _37;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _40 = _20;
            }
        }
        Array__Char _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_replicate__Char(int n, Char* e) {
    Array__Char _43;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__Char* _25 = &a; // ref
                Char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__Char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__float Array_replicate__float(int n, float* e) {
    Array__float _43;
    /* let */ {
        Array__float _9 = Array_allocate__float(n);
        Array__float a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__float* _25 = &a; // ref
                float _29 = Float_copy(e);
                Array_aset_MINUS_uninitialized_BANG___float(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__float _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__Char Array_reverse__Char(Array__Char a) {
    Array__Char _72;
    /* let */ {
        int i = 0;
        Array__Char* _12 = &a; // ref
        int _13 = Array_length__Char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__Char* _28 = &a; // ref
                Char* _30 = Array_unsafe_MINUS_nth__Char(_28, i);
                Char _31 = Char_copy(_30);
                Char tmp = _31;
                Array__Char* _37 = &a; // ref
                Array__Char* _43 = &a; // ref
                Char* _45 = Array_unsafe_MINUS_nth__Char(_43, j);
                Char _46 = Char_copy(_45);
                Array_aset_BANG___Char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__Char* _57 = &a; // ref
                Array_aset_BANG___Char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__Char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__Char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Char) * 0) };
        Array__Char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                Char* _29 = Array_unsafe_MINUS_nth__Char(xs, i);
                Char _30 = Char_copy(_29);
                Array__Char _31 = Array_push_MINUS_back__Char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__Char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__uint8_t _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
        Array__uint8_t result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, i);
                uint8_t _30 = Byte_copy(_29);
                Array__uint8_t _31 = Array_push_MINUS_back__uint8_t(result, _30);
                result = _31;  // (Array Byte) = (Array Byte)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__uint8_t _44 = result;
        _45 = _44;
    }
    return _45;
}

String Array_str__float (Array* a) {
  String temp = NULL;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = Float_prn(((float*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(buffer, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = Float_prn(((float*)a->data)[i]);
    sprintf(bufferPtr, "%s ", temp);
    bufferPtr += strlen(temp) + 1;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  sprintf(bufferPtr, "]");
  return buffer;
}

Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index) {
    int _10 = Array_length__Char(xs);
    Array__Char _11 = Array_slice__Char(xs, start_MINUS_index, _10);
    return _11;
}

Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i) { return ((Pair__ColorId_String*)a->data)[i]; }
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Array__uint8_t*)a.data)[n]);
}

Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Bucket__ColorId_String*)a.data)[n]);
}

Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Char*)a.data)[n]);
}

Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Pair__ColorId_String*)a.data)[n]);
}

PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((PatternMatchResult*)a.data)[n]);
}

Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint16_Array__uint8_t*)a.data)[n]);
}

Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint32_Array__uint8_t*)a.data)[n]);
}

Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint64_Array__uint8_t*)a.data)[n]);
}

String* Array_unsafe_MINUS_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((String*)a.data)[n]);
}

Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint16*)a.data)[n]);
}

Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint32*)a.data)[n]);
}

Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint64*)a.data)[n]);
}

float* Array_unsafe_MINUS_nth__float (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((float*)a.data)[n]);
}

int* Array_unsafe_MINUS_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((int*)a.data)[n]);
}

uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((uint8_t*)a.data)[n]);
}

Array__uint8_t Array_zero__uint8_t() {
    Array _3 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
    return _3;
}

Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint16 _14 = (*_env->f).env ? ((Maybe__Uint16(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint16(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint16_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint16_Nothing_tag) {
        Maybe__Uint16 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint16_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint16(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint16_Just_tag) {
        Maybe__Uint16 _14_temp = _14;
        Uint16 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint16_Array__uint8_t _27 = Result_Success__Uint16_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint32 _14 = (*_env->f).env ? ((Maybe__Uint32(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint32(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint32_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint32_Nothing_tag) {
        Maybe__Uint32 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint32_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint32(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint32_Just_tag) {
        Maybe__Uint32 _14_temp = _14;
        Uint32 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint32_Array__uint8_t _27 = Result_Success__Uint32_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint64 _14 = (*_env->f).env ? ((Maybe__Uint64(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint64(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint64_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint64_Nothing_tag) {
        Maybe__Uint64 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint64_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint64(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint64_Just_tag) {
        Maybe__Uint64 _14_temp = _14;
        Uint64 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint64_Array__uint8_t _27 = Result_Success__Uint64_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b) {
    uint8_t _12 = Byte_copy(b);
    String _13 = Binary_to_MINUS_hex_MINUS_str(_12);
    return _13;
}

Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i) {
    Uint16 _14 = Uint16_copy(i);
    Array__uint8_t _15 = Binary_int16_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint32 _14 = Uint32_from_MINUS_long(lng);
    Uint32 _15 = Uint32_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i) {
    Uint32 _14 = Uint32_copy(i);
    Array__uint8_t _15 = Binary_int32_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint64 _14 = Uint64_from_MINUS_long(lng);
    Uint64 _15 = Uint64_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i) {
    Uint64 _14 = Uint64_copy(i);
    Array__uint8_t _15 = Binary_int64_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint16 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int16(_env->order, b);
    return _18;
}

Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint32 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int32(_env->order, b);
    return _18;
}

Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint64 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int64(_env->order, b);
    return _18;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy
    };
    return _29;
}

String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs) {
    String _27;
    /* let */ {
        // This lambda captures 0 variables: 
        Lambda _14 = {
          .callback = (void*)Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env,
          .env = NULL,
          .delete = (void*)NULL,
          .copy = (void*)NULL
        };
        Lambda f = _14;
        static String _17 = " ";
        String *_17_ref = &_17;
        Lambda* _22 = &f; // ref
        Array__String _24 = Array_copy_MINUS_map__uint8_t_String(_22, bs);
        Array__String* _25 = &_24; // ref
        String _26 = String_join(_17_ref, _25);
        _27 = _26;
        Array_delete__String(_24);
        Function_delete__uint8_t_MUL__String(f);
    }
    return _27;
}

Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes) {
    Maybe__Uint16 _83;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bytes, 0);
        Maybe__Uint16 _44;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint16 _17 = Maybe_Nothing__Uint16();
            _44 = _17;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1009 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bytes, 1);
            Maybe__Uint16 _43;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint16 _29 = Maybe_Nothing__Uint16();
                _43 = _29;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1010 = _25_temp.u.Just.member0;
                // Case expr:
                Lambda _36 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _37 = &_36; // ref
                Uint16 _41 = (*_37).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_37).callback)((*_37).env, zip1009, zip1010) : ((Uint16(*)(uint8_t, uint8_t))(*_37).callback)(zip1009, zip1010);
                Maybe__Uint16 _42 = Maybe_Just__Uint16(_41);
                _43 = _42;
            }
            else UNHANDLED("dummy-file", 0);
            _44 = _43;
        }
        else UNHANDLED("dummy-file", 0);
        _83 = _44;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _51 = Array_nth__uint8_t(bytes, 1);
        Maybe__Uint16 _82;
        if(_51._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _51_temp = _51;
            // Case expr:
            Maybe__Uint16 _55 = Maybe_Nothing__Uint16();
            _82 = _55;
        }
        else if(_51._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _51_temp = _51;
            uint8_t zip1011 = _51_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _63 = Array_nth__uint8_t(bytes, 0);
            Maybe__Uint16 _81;
            if(_63._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _63_temp = _63;
                // Case expr:
                Maybe__Uint16 _67 = Maybe_Nothing__Uint16();
                _81 = _67;
            }
            else if(_63._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _63_temp = _63;
                uint8_t zip1012 = _63_temp.u.Just.member0;
                // Case expr:
                Lambda _74 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _75 = &_74; // ref
                Uint16 _79 = (*_75).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_75).callback)((*_75).env, zip1011, zip1012) : ((Uint16(*)(uint8_t, uint8_t))(*_75).callback)(zip1011, zip1012);
                Maybe__Uint16 _80 = Maybe_Just__Uint16(_79);
                _81 = _80;
            }
            else UNHANDLED("dummy-file", 0);
            _82 = _81;
        }
        else UNHANDLED("dummy-file", 0);
        _83 = _82;
    }
    else UNHANDLED("Binary.carp", 112);
    return _83;
}

Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint16_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int16 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(_15, order);
        Lambda f = _17;
        Pair__Array__Uint16_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint16_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(_24, _27);
            Array__Result__Uint16_Array__uint8_t results = _28;
            Array__Result__Uint16_Array__uint8_t* _34 = &results; // ref
            Array__Uint16 _35 = Binary_interpreted__Uint16_Array__uint8_t(_34);
            Array__Result__Uint16_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint16_uint8_t(_39);
            Pair__Array__Uint16_int _41 = Pair_init__Array__Uint16_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint16_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint16_int _46;
    /* let */ {
        Pair__Array__Uint16_int _10 = Binary_bytes_MINUS__GT_int16_MINUS_seq(order, bs);
        Pair__Array__Uint16_int r = _10;
        Result__Array__Uint16_int _45;
        Pair__Array__Uint16_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint16_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint16_int* _29 = &r; // ref
            Array__Uint16* _30 = Pair_a__Array__Uint16_int(_29);
            Array__Uint16 _31 = Array_copy__Uint16(_30);
            Result__Array__Uint16_int _32 = Result_Success__Array__Uint16_int(_31);
            Result__Array__Uint16_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint16_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint16_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint16_int _43 = Result_Error__int_Array__Uint16(_42);
            Result__Array__Uint16_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint16_int(r);
    }
    return _46;
}

Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint32 _139;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint32 _72;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint32 _17 = Maybe_Nothing__Uint32();
            _72 = _17;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1013 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint32 _71;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint32 _29 = Maybe_Nothing__Uint32();
                _71 = _29;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1014 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint32 _70;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint32 _41 = Maybe_Nothing__Uint32();
                    _70 = _41;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1015 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint32 _69;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint32 _53 = Maybe_Nothing__Uint32();
                        _69 = _53;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1016 = _49_temp.u.Just.member0;
                        // Case expr:
                        Lambda _60 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _61 = &_60; // ref
                        Uint32 _67 = (*_61).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)((*_61).env, zip1013, zip1014, zip1015, zip1016) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)(zip1013, zip1014, zip1015, zip1016);
                        Maybe__Uint32 _68 = Maybe_Just__Uint32(_67);
                        _69 = _68;
                    }
                    else UNHANDLED("dummy-file", 0);
                    _70 = _69;
                }
                else UNHANDLED("dummy-file", 0);
                _71 = _70;
            }
            else UNHANDLED("dummy-file", 0);
            _72 = _71;
        }
        else UNHANDLED("dummy-file", 0);
        _139 = _72;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _79 = Array_nth__uint8_t(bs, 3);
        Maybe__Uint32 _138;
        if(_79._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _79_temp = _79;
            // Case expr:
            Maybe__Uint32 _83 = Maybe_Nothing__Uint32();
            _138 = _83;
        }
        else if(_79._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _79_temp = _79;
            uint8_t zip1017 = _79_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _91 = Array_nth__uint8_t(bs, 2);
            Maybe__Uint32 _137;
            if(_91._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _91_temp = _91;
                // Case expr:
                Maybe__Uint32 _95 = Maybe_Nothing__Uint32();
                _137 = _95;
            }
            else if(_91._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _91_temp = _91;
                uint8_t zip1018 = _91_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _103 = Array_nth__uint8_t(bs, 1);
                Maybe__Uint32 _136;
                if(_103._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    // Case expr:
                    Maybe__Uint32 _107 = Maybe_Nothing__Uint32();
                    _136 = _107;
                }
                else if(_103._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    uint8_t zip1019 = _103_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _115 = Array_nth__uint8_t(bs, 0);
                    Maybe__Uint32 _135;
                    if(_115._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        // Case expr:
                        Maybe__Uint32 _119 = Maybe_Nothing__Uint32();
                        _135 = _119;
                    }
                    else if(_115._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        uint8_t zip1020 = _115_temp.u.Just.member0;
                        // Case expr:
                        Lambda _126 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _127 = &_126; // ref
                        Uint32 _133 = (*_127).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)((*_127).env, zip1017, zip1018, zip1019, zip1020) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)(zip1017, zip1018, zip1019, zip1020);
                        Maybe__Uint32 _134 = Maybe_Just__Uint32(_133);
                        _135 = _134;
                    }
                    else UNHANDLED("dummy-file", 0);
                    _136 = _135;
                }
                else UNHANDLED("dummy-file", 0);
                _137 = _136;
            }
            else UNHANDLED("dummy-file", 0);
            _138 = _137;
        }
        else UNHANDLED("dummy-file", 0);
        _139 = _138;
    }
    else UNHANDLED("Binary.carp", 186);
    return _139;
}

Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint32_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int32 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(_15, order);
        Lambda f = _17;
        Pair__Array__Uint32_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint32_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(_24, _27);
            Array__Result__Uint32_Array__uint8_t results = _28;
            Array__Result__Uint32_Array__uint8_t* _34 = &results; // ref
            Array__Uint32 _35 = Binary_interpreted__Uint32_Array__uint8_t(_34);
            Array__Result__Uint32_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint32_uint8_t(_39);
            Pair__Array__Uint32_int _41 = Pair_init__Array__Uint32_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint32_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint32_int _46;
    /* let */ {
        Pair__Array__Uint32_int _10 = Binary_bytes_MINUS__GT_int32_MINUS_seq(order, bs);
        Pair__Array__Uint32_int r = _10;
        Result__Array__Uint32_int _45;
        Pair__Array__Uint32_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint32_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint32_int* _29 = &r; // ref
            Array__Uint32* _30 = Pair_a__Array__Uint32_int(_29);
            Array__Uint32 _31 = Array_copy__Uint32(_30);
            Result__Array__Uint32_int _32 = Result_Success__Array__Uint32_int(_31);
            Result__Array__Uint32_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint32_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint32_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint32_int _43 = Result_Error__int_Array__Uint32(_42);
            Result__Array__Uint32_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint32_int(r);
    }
    return _46;
}

Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint64 _251;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint64 _128;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint64 _17 = Maybe_Nothing__Uint64();
            _128 = _17;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1021 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint64 _127;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint64 _29 = Maybe_Nothing__Uint64();
                _127 = _29;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1022 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint64 _126;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint64 _41 = Maybe_Nothing__Uint64();
                    _126 = _41;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1023 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint64 _125;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint64 _53 = Maybe_Nothing__Uint64();
                        _125 = _53;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1024 = _49_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _61 = Array_nth__uint8_t(bs, 4);
                        Maybe__Uint64 _124;
                        if(_61._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            // Case expr:
                            Maybe__Uint64 _65 = Maybe_Nothing__Uint64();
                            _124 = _65;
                        }
                        else if(_61._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            uint8_t zip1025 = _61_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _73 = Array_nth__uint8_t(bs, 5);
                            Maybe__Uint64 _123;
                            if(_73._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                // Case expr:
                                Maybe__Uint64 _77 = Maybe_Nothing__Uint64();
                                _123 = _77;
                            }
                            else if(_73._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                uint8_t zip1026 = _73_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _85 = Array_nth__uint8_t(bs, 6);
                                Maybe__Uint64 _122;
                                if(_85._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    // Case expr:
                                    Maybe__Uint64 _89 = Maybe_Nothing__Uint64();
                                    _122 = _89;
                                }
                                else if(_85._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    uint8_t zip1027 = _85_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _97 = Array_nth__uint8_t(bs, 7);
                                    Maybe__Uint64 _121;
                                    if(_97._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        // Case expr:
                                        Maybe__Uint64 _101 = Maybe_Nothing__Uint64();
                                        _121 = _101;
                                    }
                                    else if(_97._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        uint8_t zip1028 = _97_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _108 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _109 = &_108; // ref
                                        Uint64 _119 = (*_109).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)((*_109).env, zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)(zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028);
                                        Maybe__Uint64 _120 = Maybe_Just__Uint64(_119);
                                        _121 = _120;
                                    }
                                    else UNHANDLED("dummy-file", 0);
                                    _122 = _121;
                                }
                                else UNHANDLED("dummy-file", 0);
                                _123 = _122;
                            }
                            else UNHANDLED("dummy-file", 0);
                            _124 = _123;
                        }
                        else UNHANDLED("dummy-file", 0);
                        _125 = _124;
                    }
                    else UNHANDLED("dummy-file", 0);
                    _126 = _125;
                }
                else UNHANDLED("dummy-file", 0);
                _127 = _126;
            }
            else UNHANDLED("dummy-file", 0);
            _128 = _127;
        }
        else UNHANDLED("dummy-file", 0);
        _251 = _128;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _135 = Array_nth__uint8_t(bs, 7);
        Maybe__Uint64 _250;
        if(_135._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _135_temp = _135;
            // Case expr:
            Maybe__Uint64 _139 = Maybe_Nothing__Uint64();
            _250 = _139;
        }
        else if(_135._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _135_temp = _135;
            uint8_t zip1029 = _135_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _147 = Array_nth__uint8_t(bs, 6);
            Maybe__Uint64 _249;
            if(_147._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _147_temp = _147;
                // Case expr:
                Maybe__Uint64 _151 = Maybe_Nothing__Uint64();
                _249 = _151;
            }
            else if(_147._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _147_temp = _147;
                uint8_t zip1030 = _147_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _159 = Array_nth__uint8_t(bs, 5);
                Maybe__Uint64 _248;
                if(_159._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    // Case expr:
                    Maybe__Uint64 _163 = Maybe_Nothing__Uint64();
                    _248 = _163;
                }
                else if(_159._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    uint8_t zip1031 = _159_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _171 = Array_nth__uint8_t(bs, 4);
                    Maybe__Uint64 _247;
                    if(_171._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        // Case expr:
                        Maybe__Uint64 _175 = Maybe_Nothing__Uint64();
                        _247 = _175;
                    }
                    else if(_171._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        uint8_t zip1032 = _171_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _183 = Array_nth__uint8_t(bs, 3);
                        Maybe__Uint64 _246;
                        if(_183._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            // Case expr:
                            Maybe__Uint64 _187 = Maybe_Nothing__Uint64();
                            _246 = _187;
                        }
                        else if(_183._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            uint8_t zip1033 = _183_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _195 = Array_nth__uint8_t(bs, 2);
                            Maybe__Uint64 _245;
                            if(_195._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                // Case expr:
                                Maybe__Uint64 _199 = Maybe_Nothing__Uint64();
                                _245 = _199;
                            }
                            else if(_195._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                uint8_t zip1034 = _195_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _207 = Array_nth__uint8_t(bs, 1);
                                Maybe__Uint64 _244;
                                if(_207._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    // Case expr:
                                    Maybe__Uint64 _211 = Maybe_Nothing__Uint64();
                                    _244 = _211;
                                }
                                else if(_207._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    uint8_t zip1035 = _207_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _219 = Array_nth__uint8_t(bs, 0);
                                    Maybe__Uint64 _243;
                                    if(_219._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        // Case expr:
                                        Maybe__Uint64 _223 = Maybe_Nothing__Uint64();
                                        _243 = _223;
                                    }
                                    else if(_219._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        uint8_t zip1036 = _219_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _230 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _231 = &_230; // ref
                                        Uint64 _241 = (*_231).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)((*_231).env, zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)(zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036);
                                        Maybe__Uint64 _242 = Maybe_Just__Uint64(_241);
                                        _243 = _242;
                                    }
                                    else UNHANDLED("dummy-file", 0);
                                    _244 = _243;
                                }
                                else UNHANDLED("dummy-file", 0);
                                _245 = _244;
                            }
                            else UNHANDLED("dummy-file", 0);
                            _246 = _245;
                        }
                        else UNHANDLED("dummy-file", 0);
                        _247 = _246;
                    }
                    else UNHANDLED("dummy-file", 0);
                    _248 = _247;
                }
                else UNHANDLED("dummy-file", 0);
                _249 = _248;
            }
            else UNHANDLED("dummy-file", 0);
            _250 = _249;
        }
        else UNHANDLED("dummy-file", 0);
        _251 = _250;
    }
    else UNHANDLED("Binary.carp", 269);
    return _251;
}

Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint64_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int64 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(_15, order);
        Lambda f = _17;
        Pair__Array__Uint64_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint64_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(_24, _27);
            Array__Result__Uint64_Array__uint8_t results = _28;
            Array__Result__Uint64_Array__uint8_t* _34 = &results; // ref
            Array__Uint64 _35 = Binary_interpreted__Uint64_Array__uint8_t(_34);
            Array__Result__Uint64_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint64_uint8_t(_39);
            Pair__Array__Uint64_int _41 = Pair_init__Array__Uint64_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint64_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint64_int _46;
    /* let */ {
        Pair__Array__Uint64_int _10 = Binary_bytes_MINUS__GT_int64_MINUS_seq(order, bs);
        Pair__Array__Uint64_int r = _10;
        Result__Array__Uint64_int _45;
        Pair__Array__Uint64_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint64_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint64_int* _29 = &r; // ref
            Array__Uint64* _30 = Pair_a__Array__Uint64_int(_29);
            Array__Uint64 _31 = Array_copy__Uint64(_30);
            Result__Array__Uint64_int _32 = Result_Success__Array__Uint64_int(_31);
            Result__Array__Uint64_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint64_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint64_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint64_int _43 = Result_Error__int_Array__Uint64(_42);
            Result__Array__Uint64_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint64_int(r);
    }
    return _46;
}

Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i) {
    Array__uint8_t _41;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _11 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _12 = &_11; // ref
        Array _21 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        ((Uint16*)_21.data)[0] = i;
        Uint16 _19 = Uint16_from_MINUS_long(8l);
        Uint16 _20 = Uint16_bit_MINUS_shift_MINUS_right(i, _19);
        ((Uint16*)_21.data)[1] = _20;
        Array__Uint16* _22 = &_21; // ref
        Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_uint8_t(_12, _22);
        _41 = _23;
        Array_delete__Uint16(_21);
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _28 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _29 = &_28; // ref
        Array _38 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        Uint16 _35 = Uint16_from_MINUS_long(8l);
        Uint16 _36 = Uint16_bit_MINUS_shift_MINUS_right(i, _35);
        ((Uint16*)_38.data)[0] = _36;
        ((Uint16*)_38.data)[1] = i;
        Array__Uint16* _39 = &_38; // ref
        Array__uint8_t _40 = Array_copy_MINUS_map__Uint16_uint8_t(_29, _39);
        _41 = _40;
        Array_delete__Uint16(_38);
    }
    else UNHANDLED("Binary.carp", 122);
    return _41;
}

Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint16_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i) {
    Array__uint8_t _61;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _60;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _37 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            ((Uint32*)_37.data)[0] = i;
            Uint32 _30 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_37.data)[1] = _30;
            Uint32 _33 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_37.data)[2] = _33;
            Uint32 _36 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_37.data)[3] = _36;
            Array__Uint32* _38 = &_37; // ref
            Array__uint8_t _39 = Array_copy_MINUS_map__Uint32_uint8_t(_25, _38);
            _60 = _39;
            Array_delete__Uint32(_37);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _44 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _45 = &_44; // ref
            Array _57 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            Uint32 _49 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_57.data)[0] = _49;
            Uint32 _52 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_57.data)[1] = _52;
            Uint32 _55 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_57.data)[2] = _55;
            ((Uint32*)_57.data)[3] = i;
            Array__Uint32* _58 = &_57; // ref
            Array__uint8_t _59 = Array_copy_MINUS_map__Uint32_uint8_t(_45, _58);
            _60 = _59;
            Array_delete__Uint32(_57);
        }
        else UNHANDLED("Binary.carp", 199);
        _61 = _60;
        Function_delete__Long_Uint32(shift);
    }
    return _61;
}

Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint32_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint32_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i) {
    Array__uint8_t _85;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _84;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _49 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            ((Uint64*)_49.data)[0] = i;
            Uint64 _30 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_49.data)[1] = _30;
            Uint64 _33 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_49.data)[2] = _33;
            Uint64 _36 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_49.data)[3] = _36;
            Uint64 _39 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_49.data)[4] = _39;
            Uint64 _42 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_49.data)[5] = _42;
            Uint64 _45 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_49.data)[6] = _45;
            Uint64 _48 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_49.data)[7] = _48;
            Array__Uint64* _50 = &_49; // ref
            Array__uint8_t _51 = Array_copy_MINUS_map__Uint64_uint8_t(_25, _50);
            _84 = _51;
            Array_delete__Uint64(_49);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _56 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _57 = &_56; // ref
            Array _81 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            Uint64 _61 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_81.data)[0] = _61;
            Uint64 _64 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_81.data)[1] = _64;
            Uint64 _67 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_81.data)[2] = _67;
            Uint64 _70 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_81.data)[3] = _70;
            Uint64 _73 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_81.data)[4] = _73;
            Uint64 _76 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_81.data)[5] = _76;
            Uint64 _79 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_81.data)[6] = _79;
            ((Uint64*)_81.data)[7] = i;
            Array__Uint64* _82 = &_81; // ref
            Array__uint8_t _83 = Array_copy_MINUS_map__Uint64_uint8_t(_57, _82);
            _84 = _83;
            Array_delete__Uint64(_81);
        }
        else UNHANDLED("Binary.carp", 285);
        _85 = _84;
        Function_delete__Long_Uint64(shift);
    }
    return _85;
}

Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint64_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint64_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint16_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_12, results);
    Array__Result__Uint16_Array__uint8_t* _15 = &_14; // ref
    Array__Uint16 _16 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(_7, _15);
    Array_delete__Result__Uint16_Array__uint8_t(_14);
    return _16;
}

Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint32_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_12, results);
    Array__Result__Uint32_Array__uint8_t* _15 = &_14; // ref
    Array__Uint32 _16 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(_7, _15);
    Array_delete__Result__Uint32_Array__uint8_t(_14);
    return _16;
}

Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint64_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_12, results);
    Array__Result__Uint64_Array__uint8_t* _15 = &_14; // ref
    Array__Uint64 _16 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(_7, _15);
    Array_delete__Result__Uint64_Array__uint8_t(_14);
    return _16;
}

int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint16_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_33, results);
    Array__Result__Uint16_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint16_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint32_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_33, results);
    Array__Result__Uint32_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint32_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint64_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_33, results);
    Array__Result__Uint64_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint64_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

ByteOrder Binary_system_MINUS_endianness() {
    ByteOrder _17;
    int _6 = Binary_system_MINUS_endianness_MINUS_internal();
    bool _8 = Int__EQ_(_6, 1);
    if (_8) {
        ByteOrder _11 = ByteOrder_LittleEndian();
        ByteOrder _12 = _11;
        _17 = _12;
    } else {
        ByteOrder _15 = ByteOrder_BigEndian();
        ByteOrder _16 = _15;
        _17 = _16;
    }
    return _17;
}

String Binary_to_MINUS_hex_MINUS_str(uint8_t b) {
    String _525;
    /* let */ {
        uint8_t _10 = Byte_from_MINUS_int(240);
        uint8_t _11 = Byte_bit_MINUS_and(b, _10);
        uint8_t hi = _11;
        uint8_t _17 = Byte_from_MINUS_int(4);
        uint8_t _18 = Byte_bit_MINUS_shift_MINUS_left(b, _17);
        uint8_t lo = _18;
        String _267;
        /* let */ {
            uint8_t gensym_MINUS_generated1037 = hi;
            String _266;
            uint8_t _29 = Byte_from_MINUS_int(0);
            bool _30 = Byte__EQ_(gensym_MINUS_generated1037, _29);
            if (_30) {
                static String _33 = "0";
                String *_33_ref = &_33;
                String _34 = String_copy(_33_ref);
                String _35 = _34;
                _266 = _35;
            } else {
                String _264;
                uint8_t _42 = Byte_from_MINUS_int(16);
                bool _43 = Byte__EQ_(gensym_MINUS_generated1037, _42);
                if (_43) {
                    static String _46 = "1";
                    String *_46_ref = &_46;
                    String _47 = String_copy(_46_ref);
                    String _48 = _47;
                    _264 = _48;
                } else {
                    String _262;
                    uint8_t _55 = Byte_from_MINUS_int(32);
                    bool _56 = Byte__EQ_(gensym_MINUS_generated1037, _55);
                    if (_56) {
                        static String _59 = "2";
                        String *_59_ref = &_59;
                        String _60 = String_copy(_59_ref);
                        String _61 = _60;
                        _262 = _61;
                    } else {
                        String _260;
                        uint8_t _68 = Byte_from_MINUS_int(48);
                        bool _69 = Byte__EQ_(gensym_MINUS_generated1037, _68);
                        if (_69) {
                            static String _72 = "3";
                            String *_72_ref = &_72;
                            String _73 = String_copy(_72_ref);
                            String _74 = _73;
                            _260 = _74;
                        } else {
                            String _258;
                            uint8_t _81 = Byte_from_MINUS_int(64);
                            bool _82 = Byte__EQ_(gensym_MINUS_generated1037, _81);
                            if (_82) {
                                static String _85 = "4";
                                String *_85_ref = &_85;
                                String _86 = String_copy(_85_ref);
                                String _87 = _86;
                                _258 = _87;
                            } else {
                                String _256;
                                uint8_t _94 = Byte_from_MINUS_int(80);
                                bool _95 = Byte__EQ_(gensym_MINUS_generated1037, _94);
                                if (_95) {
                                    static String _98 = "5";
                                    String *_98_ref = &_98;
                                    String _99 = String_copy(_98_ref);
                                    String _100 = _99;
                                    _256 = _100;
                                } else {
                                    String _254;
                                    uint8_t _107 = Byte_from_MINUS_int(96);
                                    bool _108 = Byte__EQ_(gensym_MINUS_generated1037, _107);
                                    if (_108) {
                                        static String _111 = "6";
                                        String *_111_ref = &_111;
                                        String _112 = String_copy(_111_ref);
                                        String _113 = _112;
                                        _254 = _113;
                                    } else {
                                        String _252;
                                        uint8_t _120 = Byte_from_MINUS_int(112);
                                        bool _121 = Byte__EQ_(gensym_MINUS_generated1037, _120);
                                        if (_121) {
                                            static String _124 = "7";
                                            String *_124_ref = &_124;
                                            String _125 = String_copy(_124_ref);
                                            String _126 = _125;
                                            _252 = _126;
                                        } else {
                                            String _250;
                                            uint8_t _133 = Byte_from_MINUS_int(128);
                                            bool _134 = Byte__EQ_(gensym_MINUS_generated1037, _133);
                                            if (_134) {
                                                static String _137 = "8";
                                                String *_137_ref = &_137;
                                                String _138 = String_copy(_137_ref);
                                                String _139 = _138;
                                                _250 = _139;
                                            } else {
                                                String _248;
                                                uint8_t _146 = Byte_from_MINUS_int(144);
                                                bool _147 = Byte__EQ_(gensym_MINUS_generated1037, _146);
                                                if (_147) {
                                                    static String _150 = "9";
                                                    String *_150_ref = &_150;
                                                    String _151 = String_copy(_150_ref);
                                                    String _152 = _151;
                                                    _248 = _152;
                                                } else {
                                                    String _246;
                                                    uint8_t _159 = Byte_from_MINUS_int(160);
                                                    bool _160 = Byte__EQ_(gensym_MINUS_generated1037, _159);
                                                    if (_160) {
                                                        static String _163 = "A";
                                                        String *_163_ref = &_163;
                                                        String _164 = String_copy(_163_ref);
                                                        String _165 = _164;
                                                        _246 = _165;
                                                    } else {
                                                        String _244;
                                                        uint8_t _172 = Byte_from_MINUS_int(176);
                                                        bool _173 = Byte__EQ_(gensym_MINUS_generated1037, _172);
                                                        if (_173) {
                                                            static String _176 = "B";
                                                            String *_176_ref = &_176;
                                                            String _177 = String_copy(_176_ref);
                                                            String _178 = _177;
                                                            _244 = _178;
                                                        } else {
                                                            String _242;
                                                            uint8_t _185 = Byte_from_MINUS_int(192);
                                                            bool _186 = Byte__EQ_(gensym_MINUS_generated1037, _185);
                                                            if (_186) {
                                                                static String _189 = "C";
                                                                String *_189_ref = &_189;
                                                                String _190 = String_copy(_189_ref);
                                                                String _191 = _190;
                                                                _242 = _191;
                                                            } else {
                                                                String _240;
                                                                uint8_t _198 = Byte_from_MINUS_int(208);
                                                                bool _199 = Byte__EQ_(gensym_MINUS_generated1037, _198);
                                                                if (_199) {
                                                                    static String _202 = "D";
                                                                    String *_202_ref = &_202;
                                                                    String _203 = String_copy(_202_ref);
                                                                    String _204 = _203;
                                                                    _240 = _204;
                                                                } else {
                                                                    String _238;
                                                                    uint8_t _211 = Byte_from_MINUS_int(224);
                                                                    bool _212 = Byte__EQ_(gensym_MINUS_generated1037, _211);
                                                                    if (_212) {
                                                                        static String _215 = "E";
                                                                        String *_215_ref = &_215;
                                                                        String _216 = String_copy(_215_ref);
                                                                        String _217 = _216;
                                                                        _238 = _217;
                                                                    } else {
                                                                        String _236;
                                                                        uint8_t _224 = Byte_from_MINUS_int(240);
                                                                        bool _225 = Byte__EQ_(gensym_MINUS_generated1037, _224);
                                                                        if (_225) {
                                                                            static String _228 = "F";
                                                                            String *_228_ref = &_228;
                                                                            String _229 = String_copy(_228_ref);
                                                                            String _230 = _229;
                                                                            _236 = _230;
                                                                        } else {
                                                                            static String _233 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_233_ref = &_233;
                                                                            String _234 = String_copy(_233_ref);
                                                                            String _235 = _234;
                                                                            _236 = _235;
                                                                        }
                                                                        String _237 = _236;
                                                                        _238 = _237;
                                                                    }
                                                                    String _239 = _238;
                                                                    _240 = _239;
                                                                }
                                                                String _241 = _240;
                                                                _242 = _241;
                                                            }
                                                            String _243 = _242;
                                                            _244 = _243;
                                                        }
                                                        String _245 = _244;
                                                        _246 = _245;
                                                    }
                                                    String _247 = _246;
                                                    _248 = _247;
                                                }
                                                String _249 = _248;
                                                _250 = _249;
                                            }
                                            String _251 = _250;
                                            _252 = _251;
                                        }
                                        String _253 = _252;
                                        _254 = _253;
                                    }
                                    String _255 = _254;
                                    _256 = _255;
                                }
                                String _257 = _256;
                                _258 = _257;
                            }
                            String _259 = _258;
                            _260 = _259;
                        }
                        String _261 = _260;
                        _262 = _261;
                    }
                    String _263 = _262;
                    _264 = _263;
                }
                String _265 = _264;
                _266 = _265;
            }
            _267 = _266;
        }
        String nib_MINUS_one = _267;
        String _516;
        /* let */ {
            uint8_t gensym_MINUS_generated1038 = lo;
            String _515;
            uint8_t _278 = Byte_from_MINUS_int(0);
            bool _279 = Byte__EQ_(gensym_MINUS_generated1038, _278);
            if (_279) {
                static String _282 = "0";
                String *_282_ref = &_282;
                String _283 = String_copy(_282_ref);
                String _284 = _283;
                _515 = _284;
            } else {
                String _513;
                uint8_t _291 = Byte_from_MINUS_int(16);
                bool _292 = Byte__EQ_(gensym_MINUS_generated1038, _291);
                if (_292) {
                    static String _295 = "1";
                    String *_295_ref = &_295;
                    String _296 = String_copy(_295_ref);
                    String _297 = _296;
                    _513 = _297;
                } else {
                    String _511;
                    uint8_t _304 = Byte_from_MINUS_int(32);
                    bool _305 = Byte__EQ_(gensym_MINUS_generated1038, _304);
                    if (_305) {
                        static String _308 = "2";
                        String *_308_ref = &_308;
                        String _309 = String_copy(_308_ref);
                        String _310 = _309;
                        _511 = _310;
                    } else {
                        String _509;
                        uint8_t _317 = Byte_from_MINUS_int(48);
                        bool _318 = Byte__EQ_(gensym_MINUS_generated1038, _317);
                        if (_318) {
                            static String _321 = "3";
                            String *_321_ref = &_321;
                            String _322 = String_copy(_321_ref);
                            String _323 = _322;
                            _509 = _323;
                        } else {
                            String _507;
                            uint8_t _330 = Byte_from_MINUS_int(64);
                            bool _331 = Byte__EQ_(gensym_MINUS_generated1038, _330);
                            if (_331) {
                                static String _334 = "4";
                                String *_334_ref = &_334;
                                String _335 = String_copy(_334_ref);
                                String _336 = _335;
                                _507 = _336;
                            } else {
                                String _505;
                                uint8_t _343 = Byte_from_MINUS_int(80);
                                bool _344 = Byte__EQ_(gensym_MINUS_generated1038, _343);
                                if (_344) {
                                    static String _347 = "5";
                                    String *_347_ref = &_347;
                                    String _348 = String_copy(_347_ref);
                                    String _349 = _348;
                                    _505 = _349;
                                } else {
                                    String _503;
                                    uint8_t _356 = Byte_from_MINUS_int(96);
                                    bool _357 = Byte__EQ_(gensym_MINUS_generated1038, _356);
                                    if (_357) {
                                        static String _360 = "6";
                                        String *_360_ref = &_360;
                                        String _361 = String_copy(_360_ref);
                                        String _362 = _361;
                                        _503 = _362;
                                    } else {
                                        String _501;
                                        uint8_t _369 = Byte_from_MINUS_int(112);
                                        bool _370 = Byte__EQ_(gensym_MINUS_generated1038, _369);
                                        if (_370) {
                                            static String _373 = "7";
                                            String *_373_ref = &_373;
                                            String _374 = String_copy(_373_ref);
                                            String _375 = _374;
                                            _501 = _375;
                                        } else {
                                            String _499;
                                            uint8_t _382 = Byte_from_MINUS_int(128);
                                            bool _383 = Byte__EQ_(gensym_MINUS_generated1038, _382);
                                            if (_383) {
                                                static String _386 = "8";
                                                String *_386_ref = &_386;
                                                String _387 = String_copy(_386_ref);
                                                String _388 = _387;
                                                _499 = _388;
                                            } else {
                                                String _497;
                                                uint8_t _395 = Byte_from_MINUS_int(144);
                                                bool _396 = Byte__EQ_(gensym_MINUS_generated1038, _395);
                                                if (_396) {
                                                    static String _399 = "9";
                                                    String *_399_ref = &_399;
                                                    String _400 = String_copy(_399_ref);
                                                    String _401 = _400;
                                                    _497 = _401;
                                                } else {
                                                    String _495;
                                                    uint8_t _408 = Byte_from_MINUS_int(160);
                                                    bool _409 = Byte__EQ_(gensym_MINUS_generated1038, _408);
                                                    if (_409) {
                                                        static String _412 = "A";
                                                        String *_412_ref = &_412;
                                                        String _413 = String_copy(_412_ref);
                                                        String _414 = _413;
                                                        _495 = _414;
                                                    } else {
                                                        String _493;
                                                        uint8_t _421 = Byte_from_MINUS_int(176);
                                                        bool _422 = Byte__EQ_(gensym_MINUS_generated1038, _421);
                                                        if (_422) {
                                                            static String _425 = "B";
                                                            String *_425_ref = &_425;
                                                            String _426 = String_copy(_425_ref);
                                                            String _427 = _426;
                                                            _493 = _427;
                                                        } else {
                                                            String _491;
                                                            uint8_t _434 = Byte_from_MINUS_int(192);
                                                            bool _435 = Byte__EQ_(gensym_MINUS_generated1038, _434);
                                                            if (_435) {
                                                                static String _438 = "C";
                                                                String *_438_ref = &_438;
                                                                String _439 = String_copy(_438_ref);
                                                                String _440 = _439;
                                                                _491 = _440;
                                                            } else {
                                                                String _489;
                                                                uint8_t _447 = Byte_from_MINUS_int(208);
                                                                bool _448 = Byte__EQ_(gensym_MINUS_generated1038, _447);
                                                                if (_448) {
                                                                    static String _451 = "D";
                                                                    String *_451_ref = &_451;
                                                                    String _452 = String_copy(_451_ref);
                                                                    String _453 = _452;
                                                                    _489 = _453;
                                                                } else {
                                                                    String _487;
                                                                    uint8_t _460 = Byte_from_MINUS_int(224);
                                                                    bool _461 = Byte__EQ_(gensym_MINUS_generated1038, _460);
                                                                    if (_461) {
                                                                        static String _464 = "E";
                                                                        String *_464_ref = &_464;
                                                                        String _465 = String_copy(_464_ref);
                                                                        String _466 = _465;
                                                                        _487 = _466;
                                                                    } else {
                                                                        String _485;
                                                                        uint8_t _473 = Byte_from_MINUS_int(240);
                                                                        bool _474 = Byte__EQ_(gensym_MINUS_generated1038, _473);
                                                                        if (_474) {
                                                                            static String _477 = "F";
                                                                            String *_477_ref = &_477;
                                                                            String _478 = String_copy(_477_ref);
                                                                            String _479 = _478;
                                                                            _485 = _479;
                                                                        } else {
                                                                            static String _482 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_482_ref = &_482;
                                                                            String _483 = String_copy(_482_ref);
                                                                            String _484 = _483;
                                                                            _485 = _484;
                                                                        }
                                                                        String _486 = _485;
                                                                        _487 = _486;
                                                                    }
                                                                    String _488 = _487;
                                                                    _489 = _488;
                                                                }
                                                                String _490 = _489;
                                                                _491 = _490;
                                                            }
                                                            String _492 = _491;
                                                            _493 = _492;
                                                        }
                                                        String _494 = _493;
                                                        _495 = _494;
                                                    }
                                                    String _496 = _495;
                                                    _497 = _496;
                                                }
                                                String _498 = _497;
                                                _499 = _498;
                                            }
                                            String _500 = _499;
                                            _501 = _500;
                                        }
                                        String _502 = _501;
                                        _503 = _502;
                                    }
                                    String _504 = _503;
                                    _505 = _504;
                                }
                                String _506 = _505;
                                _507 = _506;
                            }
                            String _508 = _507;
                            _509 = _508;
                        }
                        String _510 = _509;
                        _511 = _510;
                    }
                    String _512 = _511;
                    _513 = _512;
                }
                String _514 = _513;
                _515 = _514;
            }
            _516 = _515;
        }
        String nib_MINUS_two = _516;
        Array _522 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
        ((String*)_522.data)[0] = nib_MINUS_one;
        ((String*)_522.data)[1] = nib_MINUS_two;
        Array__String* _523 = &_522; // ref
        String _524 = String_concat(_523);
        _525 = _524;
        Array_delete__String(_522);
    }
    return _525;
}

Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs) {
    Uint16 _39;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        Uint16 _22 = Binary_to_MINUS_int16(_15, _21);
        _39 = _22;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _30 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _31 = Byte_copy(_30);
        uint8_t* _36 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _37 = Byte_copy(_36);
        Uint16 _38 = Binary_to_MINUS_int16(_31, _37);
        _39 = _38;
    }
    else UNHANDLED("Binary.carp", 99);
    return _39;
}

Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint16 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint16 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint16(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint16(f);
    }
    return _29;
}

Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Uint32 _63;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        Uint32 _34 = Binary_to_MINUS_int32(_15, _21, _27, _33);
        _63 = _34;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _42 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _43 = Byte_copy(_42);
        uint8_t* _48 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _49 = Byte_copy(_48);
        uint8_t* _54 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _55 = Byte_copy(_54);
        uint8_t* _60 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _61 = Byte_copy(_60);
        Uint32 _62 = Binary_to_MINUS_int32(_43, _49, _55, _61);
        _63 = _62;
    }
    else UNHANDLED("Binary.carp", 171);
    return _63;
}

Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint32 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint32 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint32(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint32(f);
    }
    return _29;
}

Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Uint64 _111;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        uint8_t* _38 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _39 = Byte_copy(_38);
        uint8_t* _44 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _45 = Byte_copy(_44);
        uint8_t* _50 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _51 = Byte_copy(_50);
        uint8_t* _56 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _57 = Byte_copy(_56);
        Uint64 _58 = Binary_to_MINUS_int64(_15, _21, _27, _33, _39, _45, _51, _57);
        _111 = _58;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _66 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _67 = Byte_copy(_66);
        uint8_t* _72 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _73 = Byte_copy(_72);
        uint8_t* _78 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _79 = Byte_copy(_78);
        uint8_t* _84 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _85 = Byte_copy(_84);
        uint8_t* _90 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _91 = Byte_copy(_90);
        uint8_t* _96 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _97 = Byte_copy(_96);
        uint8_t* _102 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _103 = Byte_copy(_102);
        uint8_t* _108 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _109 = Byte_copy(_108);
        Uint64 _110 = Binary_to_MINUS_int64(_67, _73, _79, _85, _91, _97, _103, _109);
        _111 = _110;
    }
    else UNHANDLED("Binary.carp", 250);
    return _111;
}

Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint64 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint64 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint64(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint64(f);
    }
    return _29;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint16_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint32_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint64_Array__uint8_t(_7, _9);
    return _10;
}

Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Uint16 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(_7);
    return _8;
}

Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Uint32 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(_7);
    return _8;
}

Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Uint64 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(_7);
    return _8;
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64)) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint32 */
    return copy;
}

void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint32 */
}

Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint64 */
    return copy;
}

void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint64 */
}

Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

bool Bool_blit(bool x) {
    bool _7 = x; // From the 'the' function.
    return _7;
}

int Bool_hash(bool* k) {
    int _17;
    bool _9 = Bool_copy(k);
    bool _10 = _9; // From the 'the' function.
    if (_10) {
        int _13 = 1;
        _17 = _13;
    } else {
        int _16 = 0;
        _17 = _16;
    }
    return _17;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Bool_zero() {
    return false;
}

String BoolRef_format(String* s, bool* x) {
    bool _9 = Bool_copy(x);
    String _10 = Bool_format(s, _9);
    return _10;
}

String BoolRef_prn(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

String BoolRef_str(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p) {
    String _19 = String_copy(_env->val);
    Pair__ColorId_String _20 = Pair_set_MINUS_b__ColorId_String(p, _19);
    return _20;
}

void Bucket_delete__ColorId_String(Bucket__ColorId_String p) {
    Array_delete__Pair__ColorId_String(p.entries);
}

Bucket__ColorId_String Bucket_empty__ColorId_String() {
    Array _4 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 0) };
    Bucket__ColorId_String _5 = Bucket_init__ColorId_String(_4);
    return _5;
}

Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p) { return (&(p->entries)); }

int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k) {
    int _64;
    /* let */ {
        int ret = -1;
        Array__Pair__ColorId_String* _12 = Bucket_entries__ColorId_String(b);
        int _13 = Array_length__Pair__ColorId_String(_12);
        int l = _13;
        Array__Pair__ColorId_String* _17 = Bucket_entries__ColorId_String(b);
        Array__Pair__ColorId_String* es = _17;
        /* let */ {
            int i = 0;
            bool _28 = Int__LT_(i, l);
            bool _60 = _28;
            while (_60) {
                Pair__ColorId_String* _36 = Array_unsafe_MINUS_nth__Pair__ColorId_String(es, i);
                ColorId* _37 = Pair_a__ColorId_String(_36);
                bool _39 = Color__EQ___ColorId(_37, k);
                if (_39) {
                    ret = i;  // Int = Int
                    break;
                    // Unreachable:
                } else {
                    /* () */
                }
                int _57 = Int__PLUS_(i, 1);
                i = _57;  // Int = Int
                bool _28 = Int__LT_(i, l);
                _60 = _28;
            }
        }
        int _63 = ret;
        _64 = _63;
    }
    return _64;
}

String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i) {
    Array__Pair__ColorId_String* _10 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String* _12 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_10, i);
    String* _13 = Pair_b__ColorId_String(_12);
    String _14 = String_copy(_13);
    return _14;
}

String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value) {
    String _30;
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        String _29;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            String _22 = Bucket_get_MINUS_idx__ColorId_String(b, i);
            String _23 = _22;
            _29 = _23;
        } else {
            String _27 = String_copy(default_MINUS_value);
            String _28 = _27;
            _29 = _28;
        }
        _30 = _29;
    }
    return _30;
}

Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries) {
    Bucket__ColorId_String instance;
    instance.entries = entries;
    return instance;
}

void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String _13 = Pair_init_MINUS_from_MINUS_refs__ColorId_String(k, v);
    Array_push_MINUS_back_BANG___Pair__ColorId_String(_9, _13);
}

void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            Bucket_set_MINUS_idx_BANG___ColorId_String(b, i, v);
        } else {
            Bucket_push_MINUS_back_BANG___ColorId_String(b, k, v);
        }
    }
}

void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    // This lambda captures 1 variables: val
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty *_21_env = CARP_MALLOC(sizeof(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty));
    _21_env->val = val;
    Lambda _21 = {
      .callback = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env,
      .env = _21_env,
      .delete = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete,
      .copy = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy
    };
    Lambda* _22 = &_21; // ref
    Array_aupdate_BANG___Pair__ColorId_String(_9, i, _22);
    Function_delete__Pair__ColorId_String_Pair__ColorId_String(_21);
}

Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef) {
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'val' : (Ref String <d>) */
    return copy;
}

void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p) {
    /* Ignore non-managed member 'val' : (Ref String <d>) */
}

uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y) {
    uint8_t _8 = Byte_copy(x);
    uint8_t _11 = Byte_copy(y);
    uint8_t _12 = Byte__PLUS_(_8, _11);
    return _12;
}

uint8_t Byte_blit(uint8_t x) {
    uint8_t _7 = x; // From the 'the' function.
    return _7;
}

bool Byte_even_QMARK_(uint8_t a) {
    uint8_t _8 = Byte_mod(a, 2);
    bool _10 = Byte__EQ_(_8, 0);
    return _10;
}

Maybe__uint8_t Byte_from_MINUS_string(String* s) {
    Maybe__uint8_t _25;
    /* let */ {
        uint8_t res = 0;
        Maybe__uint8_t _24;
        uint8_t* _13 = &res; // ref
        bool _14 = Byte_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__uint8_t _18 = Maybe_Just__uint8_t(res);
            Maybe__uint8_t _19 = _18;
            _24 = _19;
        } else {
            Maybe__uint8_t _22 = Maybe_Nothing__uint8_t();
            Maybe__uint8_t _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Byte_hash(uint8_t* k) {
    uint8_t _9 = Byte_copy(k);
    uint8_t _10 = _9; // From the 'the' function.
    int _11 = Byte_to_MINUS_int(_10);
    return _11;
}

bool Byte_odd_QMARK_(uint8_t a) {
    bool _7 = Byte_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

uint8_t Byte_pow(uint8_t x, uint8_t y) {
    uint8_t _55;
    /* let */ {
        uint8_t r = 1;
        bool _14 = _DIV__EQ___uint8_t(y, 0);
        bool _52 = _14;
        while (_52) {
            uint8_t _21 = Byte_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___uint8_t(_21, 0);
            if (_23) {
                uint8_t _30 = Byte__MUL_(r, x);
                r = _30;  // Byte = Byte
            } else {
                /* () */
            }
            uint8_t _42 = Byte__DIV_(y, 2);
            y = _42;  // Byte = Byte
            uint8_t _49 = Byte__MUL_(x, x);
            x = _49;  // Byte = Byte
            bool _14 = _DIV__EQ___uint8_t(y, 0);
            _52 = _14;
        }
        uint8_t _54 = r;
        _55 = _54;
    }
    return _55;
}

String Byte_prn(uint8_t x) {
    String _6 = Byte_str(x);
    return _6;
}

uint8_t Byte_random() {
    int _5 = Int_random();
    uint8_t _6 = Byte_from_MINUS_int(_5);
    return _6;
}

uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper) {
    int _9 = Byte_to_MINUS_int(lower);
    int _12 = Byte_to_MINUS_int(upper);
    int _13 = Int_random_MINUS_between(_9, _12);
    uint8_t _14 = Byte_from_MINUS_int(_13);
    return _14;
}

uint8_t Byte_zero() {
    return 0;
}

ByteOrder ByteOrder_BigEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_BigEndian_tag;
    return instance;
}

ByteOrder ByteOrder_LittleEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_LittleEndian_tag;
    return instance;
}

ByteOrder ByteOrder_blit(ByteOrder x) {
    ByteOrder _7 = x; // From the 'the' function.
    return _7;
}

ByteOrder ByteOrder_copy(ByteOrder* pRef) {
    ByteOrder copy = *pRef;
    if(pRef->_tag == ByteOrder_LittleEndian_tag) {

    }

    else if(pRef->_tag == ByteOrder_BigEndian_tag) {

    }

    return copy;
}

void ByteOrder_delete(ByteOrder p) {
  if(p._tag == ByteOrder_LittleEndian_tag) {

  }
  else if(p._tag == ByteOrder_BigEndian_tag) {

  }

}

int ByteOrder_get_MINUS_tag(ByteOrder *p) { return p->_tag; }
String ByteOrder_prn(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    sprintf(bufferPtr, "(%s ", "LittleEndian");
    bufferPtr += strlen("LittleEndian") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    sprintf(bufferPtr, "(%s ", "BigEndian");
    bufferPtr += strlen("BigEndian") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }

  return buffer;
}

String ByteOrder_str(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    sprintf(bufferPtr, "(%s ", "LittleEndian");
    bufferPtr += strlen("LittleEndian") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    sprintf(bufferPtr, "(%s ", "BigEndian");
    bufferPtr += strlen("BigEndian") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }

  return buffer;
}

bool ByteRef__LT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__LT_(_8, _11);
    return _12;
}

bool ByteRef__EQ_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__EQ_(_8, _11);
    return _12;
}

bool ByteRef__GT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__GT_(_8, _11);
    return _12;
}

String ByteRef_format(String* s, uint8_t* x) {
    uint8_t _9 = Byte_copy(x);
    String _10 = Byte_format(s, _9);
    return _10;
}

String ByteRef_prn(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

String ByteRef_str(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

double* Camera_aspect(Camera* p) { return (&(p->aspect)); }

Camera Camera_copy(Camera* pRef) {
    Camera copy = *pRef;
    copy.pos = Vec3_copy(&(pRef->pos));
    copy.front = Vec3_copy(&(pRef->front));
    copy.right = Vec3_copy(&(pRef->right));
    copy.up = Vec3_copy(&(pRef->up));
    copy.world_MINUS_up = Vec3_copy(&(pRef->world_MINUS_up));
    /* Ignore non-managed member 'yaw' : Double */
    /* Ignore non-managed member 'pitch' : Double */
    /* Ignore non-managed member 'fov' : Double */
    /* Ignore non-managed member 'aspect' : Double */
    /* Ignore non-managed member 'near' : Double */
    /* Ignore non-managed member 'far' : Double */
    return copy;
}

void Camera_delete(Camera p) {
    Vec3_delete(p.pos);
    Vec3_delete(p.front);
    Vec3_delete(p.right);
    Vec3_delete(p.up);
    Vec3_delete(p.world_MINUS_up);
    /* Ignore non-managed member 'yaw' : Double */
    /* Ignore non-managed member 'pitch' : Double */
    /* Ignore non-managed member 'fov' : Double */
    /* Ignore non-managed member 'aspect' : Double */
    /* Ignore non-managed member 'near' : Double */
    /* Ignore non-managed member 'far' : Double */
}

double* Camera_far(Camera* p) { return (&(p->far)); }

double* Camera_fov(Camera* p) { return (&(p->fov)); }

Vec3* Camera_front(Camera* p) { return (&(p->front)); }

Camera Camera_init(Vec3 pos, Vec3 front, Vec3 right, Vec3 up, Vec3 world_MINUS_up, double yaw, double pitch, double fov, double aspect, double near, double far) {
    Camera instance;
    instance.pos = pos;
    instance.front = front;
    instance.right = right;
    instance.up = up;
    instance.world_MINUS_up = world_MINUS_up;
    instance.yaw = yaw;
    instance.pitch = pitch;
    instance.fov = fov;
    instance.aspect = aspect;
    instance.near = near;
    instance.far = far;
    return instance;
}

Mat4 Camera_look_MINUS_at(Camera* c) {
    Mat4 _245;
    /* let */ {
        Vec3* _8 = Camera_front(c);
        Vec3* f = _8;
        Vec3* _12 = Camera_right(c);
        Vec3* s = _12;
        Vec3* _16 = Camera_up(c);
        Vec3* u = _16;
        Vec3* _20 = Camera_pos(c);
        Vec3* p = _20;
        static float _26_lit = 0.0f;
        float* _26 = &_26_lit; // ref
        Array__float _27 = Array_replicate__float(16, _26);
        Array__float m = _27;
        Array__float* _33 = &m; // ref
        double* _41 = Vec3_x(s);
        double _42 = Double_copy(_41);
        float _43 = Double_to_MINUS_float(_42);
        float _44 = _43; // From the 'the' function.
        Array_aset_BANG___float(_33, 0, _44);
        Array__float* _49 = &m; // ref
        double* _57 = Vec3_y(s);
        double _58 = Double_copy(_57);
        float _59 = Double_to_MINUS_float(_58);
        float _60 = _59; // From the 'the' function.
        Array_aset_BANG___float(_49, 4, _60);
        Array__float* _65 = &m; // ref
        double* _73 = Vec3_z(s);
        double _74 = Double_copy(_73);
        float _75 = Double_to_MINUS_float(_74);
        float _76 = _75; // From the 'the' function.
        Array_aset_BANG___float(_65, 8, _76);
        Array__float* _81 = &m; // ref
        double* _89 = Vec3_x(u);
        double _90 = Double_copy(_89);
        float _91 = Double_to_MINUS_float(_90);
        float _92 = _91; // From the 'the' function.
        Array_aset_BANG___float(_81, 1, _92);
        Array__float* _97 = &m; // ref
        double* _105 = Vec3_y(u);
        double _106 = Double_copy(_105);
        float _107 = Double_to_MINUS_float(_106);
        float _108 = _107; // From the 'the' function.
        Array_aset_BANG___float(_97, 5, _108);
        Array__float* _113 = &m; // ref
        double* _121 = Vec3_z(u);
        double _122 = Double_copy(_121);
        float _123 = Double_to_MINUS_float(_122);
        float _124 = _123; // From the 'the' function.
        Array_aset_BANG___float(_113, 9, _124);
        Array__float* _129 = &m; // ref
        double* _139 = Vec3_x(f);
        double _140 = Double_copy(_139);
        double _141 = Double__MINUS_(0.0, _140);
        float _142 = Double_to_MINUS_float(_141);
        float _143 = _142; // From the 'the' function.
        Array_aset_BANG___float(_129, 2, _143);
        Array__float* _148 = &m; // ref
        double* _158 = Vec3_y(f);
        double _159 = Double_copy(_158);
        double _160 = Double__MINUS_(0.0, _159);
        float _161 = Double_to_MINUS_float(_160);
        float _162 = _161; // From the 'the' function.
        Array_aset_BANG___float(_148, 6, _162);
        Array__float* _167 = &m; // ref
        double* _177 = Vec3_z(f);
        double _178 = Double_copy(_177);
        double _179 = Double__MINUS_(0.0, _178);
        float _180 = Double_to_MINUS_float(_179);
        float _181 = _180; // From the 'the' function.
        Array_aset_BANG___float(_167, 10, _181);
        Array__float* _186 = &m; // ref
        double _196 = Vec3_dot(s, p);
        double _197 = Double__MINUS_(0.0, _196);
        float _198 = Double_to_MINUS_float(_197);
        float _199 = _198; // From the 'the' function.
        Array_aset_BANG___float(_186, 12, _199);
        Array__float* _204 = &m; // ref
        double _214 = Vec3_dot(u, p);
        double _215 = Double__MINUS_(0.0, _214);
        float _216 = Double_to_MINUS_float(_215);
        float _217 = _216; // From the 'the' function.
        Array_aset_BANG___float(_204, 13, _217);
        Array__float* _222 = &m; // ref
        double _230 = Vec3_dot(f, p);
        float _231 = Double_to_MINUS_float(_230);
        float _232 = _231; // From the 'the' function.
        Array_aset_BANG___float(_222, 14, _232);
        Array__float* _237 = &m; // ref
        Array_aset_BANG___float(_237, 15, 1.0f);
        Mat4 _243 = Mat4_init(m);
        Mat4 _244 = _243;
        _245 = _244;
    }
    return _245;
}

void Camera_move_MINUS_forward_BANG_(Camera* c, double dist) {
    Vec3* _10 = Camera_pos(c);
    Vec3* _15 = Camera_front(c);
    Vec3 _17 = Vec3_mul(_15, dist);
    Vec3* _18 = &_17; // ref
    Vec3 _19 = Vec3_add(_10, _18);
    Camera_set_MINUS_pos_BANG_(c, _19);
    Vec3_delete(_17);
}

void Camera_move_MINUS_right_BANG_(Camera* c, double dist) {
    Vec3* _10 = Camera_pos(c);
    Vec3* _15 = Camera_right(c);
    Vec3 _17 = Vec3_mul(_15, dist);
    Vec3* _18 = &_17; // ref
    Vec3 _19 = Vec3_add(_10, _18);
    Camera_set_MINUS_pos_BANG_(c, _19);
    Vec3_delete(_17);
}

void Camera_move_MINUS_up_BANG_(Camera* c, double dist) {
    Vec3* _10 = Camera_pos(c);
    Vec3* _15 = Camera_world_MINUS_up(c);
    Vec3 _17 = Vec3_mul(_15, dist);
    Vec3* _18 = &_17; // ref
    Vec3 _19 = Vec3_add(_10, _18);
    Camera_set_MINUS_pos_BANG_(c, _19);
    Vec3_delete(_17);
}

double* Camera_near(Camera* p) { return (&(p->near)); }

Camera Camera_new(Vec3 pos, double yaw, double pitch, double aspect) {
    Camera _38;
    /* let */ {
        Vec3 _12 = Vec3_zero();
        Vec3 _14 = Vec3_zero();
        Vec3 _16 = Vec3_zero();
        Vec3 _21 = Vec3_init(0.0, 1.0, 0.0);
        Camera _28 = Camera_init(pos, _12, _14, _16, _21, yaw, pitch, 60.0, aspect, 0.1, 100.0);
        Camera c = _28;
        Camera* _34 = &c; // ref
        Camera_update_MINUS_basis_BANG_(_34);
        Camera _37 = c;
        _38 = _37;
    }
    return _38;
}

Mat4 Camera_perspective(Camera* c) {
    Mat4 _123;
    /* let */ {
        double* _16 = Camera_fov(c);
        double _17 = Double_copy(_16);
        double _19 = Double__MUL_(_17, 8.72664625e-3);
        double _20 = Double_tan(_19);
        float _21 = Double_to_MINUS_float(_20);
        float _22 = _21; // From the 'the' function.
        float _23 = Float__DIV_(1.0f, _22);
        float f = _23;
        double* _31 = Camera_aspect(c);
        double _32 = Double_copy(_31);
        float _33 = Double_to_MINUS_float(_32);
        float _34 = _33; // From the 'the' function.
        float a = _34;
        double* _42 = Camera_near(c);
        double _43 = Double_copy(_42);
        float _44 = Double_to_MINUS_float(_43);
        float _45 = _44; // From the 'the' function.
        float n = _45;
        double* _53 = Camera_far(c);
        double _54 = Double_copy(_53);
        float _55 = Double_to_MINUS_float(_54);
        float _56 = _55; // From the 'the' function.
        float far = _56;
        static float _62_lit = 0.0f;
        float* _62 = &_62_lit; // ref
        Array__float _63 = Array_replicate__float(16, _62);
        Array__float m = _63;
        Array__float* _69 = &m; // ref
        float _74 = Float__DIV_(f, a);
        Array_aset_BANG___float(_69, 0, _74);
        Array__float* _79 = &m; // ref
        Array_aset_BANG___float(_79, 5, f);
        Array__float* _86 = &m; // ref
        float _93 = Float__MINUS_(n, far);
        float _94 = Float__DIV_(far, _93);
        Array_aset_BANG___float(_86, 10, _94);
        Array__float* _99 = &m; // ref
        Array_aset_BANG___float(_99, 11, -1.0f);
        Array__float* _106 = &m; // ref
        float _112 = Float__MUL_(far, n);
        float _116 = Float__MINUS_(n, far);
        float _117 = Float__DIV_(_112, _116);
        Array_aset_BANG___float(_106, 14, _117);
        Mat4 _121 = Mat4_init(m);
        Mat4 _122 = _121;
        _123 = _122;
    }
    return _123;
}

double* Camera_pitch(Camera* p) { return (&(p->pitch)); }

Vec3* Camera_pos(Camera* p) { return (&(p->pos)); }

String Camera_prn(Camera *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Camera");
  temp = Vec3_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->front); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->up); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->world_MINUS_up); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->yaw); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->pitch); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->fov); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->aspect); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->near); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->far); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Camera");
  bufferPtr += strlen("Camera") + 2;

  temp = Vec3_prn(&p->pos);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->front);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->right);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->up);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->world_MINUS_up);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->yaw);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->pitch);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->fov);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->aspect);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->near);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->far);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

double Camera_rad(double deg) {
    double _7 = Double__MUL_(deg, 1.74532925e-2);
    return _7;
}

Vec3* Camera_right(Camera* p) { return (&(p->right)); }

void Camera_rotate_BANG_(Camera* c, double dydp, double dpitch) {
    double* _13 = Camera_yaw(c);
    double _14 = Double_copy(_13);
    double _16 = Double__PLUS_(_14, dydp);
    Camera_set_MINUS_yaw_BANG_(c, _16);
    double* _27 = Camera_pitch(c);
    double _28 = Double_copy(_27);
    double _30 = Double__PLUS_(_28, dpitch);
    double _31 = Double_clamp__double(-89.0, 89.0, _30);
    Camera_set_MINUS_pitch_BANG_(c, _31);
    Camera_update_MINUS_basis_BANG_(c);
}

Camera Camera_set_MINUS_aspect(Camera p, double newValue) {
    /* Ignore non-managed member 'aspect' : Double */
    p.aspect = newValue;
    return p;
}


void Camera_set_MINUS_aspect_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'aspect' : Double */
    pRef->aspect = newValue;
}


Camera Camera_set_MINUS_far(Camera p, double newValue) {
    /* Ignore non-managed member 'far' : Double */
    p.far = newValue;
    return p;
}


void Camera_set_MINUS_far_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'far' : Double */
    pRef->far = newValue;
}


Camera Camera_set_MINUS_fov(Camera p, double newValue) {
    /* Ignore non-managed member 'fov' : Double */
    p.fov = newValue;
    return p;
}


void Camera_set_MINUS_fov_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'fov' : Double */
    pRef->fov = newValue;
}


Camera Camera_set_MINUS_front(Camera p, Vec3 newValue) {
    Vec3_delete(p.front);
    p.front = newValue;
    return p;
}


void Camera_set_MINUS_front_BANG_(Camera* pRef, Vec3 newValue) {
    Vec3_delete(pRef->front);
    pRef->front = newValue;
}


Camera Camera_set_MINUS_near(Camera p, double newValue) {
    /* Ignore non-managed member 'near' : Double */
    p.near = newValue;
    return p;
}


void Camera_set_MINUS_near_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'near' : Double */
    pRef->near = newValue;
}


Camera Camera_set_MINUS_pitch(Camera p, double newValue) {
    /* Ignore non-managed member 'pitch' : Double */
    p.pitch = newValue;
    return p;
}


void Camera_set_MINUS_pitch_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'pitch' : Double */
    pRef->pitch = newValue;
}


Camera Camera_set_MINUS_pos(Camera p, Vec3 newValue) {
    Vec3_delete(p.pos);
    p.pos = newValue;
    return p;
}


void Camera_set_MINUS_pos_BANG_(Camera* pRef, Vec3 newValue) {
    Vec3_delete(pRef->pos);
    pRef->pos = newValue;
}


Camera Camera_set_MINUS_right(Camera p, Vec3 newValue) {
    Vec3_delete(p.right);
    p.right = newValue;
    return p;
}


void Camera_set_MINUS_right_BANG_(Camera* pRef, Vec3 newValue) {
    Vec3_delete(pRef->right);
    pRef->right = newValue;
}


Camera Camera_set_MINUS_up(Camera p, Vec3 newValue) {
    Vec3_delete(p.up);
    p.up = newValue;
    return p;
}


void Camera_set_MINUS_up_BANG_(Camera* pRef, Vec3 newValue) {
    Vec3_delete(pRef->up);
    pRef->up = newValue;
}


Camera Camera_set_MINUS_world_MINUS_up(Camera p, Vec3 newValue) {
    Vec3_delete(p.world_MINUS_up);
    p.world_MINUS_up = newValue;
    return p;
}


void Camera_set_MINUS_world_MINUS_up_BANG_(Camera* pRef, Vec3 newValue) {
    Vec3_delete(pRef->world_MINUS_up);
    pRef->world_MINUS_up = newValue;
}


Camera Camera_set_MINUS_yaw(Camera p, double newValue) {
    /* Ignore non-managed member 'yaw' : Double */
    p.yaw = newValue;
    return p;
}


void Camera_set_MINUS_yaw_BANG_(Camera* pRef, double newValue) {
    /* Ignore non-managed member 'yaw' : Double */
    pRef->yaw = newValue;
}


String Camera_str(Camera *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Camera");
  temp = Vec3_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->front); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->up); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->world_MINUS_up); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->yaw); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->pitch); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->fov); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->aspect); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->near); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->far); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Camera");
  bufferPtr += strlen("Camera") + 2;

  temp = Vec3_prn(&p->pos);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->front);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->right);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->up);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vec3_prn(&p->world_MINUS_up);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->yaw);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->pitch);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->fov);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->aspect);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->near);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->far);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

Vec3* Camera_up(Camera* p) { return (&(p->up)); }

Camera Camera_update_MINUS_aspect(Camera p, Lambda *updater) {
    p.aspect = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.aspect) : ((Fn__double_double)(*updater).callback)(p.aspect);
    return p;
}


void Camera_update_MINUS_basis_BANG_(Camera* c) {
    /* let */ {
        double* _10 = Camera_yaw(c);
        double _11 = Double_copy(_10);
        double _12 = Camera_rad(_11);
        double y = _12;
        double* _18 = Camera_pitch(c);
        double _19 = Double_copy(_18);
        double _20 = Camera_rad(_19);
        double p = _20;
        double _28 = Double_cos(y);
        double _31 = Double_cos(p);
        double _32 = Double__MUL_(_28, _31);
        double _35 = Double_sin(p);
        double _39 = Double_sin(y);
        double _42 = Double_cos(p);
        double _43 = Double__MUL_(_39, _42);
        Vec3 _44 = Vec3_init(_32, _35, _43);
        Vec3* _45 = &_44; // ref
        Vec3 _46 = Vec3_normalize(_45);
        Vec3 f = _46;
        Vec3* _53 = &f; // ref
        Vec3* _56 = Camera_world_MINUS_up(c);
        Vec3 _57 = Vec3_cross(_53, _56);
        Vec3* _58 = &_57; // ref
        Vec3 _59 = Vec3_normalize(_58);
        Vec3 r = _59;
        Vec3* _66 = &r; // ref
        Vec3* _69 = &f; // ref
        Vec3 _70 = Vec3_cross(_66, _69);
        Vec3* _71 = &_70; // ref
        Vec3 _72 = Vec3_normalize(_71);
        Vec3 u = _72;
        Camera_set_MINUS_front_BANG_(c, f);
        Camera_set_MINUS_right_BANG_(c, r);
        Camera_set_MINUS_up_BANG_(c, u);
        Vec3_delete(_44);
        Vec3_delete(_57);
        Vec3_delete(_70);
    }
}

Camera Camera_update_MINUS_far(Camera p, Lambda *updater) {
    p.far = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.far) : ((Fn__double_double)(*updater).callback)(p.far);
    return p;
}


Camera Camera_update_MINUS_fov(Camera p, Lambda *updater) {
    p.fov = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.fov) : ((Fn__double_double)(*updater).callback)(p.fov);
    return p;
}


Camera Camera_update_MINUS_front(Camera p, Lambda *updater) {
    p.front = (*updater).env ? ((Fn__LambdaEnv_Vec3_Vec3)(*updater).callback)((*updater).env, p.front) : ((Fn__Vec3_Vec3)(*updater).callback)(p.front);
    return p;
}


Camera Camera_update_MINUS_near(Camera p, Lambda *updater) {
    p.near = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.near) : ((Fn__double_double)(*updater).callback)(p.near);
    return p;
}


Camera Camera_update_MINUS_pitch(Camera p, Lambda *updater) {
    p.pitch = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.pitch) : ((Fn__double_double)(*updater).callback)(p.pitch);
    return p;
}


Camera Camera_update_MINUS_pos(Camera p, Lambda *updater) {
    p.pos = (*updater).env ? ((Fn__LambdaEnv_Vec3_Vec3)(*updater).callback)((*updater).env, p.pos) : ((Fn__Vec3_Vec3)(*updater).callback)(p.pos);
    return p;
}


Camera Camera_update_MINUS_right(Camera p, Lambda *updater) {
    p.right = (*updater).env ? ((Fn__LambdaEnv_Vec3_Vec3)(*updater).callback)((*updater).env, p.right) : ((Fn__Vec3_Vec3)(*updater).callback)(p.right);
    return p;
}


Camera Camera_update_MINUS_up(Camera p, Lambda *updater) {
    p.up = (*updater).env ? ((Fn__LambdaEnv_Vec3_Vec3)(*updater).callback)((*updater).env, p.up) : ((Fn__Vec3_Vec3)(*updater).callback)(p.up);
    return p;
}


Camera Camera_update_MINUS_world_MINUS_up(Camera p, Lambda *updater) {
    p.world_MINUS_up = (*updater).env ? ((Fn__LambdaEnv_Vec3_Vec3)(*updater).callback)((*updater).env, p.world_MINUS_up) : ((Fn__Vec3_Vec3)(*updater).callback)(p.world_MINUS_up);
    return p;
}


Camera Camera_update_MINUS_yaw(Camera p, Lambda *updater) {
    p.yaw = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.yaw) : ((Fn__double_double)(*updater).callback)(p.yaw);
    return p;
}


Vec3* Camera_world_MINUS_up(Camera* p) { return (&(p->world_MINUS_up)); }

double* Camera_yaw(Camera* p) { return (&(p->yaw)); }

bool Char_alpha_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_lower_MINUS_case_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_upper_MINUS_case_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

bool Char_alphanum_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_alpha_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_num_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

Char Char_blit(Char x) {
    Char _7 = x; // From the 'the' function.
    return _7;
}

int Char_hash(Char* k) {
    Char _9 = Char_copy(k);
    Char _10 = _9; // From the 'the' function.
    int _11 = Char_to_MINUS_int(_10);
    return _11;
}

bool Char_lower_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(97/*'a'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 122/*'z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

int Char_meaning(Char* char_MINUS_ref) {
    int _126;
    /* let */ {
        Char _8 = Char_copy(char_MINUS_ref);
        Char c = _8;
        int _125;
        /* let */ {
            Char gensym_MINUS_generated1002 = c;
            int _124;
            bool _18 = Char__EQ_(gensym_MINUS_generated1002, 48/*'0'*/);
            if (_18) {
                int _21 = 0;
                _124 = _21;
            } else {
                int _122;
                bool _27 = Char__EQ_(gensym_MINUS_generated1002, 49/*'1'*/);
                if (_27) {
                    int _30 = 1;
                    _122 = _30;
                } else {
                    int _120;
                    bool _36 = Char__EQ_(gensym_MINUS_generated1002, 50/*'2'*/);
                    if (_36) {
                        int _39 = 2;
                        _120 = _39;
                    } else {
                        int _118;
                        bool _45 = Char__EQ_(gensym_MINUS_generated1002, 51/*'3'*/);
                        if (_45) {
                            int _48 = 3;
                            _118 = _48;
                        } else {
                            int _116;
                            bool _54 = Char__EQ_(gensym_MINUS_generated1002, 52/*'4'*/);
                            if (_54) {
                                int _57 = 4;
                                _116 = _57;
                            } else {
                                int _114;
                                bool _63 = Char__EQ_(gensym_MINUS_generated1002, 53/*'5'*/);
                                if (_63) {
                                    int _66 = 5;
                                    _114 = _66;
                                } else {
                                    int _112;
                                    bool _72 = Char__EQ_(gensym_MINUS_generated1002, 54/*'6'*/);
                                    if (_72) {
                                        int _75 = 6;
                                        _112 = _75;
                                    } else {
                                        int _110;
                                        bool _81 = Char__EQ_(gensym_MINUS_generated1002, 55/*'7'*/);
                                        if (_81) {
                                            int _84 = 7;
                                            _110 = _84;
                                        } else {
                                            int _108;
                                            bool _90 = Char__EQ_(gensym_MINUS_generated1002, 56/*'8'*/);
                                            if (_90) {
                                                int _93 = 8;
                                                _108 = _93;
                                            } else {
                                                int _106;
                                                bool _99 = Char__EQ_(gensym_MINUS_generated1002, 57/*'9'*/);
                                                if (_99) {
                                                    int _102 = 9;
                                                    _106 = _102;
                                                } else {
                                                    int _105 = -1;
                                                    _106 = _105;
                                                }
                                                int _107 = _106;
                                                _108 = _107;
                                            }
                                            int _109 = _108;
                                            _110 = _109;
                                        }
                                        int _111 = _110;
                                        _112 = _111;
                                    }
                                    int _113 = _112;
                                    _114 = _113;
                                }
                                int _115 = _114;
                                _116 = _115;
                            }
                            int _117 = _116;
                            _118 = _117;
                        }
                        int _119 = _118;
                        _120 = _119;
                    }
                    int _121 = _120;
                    _122 = _121;
                }
                int _123 = _122;
                _124 = _123;
            }
            _125 = _124;
        }
        _126 = _125;
    }
    return _126;
}

bool Char_num_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(48/*'0'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 57/*'9'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_random() {
    int _5 = Int_random();
    Char _6 = Char_from_MINUS_int(_5);
    return _6;
}

Char Char_random_MINUS_between(Char a, Char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    Char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool Char_upper_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(65/*'A'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 90/*'Z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_zero() {
    Char _7 = Char_from_MINUS_int(0);
    Char _8 = _7; // From the 'the' function.
    return _8;
}

bool CharRef__LT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__LT_(_8, _11);
    return _12;
}

bool CharRef__EQ_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool CharRef__GT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__GT_(_8, _11);
    return _12;
}

bool Color__EQ___ColorId(ColorId* a, ColorId* b) {
    ColorId* _12 = a; // From the 'the' function.
    int _13 = Color_hash(_12);
    int _16 = Color_hash(b);
    bool _17 = Int__EQ_(_13, _16);
    return _17;
}

ColorId Color_Id_BgBlack() {
  ColorId instance;

    instance._tag = ColorId_BgBlack_tag;
    return instance;
}

ColorId Color_Id_BgBlue() {
  ColorId instance;

    instance._tag = ColorId_BgBlue_tag;
    return instance;
}

ColorId Color_Id_BgCyan() {
  ColorId instance;

    instance._tag = ColorId_BgCyan_tag;
    return instance;
}

ColorId Color_Id_BgGreen() {
  ColorId instance;

    instance._tag = ColorId_BgGreen_tag;
    return instance;
}

ColorId Color_Id_BgMagenta() {
  ColorId instance;

    instance._tag = ColorId_BgMagenta_tag;
    return instance;
}

ColorId Color_Id_BgRed() {
  ColorId instance;

    instance._tag = ColorId_BgRed_tag;
    return instance;
}

ColorId Color_Id_BgWhite() {
  ColorId instance;

    instance._tag = ColorId_BgWhite_tag;
    return instance;
}

ColorId Color_Id_BgYellow() {
  ColorId instance;

    instance._tag = ColorId_BgYellow_tag;
    return instance;
}

ColorId Color_Id_Black() {
  ColorId instance;

    instance._tag = ColorId_Black_tag;
    return instance;
}

ColorId Color_Id_BlinkRapid() {
  ColorId instance;

    instance._tag = ColorId_BlinkRapid_tag;
    return instance;
}

ColorId Color_Id_BlinkSlow() {
  ColorId instance;

    instance._tag = ColorId_BlinkSlow_tag;
    return instance;
}

ColorId Color_Id_Blue() {
  ColorId instance;

    instance._tag = ColorId_Blue_tag;
    return instance;
}

ColorId Color_Id_Bold() {
  ColorId instance;

    instance._tag = ColorId_Bold_tag;
    return instance;
}

ColorId Color_Id_Cyan() {
  ColorId instance;

    instance._tag = ColorId_Cyan_tag;
    return instance;
}

ColorId Color_Id_Green() {
  ColorId instance;

    instance._tag = ColorId_Green_tag;
    return instance;
}

ColorId Color_Id_Italic() {
  ColorId instance;

    instance._tag = ColorId_Italic_tag;
    return instance;
}

ColorId Color_Id_Magenta() {
  ColorId instance;

    instance._tag = ColorId_Magenta_tag;
    return instance;
}

ColorId Color_Id_None() {
  ColorId instance;

    instance._tag = ColorId_None_tag;
    return instance;
}

ColorId Color_Id_Red() {
  ColorId instance;

    instance._tag = ColorId_Red_tag;
    return instance;
}

ColorId Color_Id_Reset() {
  ColorId instance;

    instance._tag = ColorId_Reset_tag;
    return instance;
}

ColorId Color_Id_Underline() {
  ColorId instance;

    instance._tag = ColorId_Underline_tag;
    return instance;
}

ColorId Color_Id_White() {
  ColorId instance;

    instance._tag = ColorId_White_tag;
    return instance;
}

ColorId Color_Id_Yellow() {
  ColorId instance;

    instance._tag = ColorId_Yellow_tag;
    return instance;
}

ColorId Color_Id_copy(ColorId* pRef) {
    ColorId copy = *pRef;
    if(pRef->_tag == ColorId_Black_tag) {

    }

    else if(pRef->_tag == ColorId_Red_tag) {

    }

    else if(pRef->_tag == ColorId_Green_tag) {

    }

    else if(pRef->_tag == ColorId_Yellow_tag) {

    }

    else if(pRef->_tag == ColorId_Blue_tag) {

    }

    else if(pRef->_tag == ColorId_Magenta_tag) {

    }

    else if(pRef->_tag == ColorId_Cyan_tag) {

    }

    else if(pRef->_tag == ColorId_White_tag) {

    }

    else if(pRef->_tag == ColorId_Reset_tag) {

    }

    else if(pRef->_tag == ColorId_None_tag) {

    }

    else if(pRef->_tag == ColorId_Bold_tag) {

    }

    else if(pRef->_tag == ColorId_Italic_tag) {

    }

    else if(pRef->_tag == ColorId_Underline_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkSlow_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkRapid_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlack_tag) {

    }

    else if(pRef->_tag == ColorId_BgRed_tag) {

    }

    else if(pRef->_tag == ColorId_BgGreen_tag) {

    }

    else if(pRef->_tag == ColorId_BgYellow_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlue_tag) {

    }

    else if(pRef->_tag == ColorId_BgMagenta_tag) {

    }

    else if(pRef->_tag == ColorId_BgCyan_tag) {

    }

    else if(pRef->_tag == ColorId_BgWhite_tag) {

    }

    return copy;
}

void Color_Id_delete(ColorId p) {
  if(p._tag == ColorId_Black_tag) {

  }
  else if(p._tag == ColorId_Red_tag) {

  }
  else if(p._tag == ColorId_Green_tag) {

  }
  else if(p._tag == ColorId_Yellow_tag) {

  }
  else if(p._tag == ColorId_Blue_tag) {

  }
  else if(p._tag == ColorId_Magenta_tag) {

  }
  else if(p._tag == ColorId_Cyan_tag) {

  }
  else if(p._tag == ColorId_White_tag) {

  }
  else if(p._tag == ColorId_Reset_tag) {

  }
  else if(p._tag == ColorId_None_tag) {

  }
  else if(p._tag == ColorId_Bold_tag) {

  }
  else if(p._tag == ColorId_Italic_tag) {

  }
  else if(p._tag == ColorId_Underline_tag) {

  }
  else if(p._tag == ColorId_BlinkSlow_tag) {

  }
  else if(p._tag == ColorId_BlinkRapid_tag) {

  }
  else if(p._tag == ColorId_BgBlack_tag) {

  }
  else if(p._tag == ColorId_BgRed_tag) {

  }
  else if(p._tag == ColorId_BgGreen_tag) {

  }
  else if(p._tag == ColorId_BgYellow_tag) {

  }
  else if(p._tag == ColorId_BgBlue_tag) {

  }
  else if(p._tag == ColorId_BgMagenta_tag) {

  }
  else if(p._tag == ColorId_BgCyan_tag) {

  }
  else if(p._tag == ColorId_BgWhite_tag) {

  }

}

int Color_Id_get_MINUS_tag(ColorId *p) { return p->_tag; }
String Color_Id_prn(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    sprintf(bufferPtr, "(%s ", "Black");
    bufferPtr += strlen("Black") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    sprintf(bufferPtr, "(%s ", "Red");
    bufferPtr += strlen("Red") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    sprintf(bufferPtr, "(%s ", "Green");
    bufferPtr += strlen("Green") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    sprintf(bufferPtr, "(%s ", "Yellow");
    bufferPtr += strlen("Yellow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    sprintf(bufferPtr, "(%s ", "Blue");
    bufferPtr += strlen("Blue") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    sprintf(bufferPtr, "(%s ", "Magenta");
    bufferPtr += strlen("Magenta") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    sprintf(bufferPtr, "(%s ", "Cyan");
    bufferPtr += strlen("Cyan") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_White_tag) {
    sprintf(bufferPtr, "(%s ", "White");
    bufferPtr += strlen("White") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    sprintf(bufferPtr, "(%s ", "Reset");
    bufferPtr += strlen("Reset") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_None_tag) {
    sprintf(bufferPtr, "(%s ", "None");
    bufferPtr += strlen("None") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    sprintf(bufferPtr, "(%s ", "Bold");
    bufferPtr += strlen("Bold") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    sprintf(bufferPtr, "(%s ", "Italic");
    bufferPtr += strlen("Italic") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    sprintf(bufferPtr, "(%s ", "Underline");
    bufferPtr += strlen("Underline") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    sprintf(bufferPtr, "(%s ", "BlinkSlow");
    bufferPtr += strlen("BlinkSlow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    sprintf(bufferPtr, "(%s ", "BlinkRapid");
    bufferPtr += strlen("BlinkRapid") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    sprintf(bufferPtr, "(%s ", "BgBlack");
    bufferPtr += strlen("BgBlack") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    sprintf(bufferPtr, "(%s ", "BgRed");
    bufferPtr += strlen("BgRed") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    sprintf(bufferPtr, "(%s ", "BgGreen");
    bufferPtr += strlen("BgGreen") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    sprintf(bufferPtr, "(%s ", "BgYellow");
    bufferPtr += strlen("BgYellow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    sprintf(bufferPtr, "(%s ", "BgBlue");
    bufferPtr += strlen("BgBlue") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    sprintf(bufferPtr, "(%s ", "BgMagenta");
    bufferPtr += strlen("BgMagenta") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    sprintf(bufferPtr, "(%s ", "BgCyan");
    bufferPtr += strlen("BgCyan") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    sprintf(bufferPtr, "(%s ", "BgWhite");
    bufferPtr += strlen("BgWhite") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }

  return buffer;
}

String Color_Id_str(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    sprintf(bufferPtr, "(%s ", "Black");
    bufferPtr += strlen("Black") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    sprintf(bufferPtr, "(%s ", "Red");
    bufferPtr += strlen("Red") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    sprintf(bufferPtr, "(%s ", "Green");
    bufferPtr += strlen("Green") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    sprintf(bufferPtr, "(%s ", "Yellow");
    bufferPtr += strlen("Yellow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    sprintf(bufferPtr, "(%s ", "Blue");
    bufferPtr += strlen("Blue") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    sprintf(bufferPtr, "(%s ", "Magenta");
    bufferPtr += strlen("Magenta") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    sprintf(bufferPtr, "(%s ", "Cyan");
    bufferPtr += strlen("Cyan") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_White_tag) {
    sprintf(bufferPtr, "(%s ", "White");
    bufferPtr += strlen("White") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    sprintf(bufferPtr, "(%s ", "Reset");
    bufferPtr += strlen("Reset") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_None_tag) {
    sprintf(bufferPtr, "(%s ", "None");
    bufferPtr += strlen("None") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    sprintf(bufferPtr, "(%s ", "Bold");
    bufferPtr += strlen("Bold") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    sprintf(bufferPtr, "(%s ", "Italic");
    bufferPtr += strlen("Italic") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    sprintf(bufferPtr, "(%s ", "Underline");
    bufferPtr += strlen("Underline") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    sprintf(bufferPtr, "(%s ", "BlinkSlow");
    bufferPtr += strlen("BlinkSlow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    sprintf(bufferPtr, "(%s ", "BlinkRapid");
    bufferPtr += strlen("BlinkRapid") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    sprintf(bufferPtr, "(%s ", "BgBlack");
    bufferPtr += strlen("BgBlack") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    sprintf(bufferPtr, "(%s ", "BgRed");
    bufferPtr += strlen("BgRed") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    sprintf(bufferPtr, "(%s ", "BgGreen");
    bufferPtr += strlen("BgGreen") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    sprintf(bufferPtr, "(%s ", "BgYellow");
    bufferPtr += strlen("BgYellow") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    sprintf(bufferPtr, "(%s ", "BgBlue");
    bufferPtr += strlen("BgBlue") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    sprintf(bufferPtr, "(%s ", "BgMagenta");
    bufferPtr += strlen("BgMagenta") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    sprintf(bufferPtr, "(%s ", "BgCyan");
    bufferPtr += strlen("BgCyan") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    sprintf(bufferPtr, "(%s ", "BgWhite");
    bufferPtr += strlen("BgWhite") + 2;


    bufferPtr--;
    sprintf(bufferPtr, ")");
  }

  return buffer;
}

String Color_color(ColorId cid) {
    String _26;
    /* let */ {
        Map__ColorId_String* _9 = &Color_table; // ref
        ColorId* _12 = &cid; // ref
        String _13 = Map_get__ColorId_String(_9, _12);
        String n = _13;
        static String _16 = "[";
        String *_16_ref = &_16;
        String* _21 = &n; // ref
        static String _22 = "m";
        String *_22_ref = &_22;
        String _23 = String_append(_21, _22_ref);
        String* _24 = &_23; // ref
        String _25 = String_append(_16_ref, _24);
        _26 = _25;
        String_delete(_23);
        String_delete(n);
    }
    Color_Id_delete(cid);
    return _26;
}

String Color_colorize(ColorId cid, String* s) {
    String _9 = Color_color(cid);
    String* _10 = &_9; // ref
    ColorId _17 = Color_Id_Reset();
    String _18 = Color_color(_17);
    String* _19 = &_18; // ref
    String _20 = String_append(s, _19);
    String* _21 = &_20; // ref
    String _22 = String_append(_10, _21);
    String_delete(_18);
    String_delete(_20);
    String_delete(_9);
    return _22;
}

int Color_hash(ColorId* k) {
    int _6 = Color_Id_get_MINUS_tag(k);
    return _6;
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

double Double_blit(double x) {
    double _7 = x; // From the 'the' function.
    return _7;
}

double Double_clamp__double(double min, double max, double val) {
    double _28;
    bool _10 = Double__GT_(val, max);
    if (_10) {
        double _13 = max;
        _28 = _13;
    } else {
        double _26;
        bool _19 = Double__LT_(val, min);
        if (_19) {
            double _22 = min;
            _26 = _22;
        } else {
            double _25 = val;
            _26 = _25;
        }
        double _27 = _26;
        _28 = _27;
    }
    return _28;
}

double Double_dec(double x) {
    double _7 = Double__MINUS_(x, 1.0);
    return _7;
}

Maybe__double Double_from_MINUS_string(String* s) {
    Maybe__double _25;
    /* let */ {
        double res = 0.0;
        Maybe__double _24;
        double* _13 = &res; // ref
        bool _14 = Double_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__double _18 = Maybe_Just__double(res);
            Maybe__double _19 = _18;
            _24 = _19;
        } else {
            Maybe__double _22 = Maybe_Nothing__double();
            Maybe__double _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Double_hash(double* k) {
    double _8 = Double_copy(k);
    Long _9 = Double_to_MINUS_bytes(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

double Double_inc(double x) {
    double _7 = Double__PLUS_(1.0, x);
    return _7;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_random() {
    double _7 = Double_from_MINUS_int(CARP_INT_MAX);
    double _8 = Double_random_MINUS_between(0.0, _7);
    return _8;
}

double Double_random_MINUS_between(double lower, double upper) {
    double _20;
    /* let */ {
        double _10 = Double__MINUS_(upper, lower);
        double diff = _10;
        double _16 = Random_random();
        double _17 = Double__MUL_(diff, _16);
        double _19 = Double__PLUS_(_17, lower);
        _20 = _19;
    }
    return _20;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

String DoubleRef_format(String* s, double* x) {
    double _9 = Double_copy(x);
    String _10 = Double_format(s, _9);
    return _10;
}

String DoubleRef_prn(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

String DoubleRef_str(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

float Float_blit(float x) {
    float _7 = x; // From the 'the' function.
    return _7;
}

float Float_dec(float x) {
    float _7 = Float__MINUS_(x, 1.0f);
    return _7;
}

Maybe__float Float_from_MINUS_string(String* s) {
    Maybe__float _25;
    /* let */ {
        float res = 0.0f;
        Maybe__float _24;
        float* _13 = &res; // ref
        bool _14 = Float_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__float _18 = Maybe_Just__float(res);
            Maybe__float _19 = _18;
            _24 = _19;
        } else {
            Maybe__float _22 = Maybe_Nothing__float();
            Maybe__float _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Float_hash(float* k) {
    float _7 = Float_copy(k);
    int _8 = Float_to_MINUS_bytes(_7);
    return _8;
}

float Float_inc(float x) {
    float _7 = Float__PLUS_(1.0f, x);
    return _7;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_random() {
    float _7 = Float_from_MINUS_int(CARP_INT_MAX);
    float _8 = Float_random_MINUS_between(0.0f, _7);
    return _8;
}

float Float_random_MINUS_between(float lower, float upper) {
    float _24;
    /* let */ {
        float _10 = Float__MINUS_(upper, lower);
        float diff = _10;
        double _17 = Double_from_MINUS_float(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        float _21 = Double_to_MINUS_float(_20);
        float _23 = Float__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

String FloatRef_format(String* s, float* x) {
    float _9 = Float_copy(x);
    String _10 = Float_format(s, _9);
    return _10;
}

String FloatRef_prn(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

String FloatRef_str(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__float_float_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__void (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

int Heap_lchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(1, _9);
    return _10;
}

int Heap_parent(int i) {
    int _8 = Int__MINUS_(i, 1);
    int _10 = Int__DIV_(_8, 2);
    return _10;
}

int Heap_rchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(2, _9);
    return _10;
}

void IO_Raw_fclose_BANG_(FILE* file) {
    /* let */ {
        int _8 = fclose(file);
        int _ = _8;
        /* () */
    }
}

void IO_Raw_fflush_BANG_(FILE* file) {
    /* let */ {
        int _8 = fflush(file);
        int _ = _8;
        /* () */
    }
}

FILE* IO_Raw_fopen(String* pathname, String* mode) {
    CChar* _8 = String_cstr(pathname);
    CChar* _11 = String_cstr(mode);
    FILE* _12 = fopen(_8, _11);
    return _12;
}

int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(file_MINUS_name);
    int _14 = fread(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(data);
    int _14 = fwrite(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    /* let */ {
        int _14 = IO_Raw_fwrite(data, item_MINUS_size, items_MINUS_count, file);
        int _ = _14;
        /* () */
    }
}

int IO_Raw_unlink(String* file_MINUS_name) {
    CChar* _7 = String_cstr(file_MINUS_name);
    int _8 = unlink(_7);
    return _8;
}

void IO_Raw_unlink_BANG_(String* file_MINUS_name) {
    /* let */ {
        int _8 = IO_Raw_unlink(file_MINUS_name);
        int _ = _8;
        /* () */
    }
}

Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "ab";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _35 = String_format(_29_ref, _34);
            String* _36 = &_35; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _41 = String_format(_39_ref, file_MINUS_name);
            String* _42 = &_41; // ref
            String _43 = String_append(_36, _42);
            String* _44 = &_43; // ref
            String _45 = String_copy(_44);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_33);
            String_delete(_35);
            String_delete(_41);
            String_delete(_43);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _85 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _86 = &_85; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _91 = Int_format(_89_ref, bytes2write);
                    String* _92 = &_91; // ref
                    String _93 = String_append(_86, _92);
                    String* _94 = &_93; // ref
                    String _95 = String_copy(_94);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_85);
                    String_delete(_91);
                    String_delete(_93);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

void IO_color(ColorId cid) {
    String _8 = Color_color(cid);
    String* _9 = &_8; // ref
    IO_print(_9);
    String_delete(_8);
}

void IO_colorize(ColorId cid, String* s) {
    String _10 = Color_colorize(cid, s);
    String* _11 = &_10; // ref
    IO_print(_11);
    String_delete(_10);
}

Result__Char_String IO_fgetc(FILE* file) {
    Result__Char_String _43;
    /* let */ {
        int _8 = fgetc(file);
        int _CHAR_ = _8;
        Result__Char_String _42;
        bool _13 = feof(file);
        if (_13) {
            static String _17 = "couldn't read char from file, EOF reached";
            String *_17_ref = &_17;
            String _18 = String_copy(_17_ref);
            Result__Char_String _19 = Result_Error__String_Char(_18);
            Result__Char_String _20 = _19;
            _42 = _20;
        } else {
            Result__Char_String _40;
            bool _25 = ferror(file);
            if (_25) {
                static String _29 = "error while reading char from file";
                String *_29_ref = &_29;
                String _30 = String_copy(_29_ref);
                Result__Char_String _31 = Result_Error__String_Char(_30);
                Result__Char_String _32 = _31;
                _40 = _32;
            } else {
                Char _37 = Char_from_MINUS_int(_CHAR_);
                Result__Char_String _38 = Result_Success__Char_String(_37);
                Result__Char_String _39 = _38;
                _40 = _39;
            }
            Result__Char_String _41 = _40;
            _42 = _41;
        }
        _43 = _42;
    }
    return _43;
}

Maybe__String IO_getenv(String* s) {
    Maybe__String _28;
    /* let */ {
        CChar* _9 = String_cstr(s);
        CChar* _10 = getenv(_9);
        CChar* e = _10;
        Maybe__String _27;
        bool _15 = null_QMARK___CChar(e);
        if (_15) {
            Maybe__String _18 = Maybe_Nothing__String();
            Maybe__String _19 = _18;
            _27 = _19;
        } else {
            String _24 = String_from_MINUS_cstr(e);
            Maybe__String _25 = Maybe_Just__String(_24);
            Maybe__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode) {
    Result__FILE_MUL__String _28;
    /* let */ {
        FILE* _10 = IO_Raw_fopen(filename, mode);
        FILE* ptr = _10;
        Result__FILE_MUL__String _27;
        bool _15 = null_QMARK___FILE(ptr);
        if (_15) {
            String _19 = System_error_MINUS_text();
            Result__FILE_MUL__String _20 = Result_Error__String_FILE_MUL_(_19);
            Result__FILE_MUL__String _21 = _20;
            _27 = _21;
        } else {
            Result__FILE_MUL__String _25 = Result_Success__FILE_MUL__String(ptr);
            Result__FILE_MUL__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__String_String IO_read_MINUS__GT_EOF(String* filename) {
    Result__String_String _66;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String file_QMARK_ = _9;
        Result__String_String _65;
        if(file_QMARK_._tag == Result__FILE_MUL__String_Error_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            String x = _12_temp.u.Error.member0;
            // Case expr:
            Result__String_String _18 = Result_Error__String_String(x);
            _65 = _18;
        }
        else if(file_QMARK_._tag == Result__FILE_MUL__String_Success_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            FILE* f = _12_temp.u.Success.member0;
            // Case expr:
            Result__String_String _64;
            /* let */ {
                int _25 = Int_zero();
                int c = _25;
                Array _27 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
                Array__uint8_t r = _27;
                int _36 = fgetc(f);
                c = _36;  // Int = Int
                bool _41 = _DIV__EQ___int(c, EOF);
                bool _42 = _41;
                bool _52 = _42;
                while (_52) {
                    uint8_t _49 = Byte_from_MINUS_int(c);
                    Array__uint8_t _50 = Array_push_MINUS_back__uint8_t(r, _49);
                    r = _50;  // (Array Byte) = (Array Byte)
                    int _36 = fgetc(f);
                    c = _36;  // Int = Int
                    bool _41 = _DIV__EQ___int(c, EOF);
                    bool _42 = _41;
                    _52 = _42;
                }
                IO_Raw_fclose_BANG_(f);
                Array__uint8_t* _60 = &r; // ref
                String _61 = String_from_MINUS_bytes(_60);
                Result__String_String _62 = Result_Success__String_String(_61);
                Result__String_String _63 = _62;
                _64 = _63;
                Array_delete__uint8_t(r);
            }
            _65 = _64;
        }
        else UNHANDLED("IO.carp", 255);
        _66 = _65;
    }
    return _66;
}

Result__String_String IO_read_MINUS_file(String* filename) {
    Result__String_String _176;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String finput_QMARK_ = _9;
        Result__String_String _175;
        Result__FILE_MUL__String* _15 = &finput_QMARK_; // ref
        bool _16 = Result_error_QMARK___FILE_MUL__String(_15);
        if (_16) {
            static String _24 = "Failed to open file='%s', error='";
            String *_24_ref = &_24;
            String _26 = String_format(_24_ref, filename);
            String* _27 = &_26; // ref
            static String _30 = "%s'";
            String *_30_ref = &_30;
            String _34 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(finput_QMARK_);
            String* _35 = &_34; // ref
            String _36 = String_format(_30_ref, _35);
            String* _37 = &_36; // ref
            String _38 = String_append(_27, _37);
            String* _39 = &_38; // ref
            String _40 = String_copy(_39);
            Result__String_String _41 = Result_Error__String_String(_40);
            Result__String_String _42 = _41;
            String_delete(_26);
            String_delete(_34);
            String_delete(_36);
            String_delete(_38);
            _175 = _42;
        } else {
            Result__String_String _173;
            /* let */ {
                FILE* _48 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(finput_QMARK_);
                FILE* finput = _48;
                fseek(finput, 0, SEEK_END);
                int _68;
                /* let */ {
                    int _60 = ftell(finput);
                    int flength = _60;
                    rewind(finput);
                    int _67 = flength;
                    _68 = _67;
                }
                int _69 = _68;
                int length = _69;
                String _74 = String_allocate(length, 48/*'0'*/);
                String buffer = _74;
                Result__String_String _172;
                String* _81 = &buffer; // ref
                bool _82 = String_allocated_QMARK_(_81);
                bool _83 = not(_82);
                if (_83) {
                    IO_Raw_fclose_BANG_(finput);
                    static String _94 = "Failed to open buffer with size=%d from file='";
                    String *_94_ref = &_94;
                    String _96 = Int_format(_94_ref, length);
                    String* _97 = &_96; // ref
                    static String _100 = "%s'";
                    String *_100_ref = &_100;
                    String _102 = String_format(_100_ref, filename);
                    String* _103 = &_102; // ref
                    String _104 = String_append(_97, _103);
                    String* _105 = &_104; // ref
                    String _106 = String_copy(_105);
                    Result__String_String _107 = Result_Error__String_String(_106);
                    Result__String_String _108 = _107;
                    String_delete(_102);
                    String_delete(_104);
                    String_delete(_96);
                    String_delete(buffer);
                    _172 = _108;
                } else {
                    Result__String_String _170;
                    /* let */ {
                        String* _115 = &buffer; // ref
                        int _119 = IO_Raw_fread(_115, 1, length, finput);
                        int bytes_MINUS_read = _119;
                        IO_Raw_fclose_BANG_(finput);
                        Result__String_String _169;
                        bool _130 = Int__EQ_(bytes_MINUS_read, length);
                        bool _131 = not(_130);
                        if (_131) {
                            static String _139 = "Error: file='%s' has length=";
                            String *_139_ref = &_139;
                            String _141 = String_format(_139_ref, filename);
                            String* _142 = &_141; // ref
                            static String _147 = "%d but bytes-read=";
                            String *_147_ref = &_147;
                            String _149 = Int_format(_147_ref, length);
                            String* _150 = &_149; // ref
                            static String _153 = "%d";
                            String *_153_ref = &_153;
                            String _155 = Int_format(_153_ref, bytes_MINUS_read);
                            String* _156 = &_155; // ref
                            String _157 = String_append(_150, _156);
                            String* _158 = &_157; // ref
                            String _159 = String_append(_142, _158);
                            String* _160 = &_159; // ref
                            String _161 = String_copy(_160);
                            Result__String_String _162 = Result_Error__String_String(_161);
                            Result__String_String _163 = _162;
                            String_delete(_141);
                            String_delete(_149);
                            String_delete(_155);
                            String_delete(_157);
                            String_delete(_159);
                            String_delete(buffer);
                            _169 = _163;
                        } else {
                            Result__String_String _167 = Result_Success__String_String(buffer);
                            Result__String_String _168 = _167;
                            _169 = _168;
                        }
                        _170 = _169;
                    }
                    Result__String_String _171 = _170;
                    _172 = _171;
                }
                _173 = _172;
            }
            Result__String_String _174 = _173;
            _175 = _174;
        }
        _176 = _175;
    }
    return _176;
}

Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "wb";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _35 = String_format(_29_ref, _34);
            String* _36 = &_35; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _41 = String_format(_39_ref, file_MINUS_name);
            String* _42 = &_41; // ref
            String _43 = String_append(_36, _42);
            String* _44 = &_43; // ref
            String _45 = String_copy(_44);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_33);
            String_delete(_35);
            String_delete(_41);
            String_delete(_43);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _85 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _86 = &_85; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _91 = Int_format(_89_ref, bytes2write);
                    String* _92 = &_91; // ref
                    String _93 = String_append(_86, _92);
                    String* _94 = &_93; // ref
                    String _95 = String_copy(_94);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_85);
                    String_delete(_91);
                    String_delete(_93);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

int Int_blit(int x) {
    int _7 = x; // From the 'the' function.
    return _7;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

int Int_from_MINUS_int(int a) {
    return a;
}

Maybe__int Int_from_MINUS_string(String* s) {
    Maybe__int _25;
    /* let */ {
        int res = 0;
        Maybe__int _24;
        int* _13 = &res; // ref
        bool _14 = Int_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__int _18 = Maybe_Just__int(res);
            Maybe__int _19 = _18;
            _24 = _19;
        } else {
            Maybe__int _22 = Maybe_Nothing__int();
            Maybe__int _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Int_hash(int* k) {
    int _8 = Int_copy(k);
    int _9 = _8; // From the 'the' function.
    return _9;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_positive_MINUS_mod(int k, int n) {
    int _27;
    /* let */ {
        int _10 = Int_mod(k, n);
        int r = _10;
        int _26;
        bool _16 = Int__GT_(0, r);
        if (_16) {
            int _21 = Int__PLUS_(r, n);
            int _22 = _21;
            _26 = _22;
        } else {
            int _25 = r;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = _DIV__EQ___int(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___int(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = _DIV__EQ___int(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_random() {
    int _6 = Int_random_MINUS_between(0, CARP_INT_MAX);
    return _6;
}

int Int_random_MINUS_between(int lower, int upper) {
    int _24;
    /* let */ {
        int _10 = Int__MINUS_(upper, lower);
        int diff = _10;
        double _17 = Double_from_MINUS_int(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        int _21 = Double_to_MINUS_int(_20);
        int _23 = Int__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

int Int_to_MINUS_int(int a) {
    return a;
}

int Int_zero() {
    return 0;
}

Int16 Int16_blit(Int16 x) {
    Int16 _7 = x; // From the 'the' function.
    return _7;
}

int Int16_hash(Int16* k) {
    Int16 _8 = Int16_copy(k);
    Long _9 = Int16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int16_prn(Int16 a) {
    String _6 = Int16_str(a);
    return _6;
}

Int16 Int16_zero() {
    Int16 _5 = Int16_from_MINUS_long(0l);
    return _5;
}

bool Int16Extra__EQ_(Int16* a, Int16* b) {
    Int16 _8 = Int16_copy(a);
    Int16 _11 = Int16_copy(b);
    bool _12 = Int16__EQ_(_8, _11);
    return _12;
}

String Int16Extra_prn(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_prn(_7);
    return _8;
}

String Int16Extra_str(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_str(_7);
    return _8;
}

Int32 Int32_blit(Int32 x) {
    Int32 _7 = x; // From the 'the' function.
    return _7;
}

int Int32_hash(Int32* k) {
    Int32 _8 = Int32_copy(k);
    Long _9 = Int32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int32_prn(Int32 a) {
    String _6 = Int32_str(a);
    return _6;
}

Int32 Int32_zero() {
    Int32 _5 = Int32_from_MINUS_long(0l);
    return _5;
}

bool Int32Extra__EQ_(Int32* a, Int32* b) {
    Int32 _8 = Int32_copy(a);
    Int32 _11 = Int32_copy(b);
    bool _12 = Int32__EQ_(_8, _11);
    return _12;
}

String Int32Extra_prn(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_prn(_7);
    return _8;
}

String Int32Extra_str(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_str(_7);
    return _8;
}

Int64 Int64_blit(Int64 x) {
    Int64 _7 = x; // From the 'the' function.
    return _7;
}

int Int64_hash(Int64* k) {
    Int64 _8 = Int64_copy(k);
    Long _9 = Int64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int64_prn(Int64 a) {
    String _6 = Int64_str(a);
    return _6;
}

Int64 Int64_zero() {
    Int64 _5 = Int64_from_MINUS_long(0l);
    return _5;
}

bool Int64Extra__EQ_(Int64* a, Int64* b) {
    Int64 _8 = Int64_copy(a);
    Int64 _11 = Int64_copy(b);
    bool _12 = Int64__EQ_(_8, _11);
    return _12;
}

String Int64Extra_prn(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_prn(_7);
    return _8;
}

String Int64Extra_str(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_str(_7);
    return _8;
}

Int8 Int8_blit(Int8 x) {
    Int8 _7 = x; // From the 'the' function.
    return _7;
}

int Int8_hash(Int8* k) {
    Int8 _8 = Int8_copy(k);
    Long _9 = Int8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int8_prn(Int8 a) {
    String _6 = Int8_str(a);
    return _6;
}

Int8 Int8_zero() {
    Int8 _5 = Int8_from_MINUS_long(0l);
    return _5;
}

bool Int8Extra__EQ_(Int8* a, Int8* b) {
    Int8 _8 = Int8_copy(a);
    Int8 _11 = Int8_copy(b);
    bool _12 = Int8__EQ_(_8, _11);
    return _12;
}

String Int8Extra_prn(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_prn(_7);
    return _8;
}

String Int8Extra_str(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_str(_7);
    return _8;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

String IntRef_format(String* s, int* x) {
    int _9 = Int_copy(x);
    String _10 = Int_format(s, _9);
    return _10;
}

String IntRef_prn(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

String IntRef_str(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

Long Long_blit(Long x) {
    Long _7 = x; // From the 'the' function.
    return _7;
}

bool Long_even_QMARK_(Long a) {
    Long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

Maybe__Long Long_from_MINUS_string(String* s) {
    Maybe__Long _25;
    /* let */ {
        Long res = 0l;
        Maybe__Long _24;
        Long* _13 = &res; // ref
        bool _14 = Long_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__Long _18 = Maybe_Just__Long(res);
            Maybe__Long _19 = _18;
            _24 = _19;
        } else {
            Maybe__Long _22 = Maybe_Nothing__Long();
            Maybe__Long _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Long_hash(Long* k) {
    Long _9 = Long_copy(k);
    Long _10 = _9; // From the 'the' function.
    int _11 = Long_to_MINUS_int(_10);
    return _11;
}

bool Long_odd_QMARK_(Long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

String Long_prn(Long x) {
    String _6 = Long_str(x);
    return _6;
}

Long Long_random() {
    Long _7 = Long_from_MINUS_int(CARP_INT_MAX);
    Long _8 = Long_random_MINUS_between(0l, _7);
    return _8;
}

Long Long_random_MINUS_between(Long lower, Long upper) {
    Long _24;
    /* let */ {
        Long _10 = Long__MINUS_(upper, lower);
        Long diff = _10;
        double _17 = Double_from_MINUS_long(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        Long _21 = Double_to_MINUS_long(_20);
        Long _23 = Long__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

Long Long_zero() {
    return 0l;
}

bool LongRef__LT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

String LongRef_format(String* s, Long* x) {
    Long _9 = Long_copy(x);
    String _10 = Long_format(s, _9);
    return _10;
}

String LongRef_prn(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

String LongRef_str(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->buckets)); }

Map__ColorId_String Map_create__ColorId_String() {
    Lambda _9 = { .callback = (void*)Bucket_empty__ColorId_String, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Bucket.empty__ColorId_String (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Bucket__ColorId_String _11 = Array_repeat__Bucket__ColorId_String(Map_dflt_MINUS_len, _10);
    Map__ColorId_String _12 = Map_init__ColorId_String(0, Map_dflt_MINUS_len, _11);
    return _12;
}

void Map_delete__ColorId_String(Map__ColorId_String p) {
    /* Ignore non-managed member 'len' : Int */
    /* Ignore non-managed member 'n_MINUS_buckets' : Int */
    Array_delete__Bucket__ColorId_String(p.buckets);
}

Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a) {
    Map__ColorId_String _61;
    /* let */ {
        Map__ColorId_String _7 = Map_create__ColorId_String();
        Map__ColorId_String m = _7;
        /* let */ {
            int i = 0;
            Array__Pair__ColorId_String* _20 = &a; // ref
            int _21 = Array_length__Pair__ColorId_String(_20);
            bool _22 = Int__LT_(i, _21);
            bool _57 = _22;
            while (_57) {
                /* let */ {
                    Array__Pair__ColorId_String* _29 = &a; // ref
                    Pair__ColorId_String* _31 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_29, i);
                    Pair__ColorId_String* e = _31;
                    ColorId* _35 = Pair_a__ColorId_String(e);
                    ColorId* k = _35;
                    String* _39 = Pair_b__ColorId_String(e);
                    String* v = _39;
                    Map__ColorId_String* _44 = &m; // ref
                    Map_put_BANG___ColorId_String(_44, k, v);
                }
                int _54 = Int__PLUS_(i, 1);
                i = _54;  // Int = Int
                Array__Pair__ColorId_String* _20 = &a; // ref
                int _21 = Array_length__Pair__ColorId_String(_20);
                bool _22 = Int__LT_(i, _21);
                _57 = _22;
            }
        }
        Map__ColorId_String _60 = m;
        _61 = _60;
    }
    Array_delete__Pair__ColorId_String(a);
    return _61;
}

String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value) {
    String _29;
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _23 = Map_buckets__ColorId_String(m);
        Bucket__ColorId_String* _25 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(_23, idx);
        String _28 = Bucket_get__ColorId_String(_25, k, default_MINUS_value);
        _29 = _28;
    }
    return _29;
}

String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k) {
    String _10 = String_zero();
    String* _11 = &_10; // ref
    String _12 = Map_get_MINUS_with_MINUS_default__ColorId_String(m, k, _11);
    String_delete(_10);
    return _12;
}

Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets) {
    Map__ColorId_String instance;
    instance.len = len;
    instance.n_MINUS_buckets = n_MINUS_buckets;
    instance.buckets = buckets;
    return instance;
}

int* Map_len__ColorId_String(Map__ColorId_String* p) { return (&(p->len)); }

int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->n_MINUS_buckets)); }

void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    Map_put_MINUS__BANG___ColorId_String(m, k, v);
}

void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _21 = Map_buckets__ColorId_String(m);
        Array__Bucket__ColorId_String* b = _21;
        Bucket__ColorId_String* _26 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(b, idx);
        Bucket__ColorId_String* n = _26;
        int* _35 = Map_len__ColorId_String(m);
        int _36 = Int_copy(_35);
        int _37 = Int_inc(_36);
        Map_set_MINUS_len_BANG___ColorId_String(m, _37);
        Bucket_put_BANG___ColorId_String(n, k, v);
    }
}

void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue) {
    /* Ignore non-managed member 'len' : Int */
    pRef->len = newValue;
}


Mat4 Mat4_copy(Mat4* pRef) {
    Mat4 copy = *pRef;
    copy.data = Array_copy__float(&(pRef->data));
    return copy;
}

Array__float* Mat4_data(Mat4* p) { return (&(p->data)); }

void Mat4_delete(Mat4 p) {
    Array_delete__float(p.data);
}

Mat4 Mat4_identity() {
    Mat4 _45;
    /* let */ {
        static float _9_lit = 0.0f;
        float* _9 = &_9_lit; // ref
        Array__float _10 = Array_replicate__float(16, _9);
        Array__float m = _10;
        Array__float* _16 = &m; // ref
        Array_aset_BANG___float(_16, 0, 1.0f);
        Array__float* _23 = &m; // ref
        Array_aset_BANG___float(_23, 5, 1.0f);
        Array__float* _30 = &m; // ref
        Array_aset_BANG___float(_30, 10, 1.0f);
        Array__float* _37 = &m; // ref
        Array_aset_BANG___float(_37, 15, 1.0f);
        Mat4 _43 = Mat4_init(m);
        Mat4 _44 = _43;
        _45 = _44;
    }
    return _45;
}

Mat4 Mat4_init(Array__float data) {
    Mat4 instance;
    instance.data = data;
    return instance;
}

Mat4 Mat4_mul(Mat4* a, Mat4* b) {
    Mat4 _139;
    /* let */ {
        Array__float* _9 = Mat4_data(a);
        Array__float* m1 = _9;
        Array__float* _13 = Mat4_data(b);
        Array__float* m2 = _13;
        static float _19_lit = 0.0f;
        float* _19 = &_19_lit; // ref
        Array__float _20 = Array_replicate__float(16, _19);
        Array__float res = _20;
        /* let */ {
            int col = 0;
            bool _31 = Int__LT_(col, 4);
            bool _133 = _31;
            while (_133) {
                /* let */ {
                    int row = 0;
                    bool _41 = Int__LT_(row, 4);
                    bool _123 = _41;
                    while (_123) {
                        /* let */ {
                            float sum = 0.0f;
                            /* let */ {
                                int k = 0;
                                bool _56 = Int__LT_(k, 4);
                                bool _98 = _56;
                                while (_98) {
                                    int _70 = Int__MUL_(k, 4);
                                    int _72 = Int__PLUS_(_70, row);
                                    float* _73 = Array_unsafe_MINUS_nth__float(m1, _72);
                                    float _74 = Float_copy(_73);
                                    int _82 = Int__MUL_(col, 4);
                                    int _84 = Int__PLUS_(_82, k);
                                    float* _85 = Array_unsafe_MINUS_nth__float(m2, _84);
                                    float _86 = Float_copy(_85);
                                    float _87 = Float__MUL_(_74, _86);
                                    float _88 = Float__PLUS_(sum, _87);
                                    sum = _88;  // Float = Float
                                    int _95 = Int__PLUS_(k, 1);
                                    k = _95;  // Int = Int
                                    bool _56 = Int__LT_(k, 4);
                                    _98 = _56;
                                }
                            }
                            Array__float* _103 = &res; // ref
                            int _108 = Int__MUL_(col, 4);
                            int _110 = Int__PLUS_(_108, row);
                            Array_aset_BANG___float(_103, _110, sum);
                        }
                        int _120 = Int__PLUS_(row, 1);
                        row = _120;  // Int = Int
                        bool _41 = Int__LT_(row, 4);
                        _123 = _41;
                    }
                }
                int _130 = Int__PLUS_(col, 1);
                col = _130;  // Int = Int
                bool _31 = Int__LT_(col, 4);
                _133 = _31;
            }
        }
        Mat4 _137 = Mat4_init(res);
        Mat4 _138 = _137;
        _139 = _138;
    }
    return _139;
}

String Mat4_prn(Mat4 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Mat4");
  temp = Array_prn__float(&p->data); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Mat4");
  bufferPtr += strlen("Mat4") + 2;

  temp = Array_prn__float(&p->data);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

Mat4 Mat4_set_MINUS_data(Mat4 p, Array__float newValue) {
    Array_delete__float(p.data);
    p.data = newValue;
    return p;
}


void Mat4_set_MINUS_data_BANG_(Mat4* pRef, Array__float newValue) {
    Array_delete__float(pRef->data);
    pRef->data = newValue;
}


String Mat4_str(Mat4 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Mat4");
  temp = Array_prn__float(&p->data); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Mat4");
  bufferPtr += strlen("Mat4") + 2;

  temp = Array_prn__float(&p->data);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

Mat4 Mat4_update_MINUS_data(Mat4 p, Lambda *updater) {
    p.data = (*updater).env ? ((Fn__LambdaEnv_Array__float_Array__float)(*updater).callback)((*updater).env, p.data) : ((Fn__Array__float_Array__float)(*updater).callback)(p.data);
    return p;
}


Mat4 Mat4_zero() {
    static float _8_lit = 0.0f;
    float* _8 = &_8_lit; // ref
    Array__float _9 = Array_replicate__float(16, _8);
    Mat4 _10 = Mat4_init(_9);
    return _10;
}

Maybe__Long Maybe_Just__Long(Long member0) {
  Maybe__Long instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Long_Just_tag;
    return instance;
}

Maybe__String Maybe_Just__String(String member0) {
  Maybe__String instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__String_Just_tag;
    return instance;
}

Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0) {
  Maybe__Uint16 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint16_Just_tag;
    return instance;
}

Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0) {
  Maybe__Uint32 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint32_Just_tag;
    return instance;
}

Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0) {
  Maybe__Uint64 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint64_Just_tag;
    return instance;
}

Maybe__double Maybe_Just__double(double member0) {
  Maybe__double instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__double_Just_tag;
    return instance;
}

Maybe__float Maybe_Just__float(float member0) {
  Maybe__float instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__float_Just_tag;
    return instance;
}

Maybe__int Maybe_Just__int(int member0) {
  Maybe__int instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__int_Just_tag;
    return instance;
}

Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0) {
  Maybe__uint8_t instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__uint8_t_Just_tag;
    return instance;
}

Maybe__Long Maybe_Nothing__Long() {
  Maybe__Long instance;

    instance._tag = Maybe__Long_Nothing_tag;
    return instance;
}

Maybe__String Maybe_Nothing__String() {
  Maybe__String instance;

    instance._tag = Maybe__String_Nothing_tag;
    return instance;
}

Maybe__Uint16 Maybe_Nothing__Uint16() {
  Maybe__Uint16 instance;

    instance._tag = Maybe__Uint16_Nothing_tag;
    return instance;
}

Maybe__Uint32 Maybe_Nothing__Uint32() {
  Maybe__Uint32 instance;

    instance._tag = Maybe__Uint32_Nothing_tag;
    return instance;
}

Maybe__Uint64 Maybe_Nothing__Uint64() {
  Maybe__Uint64 instance;

    instance._tag = Maybe__Uint64_Nothing_tag;
    return instance;
}

Maybe__double Maybe_Nothing__double() {
  Maybe__double instance;

    instance._tag = Maybe__double_Nothing_tag;
    return instance;
}

Maybe__float Maybe_Nothing__float() {
  Maybe__float instance;

    instance._tag = Maybe__float_Nothing_tag;
    return instance;
}

Maybe__int Maybe_Nothing__int() {
  Maybe__int instance;

    instance._tag = Maybe__int_Nothing_tag;
    return instance;
}

Maybe__uint8_t Maybe_Nothing__uint8_t() {
  Maybe__uint8_t instance;

    instance._tag = Maybe__uint8_t_Nothing_tag;
    return instance;
}

void Maybe_delete__Long(Maybe__Long p) {
  if(p._tag == Maybe__Long_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Long */
  }
  else if(p._tag == Maybe__Long_Nothing_tag) {

  }

}

void Maybe_delete__String(Maybe__String p) {
  if(p._tag == Maybe__String_Just_tag) {
    String_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__String_Nothing_tag) {

  }

}

void Maybe_delete__Uint16(Maybe__Uint16 p) {
  if(p._tag == Maybe__Uint16_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint16 */
  }
  else if(p._tag == Maybe__Uint16_Nothing_tag) {

  }

}

void Maybe_delete__Uint32(Maybe__Uint32 p) {
  if(p._tag == Maybe__Uint32_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint32 */
  }
  else if(p._tag == Maybe__Uint32_Nothing_tag) {

  }

}

void Maybe_delete__Uint64(Maybe__Uint64 p) {
  if(p._tag == Maybe__Uint64_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint64 */
  }
  else if(p._tag == Maybe__Uint64_Nothing_tag) {

  }

}

void Maybe_delete__double(Maybe__double p) {
  if(p._tag == Maybe__double_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Double */
  }
  else if(p._tag == Maybe__double_Nothing_tag) {

  }

}

void Maybe_delete__float(Maybe__float p) {
  if(p._tag == Maybe__float_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Float */
  }
  else if(p._tag == Maybe__float_Nothing_tag) {

  }

}

void Maybe_delete__int(Maybe__int p) {
  if(p._tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Int */
  }
  else if(p._tag == Maybe__int_Nothing_tag) {

  }

}

void Maybe_delete__uint8_t(Maybe__uint8_t p) {
  if(p._tag == Maybe__uint8_t_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Byte */
  }
  else if(p._tag == Maybe__uint8_t_Nothing_tag) {

  }

}

String Maybe_from__String(Maybe__String a, String dflt) {
    String _14;
    if(a._tag == Maybe__String_Nothing_tag) {
        Maybe__String _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _6_temp = a;
        String x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
        String_delete(dflt);
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

String Maybe_unsafe_MINUS_from__String(Maybe__String a) {
    String _10;
    if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _5_temp = a;
        String x = _5_temp.u.Just.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Maybe.carp", 17);
    return _10;
}

Opaque Opaque_copy(Opaque* pRef) {
    Opaque copy = *pRef;

    return copy;
}

void Opaque_delete(Opaque p) {

}

int Opaque_get_MINUS_tag(Opaque *p) { return p->_tag; }
String Opaque_prn(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

String Opaque_str(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->a)); }

Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->a)); }

Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->a)); }

ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p) { return (&(p->a)); }

int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->b)); }

String* Pair_b__ColorId_String(Pair__ColorId_String* p) { return (&(p->b)); }

void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p) {
    Array_delete__Uint16(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p) {
    Array_delete__Uint32(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p) {
    Array_delete__Uint64(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__ColorId_String(Pair__ColorId_String p) {
    Color_Id_delete(p.a);
    String_delete(p.b);
}

Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val) {
    ColorId _8 = Color_Id_copy(a_MINUS_val);
    String _11 = String_copy(b_MINUS_val);
    Pair__ColorId_String _12 = Pair_init__ColorId_String(_8, _11);
    return _12;
}

Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b) {
    Pair__Array__Uint16_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b) {
    Pair__Array__Uint32_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b) {
    Pair__Array__Uint64_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b) {
    Pair__ColorId_String instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue) {
    String_delete(p.b);
    p.b = newValue;
    return p;
}


int* Pattern_MatchResult_end(PatternMatchResult* p) { return (&(p->end)); }

PatternMatchResult Pattern_MatchResult_init(int start, int end) {
    PatternMatchResult instance;
    instance.start = start;
    instance.end = end;
    return instance;
}

String Pattern_MatchResult_prn(PatternMatchResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Pattern.MatchResult");
  temp = Int_prn(p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Pattern.MatchResult");
  bufferPtr += strlen("Pattern.MatchResult") + 2;

  temp = Int_prn(p->start);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres) {
    static String _9 = "(MatchResult start=%d end=";
    String *_9_ref = &_9;
    int* _12 = Pattern_MatchResult_start(ref_MINUS_matchres);
    String _13 = IntRef_format(_9_ref, _12);
    String* _14 = &_13; // ref
    static String _17 = "%d)";
    String *_17_ref = &_17;
    int* _20 = Pattern_MatchResult_end(ref_MINUS_matchres);
    String _21 = IntRef_format(_17_ref, _20);
    String* _22 = &_21; // ref
    String _23 = String_append(_14, _22);
    String* _24 = &_23; // ref
    String _25 = String_copy(_24);
    String_delete(_13);
    String_delete(_21);
    String_delete(_23);
    return _25;
}

PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    p.end = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    pRef->end = newValue;
}


PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    p.start = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    pRef->start = newValue;
}


int* Pattern_MatchResult_start(PatternMatchResult* p) { return (&(p->start)); }

String Pattern_MatchResult_str(PatternMatchResult matchres) {
    PatternMatchResult* _7 = &matchres; // ref
    String _8 = Pattern_MatchResult_ref_MINUS_str(_7);
    return _8;
}

PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater) {
    p.end = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.end) : ((Fn__int_int)(*updater).callback)(p.end);
    return p;
}


PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater) {
    p.start = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.start) : ((Fn__int_int)(*updater).callback)(p.start);
    return p;
}


int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m) {
    int* _13 = Pattern_MatchResult_start(m);
    int _14 = Int_copy(_13);
    return _14;
}

String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m) {
    Maybe__String _14 = Pattern_extract(m, _env->data);
    String _15 = Maybe_unsafe_MINUS_from__String(_14);
    return _15;
}

Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data) {
    Maybe__String _30;
    bool _8 = Pattern_non_MINUS_match_QMARK_(match_MINUS_res);
    if (_8) {
        Maybe__String _11 = Maybe_Nothing__String();
        Maybe__String _12 = _11;
        _30 = _12;
    } else {
        int* _20 = Pattern_MatchResult_start(match_MINUS_res);
        int _21 = Int_copy(_20);
        int* _25 = Pattern_MatchResult_end(match_MINUS_res);
        int _26 = Int_copy(_25);
        String _27 = String_slice(data, _21, _26);
        Maybe__String _28 = Maybe_Just__String(_27);
        Maybe__String _29 = _28;
        _30 = _29;
    }
    return _30;
}

int Pattern_find(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    int* _13 = Pattern_MatchResult_start(_12);
    int _14 = Int_copy(_13);
    return _14;
}

Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data) {
    // This lambda captures 0 variables: 
    Lambda _15 = {
      .callback = (void*)Pattern__Lambda_find_MINUS_all_15_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _16 = &_15; // ref
    Array__PatternMatchResult _21 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _22 = &_21; // ref
    Array__int _23 = Array_copy_MINUS_map__PatternMatchResult_int(_16, _22);
    Array_delete__PatternMatchResult(_21);
    Function_delete__PatternMatchResult_MUL__int(_15);
    return _23;
}

Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data) {
    Array__PatternMatchResult _77;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(PatternMatchResult) * 0) };
        Array__PatternMatchResult result = _7;
        int _11 = String_length(data);
        int stop = _11;
        PatternMatchResult _17 = Pattern_match_MINUS_from(pattern, data, 0);
        PatternMatchResult found = _17;
        PatternMatchResult* _23 = &found; // ref
        int* _24 = Pattern_MatchResult_end(_23);
        int _25 = Int_copy(_24);
        int start = _25;
        bool _46;
        bool _33 = _LT__EQ___int(start, stop);
        if (_33) {
            PatternMatchResult* _39 = &found; // ref
            bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
            bool _41 = not(_40);
            bool _42 = _41;
            _46 = _42;
        } else {
            bool _45 = false;
            _46 = _45;
        }
        bool _74 = _46;
        while (_74) {
            Array__PatternMatchResult _53 = Array_push_MINUS_back__PatternMatchResult(result, found);
            result = _53;  // (Array Pattern.MatchResult) = (Array Pattern.MatchResult)
            PatternMatchResult _61 = Pattern_match_MINUS_from(pattern, data, start);
            found = _61;  // Pattern.MatchResult = Pattern.MatchResult
            PatternMatchResult* _69 = &found; // ref
            int* _70 = Pattern_MatchResult_end(_69);
            int _71 = Int_copy(_70);
            start = _71;  // Int = Int
            bool _46;
            bool _33 = _LT__EQ___int(start, stop);
            if (_33) {
                PatternMatchResult* _39 = &found; // ref
                bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
                bool _41 = not(_40);
                bool _42 = _41;
                _46 = _42;
            } else {
                bool _45 = false;
                _46 = _45;
            }
            _74 = _46;
        }
        Array__PatternMatchResult _76 = result;
        _77 = _76;
    }
    return _77;
}

Pattern Pattern_from_MINUS_chars(Array__Char* chars) {
    static String _12 = "[";
    String *_12_ref = &_12;
    String _13 = String_copy(_12_ref);
    String _14 = StringCopy_str(_13);
    String* _15 = &_14; // ref
    String _22 = String_from_MINUS_chars(chars);
    String _23 = StringCopy_str(_22);
    String* _24 = &_23; // ref
    static String _28 = "]";
    String *_28_ref = &_28;
    String _29 = String_copy(_28_ref);
    String _30 = StringCopy_str(_29);
    String* _31 = &_30; // ref
    String _32 = String_append(_24, _31);
    String* _33 = &_32; // ref
    String _34 = String_append(_15, _33);
    String* _35 = &_34; // ref
    String _36 = String_copy(_35);
    String* _37 = &_36; // ref
    Pattern _38 = Pattern_init(_37);
    String_delete(_14);
    String_delete(_23);
    String_delete(_30);
    String_delete(_32);
    String_delete(_34);
    String_delete(_36);
    return _38;
}

Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data) {
    // This lambda captures 1 variables: data
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty *_16_env = CARP_MALLOC(sizeof(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty));
    _16_env->data = data;
    Lambda _16 = {
      .callback = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env,
      .env = _16_env,
      .delete = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete,
      .copy = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy
    };
    Lambda* _17 = &_16; // ref
    Array__PatternMatchResult _22 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _23 = &_22; // ref
    Array__String _24 = Array_copy_MINUS_map__PatternMatchResult_String(_17, _23);
    Array_delete__PatternMatchResult(_22);
    Function_delete__PatternMatchResult_MUL__String(_16);
    return _24;
}

PatternMatchResult Pattern_match(Pattern* pattern, String* data) {
    PatternMatchResult _9 = Pattern_match_MINUS_from(pattern, data, 0);
    return _9;
}

String Pattern_match_MINUS_str(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    Maybe__String _14 = Pattern_extract(_12, data);
    static String _16 = "";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    String _18 = Maybe_from__String(_14, _17);
    return _18;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = _DIV__EQ___int(_9, -1);
    return _11;
}

bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res) {
    bool _26;
    int* _9 = Pattern_MatchResult_start(match_MINUS_res);
    int _10 = Int_copy(_9);
    bool _12 = Int__LT_(_10, 0);
    if (_12) {
        bool _15 = true;
        _26 = _15;
    } else {
        int* _21 = Pattern_MatchResult_end(match_MINUS_res);
        int _22 = Int_copy(_21);
        bool _24 = Int__LT_(_22, 0);
        bool _25 = _24;
        _26 = _25;
    }
    return _26;
}

Array__String Pattern_split(Pattern* p, String* s) {
    Array__String _180;
    /* let */ {
        Array__int _10 = Pattern_find_MINUS_all(p, s);
        Array__int idx = _10;
        Array__String _15 = Pattern_global_MINUS_match_MINUS_str(p, s);
        Array__String strs = _15;
        Array__int* _20 = &idx; // ref
        int _21 = Array_length__int(_20);
        int lidx = _21;
        int _26 = Int_inc(lidx);
        Array__String _27 = Array_allocate__String(_26);
        Array__String result = _27;
        Array__String* _33 = &result; // ref
        int _58;
        bool _42 = Int__GT_(lidx, 0);
        if (_42) {
            Array__int* _48 = &idx; // ref
            int* _50 = Array_unsafe_MINUS_nth__int(_48, 0);
            int _51 = Int_copy(_50);
            int _52 = _51;
            _58 = _52;
        } else {
            int _56 = String_length(s);
            int _57 = _56;
            _58 = _57;
        }
        String _59 = String_slice(s, 0, _58);
        Array_aset_MINUS_uninitialized_BANG___String(_33, 0, _59);
        /* let */ {
            int i = 0;
            Array__int* _72 = &idx; // ref
            int _73 = Array_length__int(_72);
            int _74 = Int_dec(_73);
            bool _75 = Int__LT_(i, _74);
            bool _129 = _75;
            while (_129) {
                /* let */ {
                    Array__String* _83 = &strs; // ref
                    String* _85 = Array_unsafe_MINUS_nth__String(_83, i);
                    int _86 = String_length(_85);
                    int plen = _86;
                    Array__String* _91 = &result; // ref
                    int _94 = Int_inc(i);
                    Array__int* _102 = &idx; // ref
                    int* _104 = Array_unsafe_MINUS_nth__int(_102, i);
                    int _105 = Int_copy(_104);
                    int _107 = Int__PLUS_(_105, plen);
                    Array__int* _112 = &idx; // ref
                    int _115 = Int_inc(i);
                    int* _116 = Array_unsafe_MINUS_nth__int(_112, _115);
                    int _117 = Int_copy(_116);
                    String _118 = String_slice(s, _107, _117);
                    Array_aset_MINUS_uninitialized_BANG___String(_91, _94, _118);
                }
                int _126 = Int__PLUS_(i, 1);
                i = _126;  // Int = Int
                Array__int* _72 = &idx; // ref
                int _73 = Array_length__int(_72);
                int _74 = Int_dec(_73);
                bool _75 = Int__LT_(i, _74);
                _129 = _75;
            }
        }
        bool _135 = Int__GT_(lidx, 0);
        if (_135) {
            /* let */ {
                Array__String* _143 = &strs; // ref
                int _146 = Int_dec(lidx);
                String* _147 = Array_unsafe_MINUS_nth__String(_143, _146);
                int _148 = String_length(_147);
                int plen = _148;
                Array__String* _153 = &result; // ref
                Array__int* _162 = &idx; // ref
                int _165 = Int_dec(lidx);
                int* _166 = Array_unsafe_MINUS_nth__int(_162, _165);
                int _167 = Int_copy(_166);
                int _169 = Int__PLUS_(_167, plen);
                String _170 = String_suffix(s, _169);
                Array_aset_MINUS_uninitialized_BANG___String(_153, lidx, _170);
            }
        } else {
            /* () */
        }
        Array__String _179 = result;
        _180 = _179;
        Array_delete__String(strs);
        Array_delete__int(idx);
    }
    return _180;
}

Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef) {
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
    return copy;
}

void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p) {
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
}

int * Pointer_address__int(int * a) { return a; }
 bool Pointer_eq__CChar(CChar *p1, CChar *p2) { return p1 == p2; }
 bool Pointer_eq__FILE(FILE *p1, FILE *p2) { return p1 == p2; }
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_() {
    return Random__;
}

double Random_random() {
    double _11 = Double__MUL_(Random_s, Random_a);
    double _13 = Double__PLUS_(_11, Random_c);
    double _15 = Double_mod(_13, Random_m);
    Random_s = _15;  // Double = Double
    double _20 = Double__DIV_(Random_s, Random_m);
    double _21 = _20;
    return _21;
}

void Random_seed() {
    Uint64 _7 = System_nanotime();
    double _8 = Double_from_MINUS_uint64(_7);
    Random_s = _8;  // Double = Double
}

void Random_seed_MINUS_from(double new_MINUS_seed) {
    Random_s = new_MINUS_seed;  // Double = Double
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Error_tag;
    return instance;
}

Result__Char_String Result_Error__String_Char(String member0) {
  Result__Char_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Char_String_Error_tag;
    return instance;
}

Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0) {
  Result__FILE_MUL__String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Error_tag;
    return instance;
}

Result__String_String Result_Error__String_String(String member0) {
  Result__String_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__String_String_Error_tag;
    return instance;
}

Result__bool_String Result_Error__String_bool(String member0) {
  Result__bool_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__bool_String_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0) {
  Result__Array__Uint16_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Error_tag;
    return instance;
}

Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0) {
  Result__Array__Uint32_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Error_tag;
    return instance;
}

Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0) {
  Result__Array__Uint64_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0) {
  Result__Array__Uint16_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Success_tag;
    return instance;
}

Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0) {
  Result__Array__Uint32_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Success_tag;
    return instance;
}

Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0) {
  Result__Array__Uint64_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Success_tag;
    return instance;
}

Result__Char_String Result_Success__Char_String(Char member0) {
  Result__Char_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Char_String_Success_tag;
    return instance;
}

Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0) {
  Result__FILE_MUL__String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Success_tag;
    return instance;
}

Result__String_String Result_Success__String_String(String member0) {
  Result__String_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__String_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Success_tag;
    return instance;
}

Result__bool_String Result_Success__bool_String(bool member0) {
  Result__bool_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__bool_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef) {
    Result__Uint16_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
    }

    else if(pRef->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef) {
    Result__Uint32_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
    }

    else if(pRef->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef) {
    Result__Uint64_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
    }

    else if(pRef->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p) {
  if(p._tag == Result__Array__Uint16_int_Success_tag) {
    Array_delete__Uint16(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint16_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p) {
  if(p._tag == Result__Array__Uint32_int_Success_tag) {
    Array_delete__Uint32(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint32_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p) {
  if(p._tag == Result__Array__Uint64_int_Success_tag) {
    Array_delete__Uint64(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint64_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Char_String(Result__Char_String p) {
  if(p._tag == Result__Char_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Char */
  }
  else if(p._tag == Result__Char_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p) {
  if(p._tag == Result__FILE_MUL__String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : (Ptr FILE) */
  }
  else if(p._tag == Result__FILE_MUL__String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__String_String(Result__String_String p) {
  if(p._tag == Result__String_String_Success_tag) {
    String_delete(p.u.Success.member0);
  }
  else if(p._tag == Result__String_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p) {
  if(p._tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
  }
  else if(p._tag == Result__Uint16_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p) {
  if(p._tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
  }
  else if(p._tag == Result__Uint32_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p) {
  if(p._tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
  }
  else if(p._tag == Result__Uint64_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__bool_String(Result__bool_String p) {
  if(p._tag == Result__bool_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Bool */
  }
  else if(p._tag == Result__bool_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a) {
    bool _14;
    if(a->_tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        String* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        FILE** wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Uint16 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Uint32 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Uint64 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a) {
    String _10;
    if(a._tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String _5_temp = a;
        String x = _5_temp.u.Error.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 69);
    return _10;
}

FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a) {
    FILE* _10;
    if(a._tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String _5_temp = a;
        FILE* x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a) {
    Uint16 _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Uint16 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint16 _14 = Uint16_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a) {
    Uint32 _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Uint32 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint32 _14 = Uint32_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a) {
    Uint64 _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Uint64 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint64 _14 = Uint64_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c) {
    uint8_t _13 = tolower(c);
    return _13;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c) {
    uint8_t _13 = toupper(c);
    return _13;
}

bool String__Lambda_words_14_env(String* s) {
    bool _12 = String_empty_QMARK_(s);
    bool _13 = not(_12);
    return _13;
}

bool String_allocated_QMARK_(String* s) {
    CChar* _8 = String_cstr(s);
    bool _9 = null_QMARK___CChar(_8);
    bool _10 = not(_9);
    return _10;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_ascii_MINUS_to_MINUS_lower(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_lower_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_ascii_MINUS_to_MINUS_upper(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_upper_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_chomp(String* s) {
    static String _5 = "\\r$";
    String *_5_ref = &_5;
    static String _8 = "\\n$";
    String *_8_ref = &_8;
    static String _10 = "";
    String *_10_ref = &_10;
    String _12 = Pattern_substitute(_8_ref, s, _10_ref, 1);
    String* _13 = &_12; // ref
    static String _14 = "";
    String *_14_ref = &_14;
    String _16 = Pattern_substitute(_5_ref, _13, _14_ref, 1);
    String_delete(_12);
    return _16;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

String String_concat(Array__String* strings) {
    String _70;
    /* let */ {
        int j = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        int _15 = String_sum_MINUS_length(strings);
        String _17 = String_allocate(_15, 32/*' '*/);
        String result = _17;
        /* let */ {
            int i = 0;
            bool _28 = Int__LT_(i, lstrings);
            bool _66 = _28;
            while (_66) {
                /* let */ {
                    String* _35 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _35;
                    int _39 = String_length(str);
                    int len = _39;
                    String* _45 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_45, j, str);
                    int _54 = Int__PLUS_(j, len);
                    j = _54;  // Int = Int
                }
                int _63 = Int__PLUS_(i, 1);
                i = _63;  // Int = Int
                bool _28 = Int__LT_(i, lstrings);
                _66 = _28;
            }
        }
        String _69 = result;
        _70 = _69;
    }
    return _70;
}

bool String_contains_MINUS_string_QMARK_(String* s, String* needle) {
    int _9 = String_index_MINUS_of_MINUS_string(s, needle);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

bool String_contains_QMARK_(String* s, Char c) {
    int _9 = String_index_MINUS_of(s, c);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

int String_count_MINUS_char(String* s, Char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_length(s);
            bool _20 = Int__LT_(i, _19);
            bool _50 = _20;
            while (_50) {
                Char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _47 = Int__PLUS_(i, 1);
                i = _47;  // Int = Int
                int _19 = String_length(s);
                bool _20 = Int__LT_(i, _19);
                _50 = _20;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_length(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    bool _38;
    /* let */ {
        int _9 = String_length(s);
        int ls = _9;
        int _13 = String_length(sub);
        int lsub = _13;
        bool _37;
        bool _19 = _GT__EQ___int(ls, lsub);
        if (_19) {
            int _29 = Int__MINUS_(ls, lsub);
            String _30 = String_suffix(s, _29);
            String* _31 = &_30; // ref
            bool _32 = String__EQ_(sub, _31);
            bool _33 = _32;
            String_delete(_30);
            _37 = _33;
        } else {
            bool _36 = false;
            _37 = _36;
        }
        _38 = _37;
    }
    return _38;
}

int String_hash(String* k) {
    int _50;
    /* let */ {
        int h = 5381;
        /* let */ {
            int x = 0;
            int _18 = String_length(k);
            bool _19 = Int__LT_(x, _18);
            bool _44 = _19;
            while (_44) {
                int _27 = Int__MUL_(h, 33);
                Char _32 = String_char_MINUS_at(k, x);
                int _33 = Char_to_MINUS_int(_32);
                int _34 = Int__PLUS_(_27, _33);
                h = _34;  // Int = Int
                int _41 = Int__PLUS_(x, 1);
                x = _41;  // Int = Int
                int _18 = String_length(k);
                bool _19 = Int__LT_(x, _18);
                _44 = _19;
            }
        }
        int _48 = Int_abs(h);
        int _49 = _48;
        _50 = _49;
    }
    return _50;
}

Char String_head(String* s) {
    Char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

String String_join(String* sep, Array__String* strings) {
    String _116;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int num_MINUS_seps = _19;
        int _23 = String_length(sep);
        int sep_MINUS_length = _23;
        int _28 = Int__MUL_(num_MINUS_seps, sep_MINUS_length);
        int seps_MINUS_size = _28;
        int _35 = String_sum_MINUS_length(strings);
        int _36 = Int__PLUS_(seps_MINUS_size, _35);
        String _38 = String_allocate(_36, 32/*' '*/);
        String result = _38;
        /* let */ {
            int i = 0;
            bool _49 = Int__LT_(i, lstrings);
            bool _112 = _49;
            while (_112) {
                /* let */ {
                    String* _56 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _56;
                    int _60 = String_length(str);
                    int len = _60;
                    bool _67 = Int__GT_(i, 0);
                    if (_67) {
                        String* _72 = &result; // ref
                        String_string_MINUS_set_MINUS_at_BANG_(_72, j, sep);
                        int _81 = Int__PLUS_(j, sep_MINUS_length);
                        j = _81;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _91 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_91, j, str);
                    int _100 = Int__PLUS_(j, len);
                    j = _100;  // Int = Int
                }
                int _109 = Int__PLUS_(i, 1);
                i = _109;  // Int = Int
                bool _49 = Int__LT_(i, lstrings);
                _112 = _49;
            }
        }
        String _115 = result;
        _116 = _115;
    }
    return _116;
}

String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings) {
    String _107;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int sep_MINUS_length = _19;
        int _26 = String_sum_MINUS_length(strings);
        int _27 = Int__PLUS_(sep_MINUS_length, _26);
        String _29 = String_allocate(_27, 32/*' '*/);
        String result = _29;
        /* let */ {
            int i = 0;
            bool _40 = Int__LT_(i, lstrings);
            bool _103 = _40;
            while (_103) {
                /* let */ {
                    String* _47 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _47;
                    int _51 = String_length(str);
                    int len = _51;
                    bool _58 = Int__GT_(i, 0);
                    if (_58) {
                        String* _63 = &result; // ref
                        String_string_MINUS_set_BANG_(_63, j, sep);
                        int _72 = Int__PLUS_(j, 1);
                        j = _72;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _82 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_82, j, str);
                    int _91 = Int__PLUS_(j, len);
                    j = _91;  // Int = Int
                }
                int _100 = Int__PLUS_(i, 1);
                i = _100;  // Int = Int
                bool _40 = Int__LT_(i, lstrings);
                _103 = _40;
            }
        }
        String _106 = result;
        _107 = _106;
    }
    return _107;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_8.data)[0] = '\n';
    Array__Char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__Char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _26 = &pad; // ref
        Array__Char _27 = Array_replicate__Char(x, _26);
        Array__Char* _28 = &_27; // ref
        String _29 = String_from_MINUS_chars(_28);
        String* _30 = &_29; // ref
        String _32 = String_append(_30, s);
        _33 = _32;
        Array_delete__Char(_27);
        String_delete(_29);
    }
    return _33;
}

String String_pad_MINUS_right(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _27 = &pad; // ref
        Array__Char _28 = Array_replicate__Char(x, _27);
        Array__Char* _29 = &_28; // ref
        String _30 = String_from_MINUS_chars(_29);
        String* _31 = &_30; // ref
        String _32 = String_append(s, _31);
        _33 = _32;
        Array_delete__Char(_28);
        String_delete(_30);
    }
    return _33;
}

String String_prefix(String* s, int a) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_prefix__Array__Char(_12, a);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = (void*)Char_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Char.random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Char _11 = Array_repeat__Char(n, _10);
    Array__Char* _12 = &_11; // ref
    String _13 = String_from_MINUS_chars(_12);
    Array_delete__Char(_11);
    return _13;
}

String String_repeat(int n, String* inpt) {
    String _52;
    /* let */ {
        int _9 = String_length(inpt);
        int l = _9;
        int _15 = Int__MUL_(n, l);
        String _17 = String_allocate(_15, 48/*'0'*/);
        String str = _17;
        /* let */ {
            int i = 0;
            bool _28 = Int__LT_(i, n);
            bool _48 = _28;
            while (_48) {
                String* _33 = &str; // ref
                int _37 = Int__MUL_(i, l);
                String_string_MINUS_set_MINUS_at_BANG_(_33, _37, inpt);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                bool _28 = Int__LT_(i, n);
                _48 = _28;
            }
        }
        String _51 = str;
        _52 = _51;
    }
    return _52;
}

String String_reverse(String* s) {
    Array__Char _9 = String_chars(s);
    Array__Char _10 = Array_reverse__Char(_9);
    Array__Char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__Char(_10);
    return _12;
}

String String_slice(String* s, int a, int b) {
    Array__Char _12 = String_chars(s);
    Array__Char* _13 = &_12; // ref
    Array__Char _16 = Array_slice__Char(_13, a, b);
    Array__Char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__Char(_12);
    Array_delete__Char(_16);
    return _18;
}

Array__String String_split_MINUS_by(String* s, Array__Char* separators) {
    Array__String _153;
    /* let */ {
        Pattern _9 = Pattern_from_MINUS_chars(separators);
        Pattern pat = _9;
        Pattern* _14 = &pat; // ref
        Array__int _16 = Pattern_find_MINUS_all(_14, s);
        Array__int idx = _16;
        Array__int* _21 = &idx; // ref
        int _22 = Array_length__int(_21);
        int lidx = _22;
        int _27 = Int_inc(lidx);
        Array__String _28 = Array_allocate__String(_27);
        Array__String result = _28;
        Array__String* _34 = &result; // ref
        int _59;
        bool _43 = Int__GT_(lidx, 0);
        if (_43) {
            Array__int* _49 = &idx; // ref
            int* _51 = Array_unsafe_MINUS_nth__int(_49, 0);
            int _52 = Int_copy(_51);
            int _53 = _52;
            _59 = _53;
        } else {
            int _57 = String_length(s);
            int _58 = _57;
            _59 = _58;
        }
        String _60 = String_slice(s, 0, _59);
        Array_aset_MINUS_uninitialized_BANG___String(_34, 0, _60);
        /* let */ {
            int i = 0;
            Array__int* _73 = &idx; // ref
            int _74 = Array_length__int(_73);
            int _75 = Int_dec(_74);
            bool _76 = Int__LT_(i, _75);
            bool _117 = _76;
            while (_117) {
                Array__String* _81 = &result; // ref
                int _84 = Int_inc(i);
                Array__int* _92 = &idx; // ref
                int* _94 = Array_unsafe_MINUS_nth__int(_92, i);
                int _95 = Int_copy(_94);
                int _96 = Int_inc(_95);
                Array__int* _101 = &idx; // ref
                int _104 = Int_inc(i);
                int* _105 = Array_unsafe_MINUS_nth__int(_101, _104);
                int _106 = Int_copy(_105);
                String _107 = String_slice(s, _96, _106);
                Array_aset_MINUS_uninitialized_BANG___String(_81, _84, _107);
                int _114 = Int__PLUS_(i, 1);
                i = _114;  // Int = Int
                Array__int* _73 = &idx; // ref
                int _74 = Array_length__int(_73);
                int _75 = Int_dec(_74);
                bool _76 = Int__LT_(i, _75);
                _117 = _76;
            }
        }
        bool _123 = Int__GT_(lidx, 0);
        if (_123) {
            Array__String* _128 = &result; // ref
            Array__int* _137 = &idx; // ref
            int _140 = Int_dec(lidx);
            int* _141 = Array_unsafe_MINUS_nth__int(_137, _140);
            int _142 = Int_copy(_141);
            int _143 = Int_inc(_142);
            String _144 = String_suffix(s, _143);
            Array_aset_MINUS_uninitialized_BANG___String(_128, lidx, _144);
        } else {
            /* () */
        }
        Array__String _152 = result;
        _153 = _152;
        Array_delete__int(idx);
        Pattern_delete(pat);
    }
    return _153;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    bool _33;
    /* let */ {
        int _9 = String_length(sub);
        int ls = _9;
        bool _32;
        int _15 = String_length(s);
        bool _17 = _GT__EQ___int(_15, ls);
        if (_17) {
            String _25 = String_prefix(s, ls);
            String* _26 = &_25; // ref
            bool _27 = String__EQ_(sub, _26);
            bool _28 = _27;
            String_delete(_25);
            _32 = _28;
        } else {
            bool _31 = false;
            _32 = _31;
        }
        _33 = _32;
    }
    return _33;
}

String String_suffix(String* s, int b) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_suffix__Char(_12, b);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

int String_sum_MINUS_length(Array__String* strings) {
    int _47;
    /* let */ {
        int sum = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        /* let */ {
            int i = 0;
            bool _21 = Int__LT_(i, lstrings);
            bool _43 = _21;
            while (_43) {
                String* _31 = Array_unsafe_MINUS_nth__String(strings, i);
                int _32 = String_length(_31);
                int _33 = Int__PLUS_(sum, _32);
                sum = _33;  // Int = Int
                int _40 = Int__PLUS_(i, 1);
                i = _40;  // Int = Int
                bool _21 = Int__LT_(i, lstrings);
                _43 = _21;
            }
        }
        int _46 = sum;
        _47 = _46;
    }
    return _47;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_words_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array _22 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(Char) * 3) };
    ((Char*)_22.data)[0] = '\t';
    ((Char*)_22.data)[1] = 32/*' '*/;
    ((Char*)_22.data)[2] = '\n';
    Array__Char* _23 = &_22; // ref
    Array__String _24 = String_split_MINUS_by(s, _23);
    Array__String _25 = Array_endo_MINUS_filter__String(_15, _24);
    Array_delete__Char(_22);
    Function_delete__String_MUL__bool(_14);
    return _25;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__LT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__LT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__GT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__GT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

String StringCopy_prn(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_prn(_10);
    String_delete(_9);
    return _11;
}

String StringCopy_str(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_str(_10);
    String_delete(_9);
    return _11;
}

String System_error_MINUS_text() {
    String _5 = System_strerror(errno);
    return _5;
}

void System_exit__void(int code) { exit(code); }
String System_strerror(int error_MINUS_no) {
    CChar* _7 = strerror(error_MINUS_no);
    String _8 = String_from_MINUS_cstr(_7);
    return _8;
}

TestState Test_State_copy(TestState* pRef) {
    TestState copy = *pRef;
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
    return copy;
}

void Test_State_delete(TestState p) {
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
}

int* Test_State_failed(TestState* p) { return (&(p->failed)); }

TestState Test_State_init(int passed, int failed) {
    TestState instance;
    instance.passed = passed;
    instance.failed = failed;
    return instance;
}

int* Test_State_passed(TestState* p) { return (&(p->passed)); }

String Test_State_prn(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Test.State");
  bufferPtr += strlen("Test.State") + 2;

  temp = Int_prn(p->passed);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

TestState Test_State_set_MINUS_failed(TestState p, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    p.failed = newValue;
    return p;
}


void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    pRef->failed = newValue;
}


TestState Test_State_set_MINUS_passed(TestState p, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    p.passed = newValue;
    return p;
}


void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    pRef->passed = newValue;
}


String Test_State_str(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Test.State");
  bufferPtr += strlen("Test.State") + 2;

  temp = Int_prn(p->passed);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater) {
    p.failed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.failed) : ((Fn__int_int)(*updater).callback)(p.failed);
    return p;
}


TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater) {
    p.passed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.passed) : ((Fn__int_int)(*updater).callback)(p.passed);
    return p;
}


TestState Test_assert_MINUS_equal__double_String(TestState* state, double x, double y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Double__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__double_double_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__float_String(TestState* state, float x, float y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Float__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Float.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__float_float_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__int_String(TestState* state, int x, int y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Int__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__int_int_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_display_MINUS_test__double_double_String_String(TestState* state, double expected, double actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _24 = StringCopy_str(_23);
        String* _25 = &_24; // ref
        String _32 = String_copy(descr);
        String _33 = StringCopy_str(_32);
        String* _34 = &_33; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _40 = StringCopy_str(_39);
        String* _41 = &_40; // ref
        String _42 = String_append(_34, _41);
        String* _43 = &_42; // ref
        String _44 = String_append(_25, _43);
        String* _45 = &_44; // ref
        String _46 = String_copy(_45);
        String* _47 = &_46; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_24);
        String_delete(_33);
        String_delete(_40);
        String_delete(_42);
        String_delete(_44);
        String_delete(_46);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _73 = StringCopy_str(_72);
        String* _74 = &_73; // ref
        String _81 = String_copy(descr);
        String _82 = StringCopy_str(_81);
        String* _83 = &_82; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _89 = StringCopy_str(_88);
        String* _90 = &_89; // ref
        String _91 = String_append(_83, _90);
        String* _92 = &_91; // ref
        String _93 = String_append(_74, _92);
        String* _94 = &_93; // ref
        String _95 = String_copy(_94);
        String* _96 = &_95; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _108 = StringCopy_str(_107);
        String* _109 = &_108; // ref
        String _116 = String_copy(what);
        String _117 = StringCopy_str(_116);
        String* _118 = &_117; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _124 = StringCopy_str(_123);
        String* _125 = &_124; // ref
        String _126 = String_append(_118, _125);
        String* _127 = &_126; // ref
        String _128 = String_append(_109, _127);
        String* _129 = &_128; // ref
        String _130 = String_copy(_129);
        String* _131 = &_130; // ref
        IO_print(_131);
        String _137 = Double_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _150 = StringCopy_str(_149);
        String* _151 = &_150; // ref
        String _158 = Double_str(actual);
        String _159 = StringCopy_str(_158);
        String* _160 = &_159; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _166 = StringCopy_str(_165);
        String* _167 = &_166; // ref
        String _168 = String_append(_160, _167);
        String* _169 = &_168; // ref
        String _170 = String_append(_151, _169);
        String* _171 = &_170; // ref
        String _172 = String_copy(_171);
        String* _173 = &_172; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_108);
        String_delete(_117);
        String_delete(_124);
        String_delete(_126);
        String_delete(_128);
        String_delete(_130);
        String_delete(_137);
        String_delete(_150);
        String_delete(_159);
        String_delete(_166);
        String_delete(_168);
        String_delete(_170);
        String_delete(_172);
        String_delete(_73);
        String_delete(_82);
        String_delete(_89);
        String_delete(_91);
        String_delete(_93);
        String_delete(_95);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__float_float_String_String(TestState* state, float expected, float actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _24 = StringCopy_str(_23);
        String* _25 = &_24; // ref
        String _32 = String_copy(descr);
        String _33 = StringCopy_str(_32);
        String* _34 = &_33; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _40 = StringCopy_str(_39);
        String* _41 = &_40; // ref
        String _42 = String_append(_34, _41);
        String* _43 = &_42; // ref
        String _44 = String_append(_25, _43);
        String* _45 = &_44; // ref
        String _46 = String_copy(_45);
        String* _47 = &_46; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_24);
        String_delete(_33);
        String_delete(_40);
        String_delete(_42);
        String_delete(_44);
        String_delete(_46);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _73 = StringCopy_str(_72);
        String* _74 = &_73; // ref
        String _81 = String_copy(descr);
        String _82 = StringCopy_str(_81);
        String* _83 = &_82; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _89 = StringCopy_str(_88);
        String* _90 = &_89; // ref
        String _91 = String_append(_83, _90);
        String* _92 = &_91; // ref
        String _93 = String_append(_74, _92);
        String* _94 = &_93; // ref
        String _95 = String_copy(_94);
        String* _96 = &_95; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _108 = StringCopy_str(_107);
        String* _109 = &_108; // ref
        String _116 = String_copy(what);
        String _117 = StringCopy_str(_116);
        String* _118 = &_117; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _124 = StringCopy_str(_123);
        String* _125 = &_124; // ref
        String _126 = String_append(_118, _125);
        String* _127 = &_126; // ref
        String _128 = String_append(_109, _127);
        String* _129 = &_128; // ref
        String _130 = String_copy(_129);
        String* _131 = &_130; // ref
        IO_print(_131);
        String _137 = Float_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _150 = StringCopy_str(_149);
        String* _151 = &_150; // ref
        String _158 = Float_str(actual);
        String _159 = StringCopy_str(_158);
        String* _160 = &_159; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _166 = StringCopy_str(_165);
        String* _167 = &_166; // ref
        String _168 = String_append(_160, _167);
        String* _169 = &_168; // ref
        String _170 = String_append(_151, _169);
        String* _171 = &_170; // ref
        String _172 = String_copy(_171);
        String* _173 = &_172; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_108);
        String_delete(_117);
        String_delete(_124);
        String_delete(_126);
        String_delete(_128);
        String_delete(_130);
        String_delete(_137);
        String_delete(_150);
        String_delete(_159);
        String_delete(_166);
        String_delete(_168);
        String_delete(_170);
        String_delete(_172);
        String_delete(_73);
        String_delete(_82);
        String_delete(_89);
        String_delete(_91);
        String_delete(_93);
        String_delete(_95);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _24 = StringCopy_str(_23);
        String* _25 = &_24; // ref
        String _32 = String_copy(descr);
        String _33 = StringCopy_str(_32);
        String* _34 = &_33; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _40 = StringCopy_str(_39);
        String* _41 = &_40; // ref
        String _42 = String_append(_34, _41);
        String* _43 = &_42; // ref
        String _44 = String_append(_25, _43);
        String* _45 = &_44; // ref
        String _46 = String_copy(_45);
        String* _47 = &_46; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_24);
        String_delete(_33);
        String_delete(_40);
        String_delete(_42);
        String_delete(_44);
        String_delete(_46);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _73 = StringCopy_str(_72);
        String* _74 = &_73; // ref
        String _81 = String_copy(descr);
        String _82 = StringCopy_str(_81);
        String* _83 = &_82; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _89 = StringCopy_str(_88);
        String* _90 = &_89; // ref
        String _91 = String_append(_83, _90);
        String* _92 = &_91; // ref
        String _93 = String_append(_74, _92);
        String* _94 = &_93; // ref
        String _95 = String_copy(_94);
        String* _96 = &_95; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _108 = StringCopy_str(_107);
        String* _109 = &_108; // ref
        String _116 = String_copy(what);
        String _117 = StringCopy_str(_116);
        String* _118 = &_117; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _124 = StringCopy_str(_123);
        String* _125 = &_124; // ref
        String _126 = String_append(_118, _125);
        String* _127 = &_126; // ref
        String _128 = String_append(_109, _127);
        String* _129 = &_128; // ref
        String _130 = String_copy(_129);
        String* _131 = &_130; // ref
        IO_print(_131);
        String _137 = Int_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _150 = StringCopy_str(_149);
        String* _151 = &_150; // ref
        String _158 = Int_str(actual);
        String _159 = StringCopy_str(_158);
        String* _160 = &_159; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _166 = StringCopy_str(_165);
        String* _167 = &_166; // ref
        String _168 = String_append(_160, _167);
        String* _169 = &_168; // ref
        String _170 = String_append(_151, _169);
        String* _171 = &_170; // ref
        String _172 = String_copy(_171);
        String* _173 = &_172; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_108);
        String_delete(_117);
        String_delete(_124);
        String_delete(_126);
        String_delete(_128);
        String_delete(_130);
        String_delete(_137);
        String_delete(_150);
        String_delete(_159);
        String_delete(_166);
        String_delete(_168);
        String_delete(_170);
        String_delete(_172);
        String_delete(_73);
        String_delete(_82);
        String_delete(_89);
        String_delete(_91);
        String_delete(_93);
        String_delete(_95);
        _188 = _187;
    }
    return _188;
}

void Test_handle_MINUS_signal__void(int x) {
    System_exit__void(x);
}

TestState Test_handler__double_double_String_String(TestState* state, double expected, double actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, double, double))op.callback)(op.env, expected, actual) : ((bool(*)(double, double))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__double_double_String_String(state, expected, actual, descr, what, _18);
    Function_delete__double_double_bool(op);
    return _19;
}

TestState Test_handler__float_float_String_String(TestState* state, float expected, float actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, float, float))op.callback)(op.env, expected, actual) : ((bool(*)(float, float))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__float_float_String_String(state, expected, actual, descr, what, _18);
    Function_delete__float_float_bool(op);
    return _19;
}

TestState Test_handler__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, expected, actual) : ((bool(*)(int, int))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__int_int_String_String(state, expected, actual, descr, what, _18);
    Function_delete__int_int_bool(op);
    return _19;
}

void Test_print_MINUS_test_MINUS_results(TestState* state) {
    /* let */ {
        int* _9 = Test_State_passed(state);
        int _10 = Int_copy(_9);
        int passed = _10;
        int* _15 = Test_State_failed(state);
        int _16 = Int_copy(_15);
        int failed = _16;
        static String _20 = "Results:";
        String *_20_ref = &_20;
        IO_println(_20_ref);
        int _27 = Int__PLUS_(passed, failed);
        bool _29 = Int__GT_(_27, 0);
        if (_29) {
            ColorId _33 = Color_Id_Green();
            IO_color(_33);
            bool _39 = Int__GT_(passed, 0);
            if (_39) {
                static String _44 = "\t|";
                String *_44_ref = &_44;
                String _49 = String_allocate(passed, 61/*'='*/);
                String* _50 = &_49; // ref
                String _51 = String_append(_44_ref, _50);
                String* _52 = &_51; // ref
                IO_print(_52);
                String_delete(_49);
                String_delete(_51);
            } else {
                /* () */
            }
            bool _63 = Int__EQ_(failed, 0);
            if (_63) {
                static String _66 = "|";
                String *_66_ref = &_66;
                IO_print(_66_ref);
            } else {
                /* () */
            }
            ColorId _75 = Color_Id_Red();
            IO_color(_75);
            bool _81 = Int__EQ_(passed, 0);
            if (_81) {
                static String _84 = "\t|";
                String *_84_ref = &_84;
                IO_print(_84_ref);
            } else {
                /* () */
            }
            bool _95 = Int__GT_(failed, 0);
            if (_95) {
                String _104 = String_allocate(failed, 61/*'='*/);
                String* _105 = &_104; // ref
                static String _106 = "|";
                String *_106_ref = &_106;
                String _107 = String_append(_105, _106_ref);
                String* _108 = &_107; // ref
                IO_print(_108);
                String_delete(_104);
                String_delete(_107);
            } else {
                /* () */
            }
            static String _116 = "";
            String *_116_ref = &_116;
            IO_println(_116_ref);
        } else {
            /* () */
        }
        ColorId _125 = Color_Id_Green();
        IO_color(_125);
        static String _128 = "\tPassed: ";
        String *_128_ref = &_128;
        IO_print(_128_ref);
        String _134 = Int_str(passed);
        String* _135 = &_134; // ref
        IO_print(_135);
        ColorId _139 = Color_Id_Red();
        IO_color(_139);
        static String _142 = "\tFailed: ";
        String *_142_ref = &_142;
        IO_print(_142_ref);
        String _148 = Int_str(failed);
        String* _149 = &_148; // ref
        IO_println(_149);
        ColorId _153 = Color_Id_Reset();
        IO_color(_153);
        String_delete(_134);
        String_delete(_148);
    }
}

TestState Test_reset(TestState state) {
    TestState _8 = Test_State_set_MINUS_passed(state, 0);
    TestState _10 = Test_State_set_MINUS_failed(_8, 0);
    return _10;
}

int Test_run_MINUS_child(Lambda x) {
    int _39;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _38;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _20 = 0;
            _38 = _20;
        } else {
            /* let */ {
                int* _28 = &status; // ref
                int* _29 = Pointer_address__int(_28);
                int _30 = wait(_29);
                int _ = _30;
                /* () */
            }
            int _36 = WEXITSTATUS(status);
            int _37 = _36;
            _38 = _37;
        }
        _39 = _38;
    }
    Function_delete__void(x);
    return _39;
}

int Test_run_MINUS_child_MINUS_signals(Lambda x) {
    int _59;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _58;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            Lambda _19 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGABRT, _19.callback);
            Lambda _23 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGFPE, _23.callback);
            Lambda _27 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGILL, _27.callback);
            Lambda _31 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGSEGV, _31.callback);
            Lambda _35 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGTERM, _35.callback);
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _40 = 0;
            _58 = _40;
        } else {
            /* let */ {
                int* _48 = &status; // ref
                int* _49 = Pointer_address__int(_48);
                int _50 = wait(_49);
                int _ = _50;
                /* () */
            }
            int _56 = WEXITSTATUS(status);
            int _57 = _56;
            _58 = _57;
        }
        _59 = _58;
    }
    Function_delete__void(x);
    return _59;
}

Uint16 Uint16_blit(Uint16 x) {
    Uint16 _7 = x; // From the 'the' function.
    return _7;
}

int Uint16_hash(Uint16* k) {
    Uint16 _8 = Uint16_copy(k);
    Long _9 = Uint16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint16_prn(Uint16 a) {
    String _6 = Uint16_str(a);
    return _6;
}

Uint16 Uint16_zero() {
    Uint16 _5 = Uint16_from_MINUS_long(0l);
    return _5;
}

bool Uint16Extra__EQ_(Uint16* a, Uint16* b) {
    Uint16 _8 = Uint16_copy(a);
    Uint16 _11 = Uint16_copy(b);
    bool _12 = Uint16__EQ_(_8, _11);
    return _12;
}

String Uint16Extra_prn(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_prn(_7);
    return _8;
}

String Uint16Extra_str(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_str(_7);
    return _8;
}

Uint32 Uint32_blit(Uint32 x) {
    Uint32 _7 = x; // From the 'the' function.
    return _7;
}

int Uint32_hash(Uint32* k) {
    Uint32 _8 = Uint32_copy(k);
    Long _9 = Uint32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint32_prn(Uint32 a) {
    String _6 = Uint32_str(a);
    return _6;
}

Uint32 Uint32_zero() {
    Uint32 _5 = Uint32_from_MINUS_long(0l);
    return _5;
}

bool Uint32Extra__EQ_(Uint32* a, Uint32* b) {
    Uint32 _8 = Uint32_copy(a);
    Uint32 _11 = Uint32_copy(b);
    bool _12 = Uint32__EQ_(_8, _11);
    return _12;
}

String Uint32Extra_prn(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_prn(_7);
    return _8;
}

String Uint32Extra_str(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_str(_7);
    return _8;
}

Uint64 Uint64_blit(Uint64 x) {
    Uint64 _7 = x; // From the 'the' function.
    return _7;
}

int Uint64_hash(Uint64* k) {
    Uint64 _8 = Uint64_copy(k);
    Long _9 = Uint64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint64_prn(Uint64 a) {
    String _6 = Uint64_str(a);
    return _6;
}

Uint64 Uint64_zero() {
    Uint64 _5 = Uint64_from_MINUS_long(0l);
    return _5;
}

bool Uint64Extra__EQ_(Uint64* a, Uint64* b) {
    Uint64 _8 = Uint64_copy(a);
    Uint64 _11 = Uint64_copy(b);
    bool _12 = Uint64__EQ_(_8, _11);
    return _12;
}

String Uint64Extra_prn(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_prn(_7);
    return _8;
}

String Uint64Extra_str(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_str(_7);
    return _8;
}

Uint8 Uint8_blit(Uint8 x) {
    Uint8 _7 = x; // From the 'the' function.
    return _7;
}

int Uint8_hash(Uint8* k) {
    Uint8 _8 = Uint8_copy(k);
    Long _9 = Uint8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint8_prn(Uint8 a) {
    String _6 = Uint8_str(a);
    return _6;
}

Uint8 Uint8_zero() {
    Uint8 _5 = Uint8_from_MINUS_long(0l);
    return _5;
}

bool Uint8Extra__EQ_(Uint8* a, Uint8* b) {
    Uint8 _8 = Uint8_copy(a);
    Uint8 _11 = Uint8_copy(b);
    bool _12 = Uint8__EQ_(_8, _11);
    return _12;
}

String Uint8Extra_prn(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_prn(_7);
    return _8;
}

String Uint8Extra_str(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_str(_7);
    return _8;
}

bool Unit__EQ_() {
    return true;
}

void Unit_copy() {
    /* () */
}

String Unit_prn() {
    static String _5 = "()";
    String *_5_ref = &_5;
    String _6 = String_copy(_5_ref);
    return _6;
}

void Unit_zero() {
    /* () */
}

bool UnitRef__EQ_() {
    return true;
}

Vec3 Vec3_add(Vec3* a, Vec3* b) {
    double* _10 = Vec3_x(a);
    double _11 = Double_copy(_10);
    double* _15 = Vec3_x(b);
    double _16 = Double_copy(_15);
    double _17 = Double__PLUS_(_11, _16);
    double* _22 = Vec3_y(a);
    double _23 = Double_copy(_22);
    double* _27 = Vec3_y(b);
    double _28 = Double_copy(_27);
    double _29 = Double__PLUS_(_23, _28);
    double* _34 = Vec3_z(a);
    double _35 = Double_copy(_34);
    double* _39 = Vec3_z(b);
    double _40 = Double_copy(_39);
    double _41 = Double__PLUS_(_35, _40);
    Vec3 _42 = Vec3_init(_17, _29, _41);
    return _42;
}

Vec3 Vec3_copy(Vec3* pRef) {
    Vec3 copy = *pRef;
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
    return copy;
}

Vec3 Vec3_cross(Vec3* a, Vec3* b) {
    double* _11 = Vec3_y(a);
    double _12 = Double_copy(_11);
    double* _16 = Vec3_z(b);
    double _17 = Double_copy(_16);
    double _18 = Double__MUL_(_12, _17);
    double* _23 = Vec3_z(a);
    double _24 = Double_copy(_23);
    double* _28 = Vec3_y(b);
    double _29 = Double_copy(_28);
    double _30 = Double__MUL_(_24, _29);
    double _31 = Double__MINUS_(_18, _30);
    double* _37 = Vec3_z(a);
    double _38 = Double_copy(_37);
    double* _42 = Vec3_x(b);
    double _43 = Double_copy(_42);
    double _44 = Double__MUL_(_38, _43);
    double* _49 = Vec3_x(a);
    double _50 = Double_copy(_49);
    double* _54 = Vec3_z(b);
    double _55 = Double_copy(_54);
    double _56 = Double__MUL_(_50, _55);
    double _57 = Double__MINUS_(_44, _56);
    double* _63 = Vec3_x(a);
    double _64 = Double_copy(_63);
    double* _68 = Vec3_y(b);
    double _69 = Double_copy(_68);
    double _70 = Double__MUL_(_64, _69);
    double* _75 = Vec3_y(a);
    double _76 = Double_copy(_75);
    double* _80 = Vec3_x(b);
    double _81 = Double_copy(_80);
    double _82 = Double__MUL_(_76, _81);
    double _83 = Double__MINUS_(_70, _82);
    Vec3 _84 = Vec3_init(_31, _57, _83);
    return _84;
}

void Vec3_delete(Vec3 p) {
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
}

double Vec3_dot(Vec3* a, Vec3* b) {
    double* _11 = Vec3_x(a);
    double _12 = Double_copy(_11);
    double* _16 = Vec3_x(b);
    double _17 = Double_copy(_16);
    double _18 = Double__MUL_(_12, _17);
    double* _23 = Vec3_y(a);
    double _24 = Double_copy(_23);
    double* _28 = Vec3_y(b);
    double _29 = Double_copy(_28);
    double _30 = Double__MUL_(_24, _29);
    double _31 = Double__PLUS_(_18, _30);
    double* _36 = Vec3_z(a);
    double _37 = Double_copy(_36);
    double* _41 = Vec3_z(b);
    double _42 = Double_copy(_41);
    double _43 = Double__MUL_(_37, _42);
    double _44 = Double__PLUS_(_31, _43);
    return _44;
}

Vec3 Vec3_init(double x, double y, double z) {
    Vec3 instance;
    instance.x = x;
    instance.y = y;
    instance.z = z;
    return instance;
}

double Vec3_mag(Vec3* v) {
    double _7 = Vec3_mag_MINUS_sq(v);
    double _8 = Double_sqrt(_7);
    return _8;
}

double Vec3_mag_MINUS_sq(Vec3* v) {
    double _7 = Vec3_dot(v, v);
    return _7;
}

Vec3 Vec3_mul(Vec3* v, double s) {
    double* _10 = Vec3_x(v);
    double _11 = Double_copy(_10);
    double _13 = Double__MUL_(_11, s);
    double* _18 = Vec3_y(v);
    double _19 = Double_copy(_18);
    double _21 = Double__MUL_(_19, s);
    double* _26 = Vec3_z(v);
    double _27 = Double_copy(_26);
    double _29 = Double__MUL_(_27, s);
    Vec3 _30 = Vec3_init(_13, _21, _29);
    return _30;
}

Vec3 Vec3_new(double x, double y, double z) {
    Vec3 _10 = Vec3_init(x, y, z);
    return _10;
}

Vec3 Vec3_normalize(Vec3* v) {
    Vec3 _30;
    /* let */ {
        double _8 = Vec3_mag(v);
        double m = _8;
        Vec3 _29;
        bool _14 = Double__GT_(m, 0.0);
        if (_14) {
            double _21 = Double__DIV_(1.0, m);
            Vec3 _22 = Vec3_mul(v, _21);
            Vec3 _23 = _22;
            _29 = _23;
        } else {
            Vec3 _27 = Vec3_copy(v);
            Vec3 _28 = _27;
            _29 = _28;
        }
        _30 = _29;
    }
    return _30;
}

String Vec3_prn(Vec3* v) {
    static String _9 = "(";
    String *_9_ref = &_9;
    String _10 = String_str(_9_ref);
    String* _11 = &_10; // ref
    double* _20 = Vec3_x(v);
    double _21 = Double_copy(_20);
    String _22 = Double_str(_21);
    String _23 = StringCopy_str(_22);
    String* _24 = &_23; // ref
    static String _29 = ", ";
    String *_29_ref = &_29;
    String _30 = String_str(_29_ref);
    String* _31 = &_30; // ref
    double* _40 = Vec3_y(v);
    double _41 = Double_copy(_40);
    String _42 = Double_str(_41);
    String _43 = StringCopy_str(_42);
    String* _44 = &_43; // ref
    static String _49 = ", ";
    String *_49_ref = &_49;
    String _50 = String_str(_49_ref);
    String* _51 = &_50; // ref
    double* _60 = Vec3_z(v);
    double _61 = Double_copy(_60);
    String _62 = Double_str(_61);
    String _63 = StringCopy_str(_62);
    String* _64 = &_63; // ref
    static String _67 = ")";
    String *_67_ref = &_67;
    String _68 = String_str(_67_ref);
    String* _69 = &_68; // ref
    String _70 = String_append(_64, _69);
    String* _71 = &_70; // ref
    String _72 = String_append(_51, _71);
    String* _73 = &_72; // ref
    String _74 = String_append(_44, _73);
    String* _75 = &_74; // ref
    String _76 = String_append(_31, _75);
    String* _77 = &_76; // ref
    String _78 = String_append(_24, _77);
    String* _79 = &_78; // ref
    String _80 = String_append(_11, _79);
    String* _81 = &_80; // ref
    String _82 = String_copy(_81);
    String_delete(_10);
    String_delete(_23);
    String_delete(_30);
    String_delete(_43);
    String_delete(_50);
    String_delete(_63);
    String_delete(_68);
    String_delete(_70);
    String_delete(_72);
    String_delete(_74);
    String_delete(_76);
    String_delete(_78);
    String_delete(_80);
    return _82;
}

Vec3 Vec3_set_MINUS_x(Vec3 p, double newValue) {
    /* Ignore non-managed member 'x' : Double */
    p.x = newValue;
    return p;
}


void Vec3_set_MINUS_x_BANG_(Vec3* pRef, double newValue) {
    /* Ignore non-managed member 'x' : Double */
    pRef->x = newValue;
}


Vec3 Vec3_set_MINUS_y(Vec3 p, double newValue) {
    /* Ignore non-managed member 'y' : Double */
    p.y = newValue;
    return p;
}


void Vec3_set_MINUS_y_BANG_(Vec3* pRef, double newValue) {
    /* Ignore non-managed member 'y' : Double */
    pRef->y = newValue;
}


Vec3 Vec3_set_MINUS_z(Vec3 p, double newValue) {
    /* Ignore non-managed member 'z' : Double */
    p.z = newValue;
    return p;
}


void Vec3_set_MINUS_z_BANG_(Vec3* pRef, double newValue) {
    /* Ignore non-managed member 'z' : Double */
    pRef->z = newValue;
}


String Vec3_str(Vec3 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Vec3");
  temp = Double_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  sprintf(bufferPtr, "(%s ", "Vec3");
  bufferPtr += strlen("Vec3") + 2;

  temp = Double_prn(p->x);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z);
  sprintf(bufferPtr, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  sprintf(bufferPtr, ")");
  return buffer;
}

Vec3 Vec3_sub(Vec3* a, Vec3* b) {
    double* _10 = Vec3_x(a);
    double _11 = Double_copy(_10);
    double* _15 = Vec3_x(b);
    double _16 = Double_copy(_15);
    double _17 = Double__MINUS_(_11, _16);
    double* _22 = Vec3_y(a);
    double _23 = Double_copy(_22);
    double* _27 = Vec3_y(b);
    double _28 = Double_copy(_27);
    double _29 = Double__MINUS_(_23, _28);
    double* _34 = Vec3_z(a);
    double _35 = Double_copy(_34);
    double* _39 = Vec3_z(b);
    double _40 = Double_copy(_39);
    double _41 = Double__MINUS_(_35, _40);
    Vec3 _42 = Vec3_init(_17, _29, _41);
    return _42;
}

Vec3 Vec3_update_MINUS_x(Vec3 p, Lambda *updater) {
    p.x = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.x) : ((Fn__double_double)(*updater).callback)(p.x);
    return p;
}


Vec3 Vec3_update_MINUS_y(Vec3 p, Lambda *updater) {
    p.y = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.y) : ((Fn__double_double)(*updater).callback)(p.y);
    return p;
}


Vec3 Vec3_update_MINUS_z(Vec3 p, Lambda *updater) {
    p.z = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.z) : ((Fn__double_double)(*updater).callback)(p.z);
    return p;
}


double* Vec3_x(Vec3* p) { return (&(p->x)); }

double* Vec3_y(Vec3* p) { return (&(p->y)); }

double* Vec3_z(Vec3* p) { return (&(p->z)); }

Vec3 Vec3_zero() {
    Vec3 _7 = Vec3_init(0.0, 0.0, 0.0);
    return _7;
}

int id__int(int x) {
    return x;
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    int _221;
    /* let */ {
        TestState _9 = Test_State_init(0, 0);
        TestState* _10 = &_9; // ref
        TestState* camera_MINUS_test = _10;
        TestState _209;
        /* let */ {
            TestState _21 = Test_State_init(0, 0);
            TestState state = _21;
            /* let */ {
                Vec3 _30 = Vec3_new(1.0, 2.0, 3.0);
                Vec3 v1 = _30;
                Vec3 _36 = Vec3_new(4.0, 5.0, 6.0);
                Vec3 v2 = _36;
                Vec3* _41 = &v1; // ref
                Vec3* _44 = &v2; // ref
                Vec3 _45 = Vec3_add(_41, _44);
                Vec3 v3 = _45;
                TestState* _52 = &state; // ref
                Vec3* _58 = &v3; // ref
                double* _59 = Vec3_x(_58);
                double _60 = Double_copy(_59);
                static String _61 = "Vec3 addition works";
                String *_61_ref = &_61;
                TestState _62 = Test_assert_MINUS_equal__double_String(_52, 5.0, _60, _61_ref);
                Test_State_delete(state);
                state = _62;  // Test.State = Test.State
                Vec3_delete(v1);
                Vec3_delete(v2);
                Vec3_delete(v3);
            }
            /* let */ {
                Mat4 _68 = Mat4_identity();
                Mat4 m = _68;
                Mat4* _73 = &m; // ref
                Array__float* _74 = Mat4_data(_73);
                Array__float* data = _74;
                TestState* _82 = &state; // ref
                float* _88 = Array_unsafe_MINUS_nth__float(data, 0);
                float _89 = Float_copy(_88);
                static String _90 = "Identity [0] is 1";
                String *_90_ref = &_90;
                TestState _91 = Test_assert_MINUS_equal__float_String(_82, 1.0f, _89, _90_ref);
                Test_State_delete(state);
                state = _91;  // Test.State = Test.State
                TestState* _98 = &state; // ref
                float* _104 = Array_unsafe_MINUS_nth__float(data, 5);
                float _105 = Float_copy(_104);
                static String _106 = "Identity [5] is 1";
                String *_106_ref = &_106;
                TestState _107 = Test_assert_MINUS_equal__float_String(_98, 1.0f, _105, _106_ref);
                Test_State_delete(state);
                state = _107;  // Test.State = Test.State
                TestState* _114 = &state; // ref
                float* _120 = Array_unsafe_MINUS_nth__float(data, 10);
                float _121 = Float_copy(_120);
                static String _122 = "Identity [10] is 1";
                String *_122_ref = &_122;
                TestState _123 = Test_assert_MINUS_equal__float_String(_114, 1.0f, _121, _122_ref);
                Test_State_delete(state);
                state = _123;  // Test.State = Test.State
                TestState* _130 = &state; // ref
                float* _136 = Array_unsafe_MINUS_nth__float(data, 15);
                float _137 = Float_copy(_136);
                static String _138 = "Identity [15] is 1";
                String *_138_ref = &_138;
                TestState _139 = Test_assert_MINUS_equal__float_String(_130, 1.0f, _137, _138_ref);
                Test_State_delete(state);
                state = _139;  // Test.State = Test.State
                Mat4_delete(m);
            }
            /* let */ {
                Vec3 _149 = Vec3_new(0.0, 0.0, 10.0);
                Vec3 pos = _149;
                Camera _156 = Camera_new(pos, -90.0, 0.0, 1.77);
                Camera cam = _156;
                Camera* _161 = &cam; // ref
                Mat4 _162 = Camera_look_MINUS_at(_161);
                Mat4 view = _162;
                Camera* _167 = &cam; // ref
                Mat4 _168 = Camera_perspective(_167);
                Mat4 proj = _168;
                TestState* _176 = &state; // ref
                Mat4* _182 = &view; // ref
                Array__float* _183 = Mat4_data(_182);
                int _184 = Array_length__float(_183);
                static String _185 = "View matrix has 16 elements";
                String *_185_ref = &_185;
                TestState _186 = Test_assert_MINUS_equal__int_String(_176, 16, _184, _185_ref);
                Test_State_delete(state);
                state = _186;  // Test.State = Test.State
                TestState* _193 = &state; // ref
                Mat4* _199 = &proj; // ref
                Array__float* _200 = Mat4_data(_199);
                int _201 = Array_length__float(_200);
                static String _202 = "Proj matrix has 16 elements";
                String *_202_ref = &_202;
                TestState _203 = Test_assert_MINUS_equal__int_String(_193, 16, _201, _202_ref);
                Test_State_delete(state);
                state = _203;  // Test.State = Test.State
                Camera_delete(cam);
                Mat4_delete(proj);
                Mat4_delete(view);
            }
            TestState _208 = state;
            _209 = _208;
        }
        TestState* _210 = &_209; // ref
        camera_MINUS_test = _210;  // (Ref Test.State r152) = (Ref Test.State r152)
        Test_print_MINUS_test_MINUS_results(camera_MINUS_test);
        int* _218 = Test_State_failed(camera_MINUS_test);
        int _219 = Int_copy(_218);
        int _220 = _219;
        _221 = _220;
        Test_State_delete(_209);
        Test_State_delete(_9);
    }
    return _221;
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

int min__int(int a, int b) {
    int _16;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool not(bool a) {
    bool _6 = Bool_not(a);
    return _6;
}

bool null_QMARK___CChar(CChar* p) {
    CChar* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__CChar(NULL, _11);
    return _12;
}

bool null_QMARK___FILE(FILE* p) {
    FILE* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__FILE(NULL, _11);
    return _12;
}

