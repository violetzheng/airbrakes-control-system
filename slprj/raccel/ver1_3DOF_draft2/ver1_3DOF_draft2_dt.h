#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "uint64_T" , 17 , 8 } , {
"int64_T" , 18 , 8 } , { "uint_T" , 19 , 32 } , { "char_T" , 20 , 8 } , {
"uchar_T" , 21 , 8 } , { "time_T" , 22 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . hz2kmtqu1f ) , 0 , 0 , 66 } ,
{ ( char_T * ) ( & rtB . jlp2ppl0vn ) , 7 , 0 , 1 } , { ( char_T * ) ( & rtB
. gku0fw43pi ) , 8 , 0 , 6 } , { ( char_T * ) ( & rtB . gvg1dfussm .
odt0bd1y2u ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . n5ulon0gce . odt0bd1y2u
) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . jtzk2crbxn . heioiu1r3j ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtB . he3nztz2xz . odt0bd1y2u ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtB . ger0owotcqg . odt0bd1y2u ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtB . ll11mjwfrfq . heioiu1r3j ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtDW . e2hziedsbk ) , 0 , 0 , 150 } , { ( char_T * ) ( & rtDW . k22avhip4l .
LoggedData ) , 11 , 0 , 18 } , { ( char_T * ) ( & rtDW . jnncd2sq4w ) , 6 , 0
, 2 } , { ( char_T * ) ( & rtDW . evedzazbq1 ) , 7 , 0 , 6 } , { ( char_T * )
( & rtDW . mchbqbzbsu ) , 2 , 0 , 14 } , { ( char_T * ) ( & rtDW . gou0cyiqo0
) , 3 , 0 , 2 } , { ( char_T * ) ( & rtDW . hhl5e4wghu ) , 8 , 0 , 11 } , { (
char_T * ) ( & rtDW . gvg1dfussm . iwd5hf3e4b ) , 2 , 0 , 1 } , { ( char_T *
) ( & rtDW . gvg1dfussm . ncvavhwoml ) , 8 , 0 , 1 } , { ( char_T * ) ( &
rtDW . n5ulon0gce . iwd5hf3e4b ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
n5ulon0gce . ncvavhwoml ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jtzk2crbxn . fgmjumzbkr ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jtzk2crbxn . bxuyreg3bt ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
he3nztz2xz . iwd5hf3e4b ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
he3nztz2xz . ncvavhwoml ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ger0owotcqg . iwd5hf3e4b ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ger0owotcqg . ncvavhwoml ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ll11mjwfrfq . fgmjumzbkr ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ll11mjwfrfq . bxuyreg3bt ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 28U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . current_height ) , 0 , 0 , 33
} , { ( char_T * ) ( & rtP . DiscreteWindGustModel1_Gx ) , 8 , 0 , 6 } , { (
char_T * ) ( & rtP . pgw_Y0 ) , 0 , 0 , 1858 } , { ( char_T * ) ( & rtP .
MediumHighAltitudeIntensity_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) (
& rtP . gvg1dfussm . x_Y0 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP .
n5ulon0gce . x_Y0 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP . jtzk2crbxn .
x_Y0 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP . he3nztz2xz . x_Y0 ) , 0 , 0 ,
3 } , { ( char_T * ) ( & rtP . ger0owotcqg . x_Y0 ) , 0 , 0 , 3 } , { (
char_T * ) ( & rtP . ll11mjwfrfq . x_Y0 ) , 0 , 0 , 3 } } ; static
DataTypeTransitionTable rtPTransTable = { 10U , rtPTransitions } ;
