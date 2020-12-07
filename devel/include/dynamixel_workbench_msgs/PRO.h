// Generated by gencpp from file dynamixel_workbench_msgs/PRO.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_PRO_H
#define DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_PRO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_workbench_msgs
{
template <class ContainerAllocator>
struct PRO_
{
  typedef PRO_<ContainerAllocator> Type;

  PRO_()
    : Model_Number(0)
    , Firmware_Version(0)
    , ID(0)
    , Baud_Rate(0)
    , Return_Delay_Time(0)
    , Operating_Mode(0)
    , Moving_Threshold(0)
    , Temperature_Limit(0)
    , Max_Voltage_Limit(0)
    , Min_Voltage_Limit(0)
    , Acceleration_Limit(0)
    , Torque_Limit(0)
    , Velocity_Limit(0)
    , Max_Position_Limit(0)
    , Min_Position_Limit(0)
    , External_Port_Mode_1(0)
    , External_Port_Mode_2(0)
    , External_Port_Mode_3(0)
    , External_Port_Mode_4(0)
    , Shutdown(0)
    , Torque_Enable(0)
    , LED_RED(0)
    , LED_GREEN(0)
    , LED_BLUE(0)
    , Velocity_I_Gain(0)
    , Velocity_P_Gain(0)
    , Position_P_Gain(0)
    , Goal_Position(0)
    , Goal_Velocity(0)
    , Goal_Torque(0)
    , Goal_Acceleration(0)
    , Moving(0)
    , Present_Position(0)
    , Present_Velocity(0)
    , Present_Current(0)
    , Present_Input_Voltage(0)
    , Present_Temperature(0)
    , Registered_Instruction(0)
    , Status_Return_Level(0)
    , Hardware_Error_Status(0)  {
    }
  PRO_(const ContainerAllocator& _alloc)
    : Model_Number(0)
    , Firmware_Version(0)
    , ID(0)
    , Baud_Rate(0)
    , Return_Delay_Time(0)
    , Operating_Mode(0)
    , Moving_Threshold(0)
    , Temperature_Limit(0)
    , Max_Voltage_Limit(0)
    , Min_Voltage_Limit(0)
    , Acceleration_Limit(0)
    , Torque_Limit(0)
    , Velocity_Limit(0)
    , Max_Position_Limit(0)
    , Min_Position_Limit(0)
    , External_Port_Mode_1(0)
    , External_Port_Mode_2(0)
    , External_Port_Mode_3(0)
    , External_Port_Mode_4(0)
    , Shutdown(0)
    , Torque_Enable(0)
    , LED_RED(0)
    , LED_GREEN(0)
    , LED_BLUE(0)
    , Velocity_I_Gain(0)
    , Velocity_P_Gain(0)
    , Position_P_Gain(0)
    , Goal_Position(0)
    , Goal_Velocity(0)
    , Goal_Torque(0)
    , Goal_Acceleration(0)
    , Moving(0)
    , Present_Position(0)
    , Present_Velocity(0)
    , Present_Current(0)
    , Present_Input_Voltage(0)
    , Present_Temperature(0)
    , Registered_Instruction(0)
    , Status_Return_Level(0)
    , Hardware_Error_Status(0)  {
  (void)_alloc;
    }



   typedef uint16_t _Model_Number_type;
  _Model_Number_type Model_Number;

   typedef uint8_t _Firmware_Version_type;
  _Firmware_Version_type Firmware_Version;

   typedef uint8_t _ID_type;
  _ID_type ID;

   typedef uint8_t _Baud_Rate_type;
  _Baud_Rate_type Baud_Rate;

   typedef uint8_t _Return_Delay_Time_type;
  _Return_Delay_Time_type Return_Delay_Time;

   typedef uint8_t _Operating_Mode_type;
  _Operating_Mode_type Operating_Mode;

   typedef uint32_t _Moving_Threshold_type;
  _Moving_Threshold_type Moving_Threshold;

   typedef uint8_t _Temperature_Limit_type;
  _Temperature_Limit_type Temperature_Limit;

   typedef uint16_t _Max_Voltage_Limit_type;
  _Max_Voltage_Limit_type Max_Voltage_Limit;

   typedef uint16_t _Min_Voltage_Limit_type;
  _Min_Voltage_Limit_type Min_Voltage_Limit;

   typedef uint32_t _Acceleration_Limit_type;
  _Acceleration_Limit_type Acceleration_Limit;

   typedef uint16_t _Torque_Limit_type;
  _Torque_Limit_type Torque_Limit;

   typedef uint32_t _Velocity_Limit_type;
  _Velocity_Limit_type Velocity_Limit;

   typedef int32_t _Max_Position_Limit_type;
  _Max_Position_Limit_type Max_Position_Limit;

   typedef int32_t _Min_Position_Limit_type;
  _Min_Position_Limit_type Min_Position_Limit;

   typedef uint8_t _External_Port_Mode_1_type;
  _External_Port_Mode_1_type External_Port_Mode_1;

   typedef uint8_t _External_Port_Mode_2_type;
  _External_Port_Mode_2_type External_Port_Mode_2;

   typedef uint8_t _External_Port_Mode_3_type;
  _External_Port_Mode_3_type External_Port_Mode_3;

   typedef uint8_t _External_Port_Mode_4_type;
  _External_Port_Mode_4_type External_Port_Mode_4;

   typedef uint8_t _Shutdown_type;
  _Shutdown_type Shutdown;

   typedef uint8_t _Torque_Enable_type;
  _Torque_Enable_type Torque_Enable;

   typedef uint8_t _LED_RED_type;
  _LED_RED_type LED_RED;

   typedef uint8_t _LED_GREEN_type;
  _LED_GREEN_type LED_GREEN;

   typedef uint8_t _LED_BLUE_type;
  _LED_BLUE_type LED_BLUE;

   typedef uint16_t _Velocity_I_Gain_type;
  _Velocity_I_Gain_type Velocity_I_Gain;

   typedef uint16_t _Velocity_P_Gain_type;
  _Velocity_P_Gain_type Velocity_P_Gain;

   typedef uint16_t _Position_P_Gain_type;
  _Position_P_Gain_type Position_P_Gain;

   typedef int32_t _Goal_Position_type;
  _Goal_Position_type Goal_Position;

   typedef uint32_t _Goal_Velocity_type;
  _Goal_Velocity_type Goal_Velocity;

   typedef uint16_t _Goal_Torque_type;
  _Goal_Torque_type Goal_Torque;

   typedef int32_t _Goal_Acceleration_type;
  _Goal_Acceleration_type Goal_Acceleration;

   typedef uint8_t _Moving_type;
  _Moving_type Moving;

   typedef int32_t _Present_Position_type;
  _Present_Position_type Present_Position;

   typedef uint32_t _Present_Velocity_type;
  _Present_Velocity_type Present_Velocity;

   typedef uint16_t _Present_Current_type;
  _Present_Current_type Present_Current;

   typedef uint16_t _Present_Input_Voltage_type;
  _Present_Input_Voltage_type Present_Input_Voltage;

   typedef uint8_t _Present_Temperature_type;
  _Present_Temperature_type Present_Temperature;

   typedef uint8_t _Registered_Instruction_type;
  _Registered_Instruction_type Registered_Instruction;

   typedef uint8_t _Status_Return_Level_type;
  _Status_Return_Level_type Status_Return_Level;

   typedef uint8_t _Hardware_Error_Status_type;
  _Hardware_Error_Status_type Hardware_Error_Status;





  typedef boost::shared_ptr< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> const> ConstPtr;

}; // struct PRO_

typedef ::dynamixel_workbench_msgs::PRO_<std::allocator<void> > PRO;

typedef boost::shared_ptr< ::dynamixel_workbench_msgs::PRO > PROPtr;
typedef boost::shared_ptr< ::dynamixel_workbench_msgs::PRO const> PROConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator1> & lhs, const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator2> & rhs)
{
  return lhs.Model_Number == rhs.Model_Number &&
    lhs.Firmware_Version == rhs.Firmware_Version &&
    lhs.ID == rhs.ID &&
    lhs.Baud_Rate == rhs.Baud_Rate &&
    lhs.Return_Delay_Time == rhs.Return_Delay_Time &&
    lhs.Operating_Mode == rhs.Operating_Mode &&
    lhs.Moving_Threshold == rhs.Moving_Threshold &&
    lhs.Temperature_Limit == rhs.Temperature_Limit &&
    lhs.Max_Voltage_Limit == rhs.Max_Voltage_Limit &&
    lhs.Min_Voltage_Limit == rhs.Min_Voltage_Limit &&
    lhs.Acceleration_Limit == rhs.Acceleration_Limit &&
    lhs.Torque_Limit == rhs.Torque_Limit &&
    lhs.Velocity_Limit == rhs.Velocity_Limit &&
    lhs.Max_Position_Limit == rhs.Max_Position_Limit &&
    lhs.Min_Position_Limit == rhs.Min_Position_Limit &&
    lhs.External_Port_Mode_1 == rhs.External_Port_Mode_1 &&
    lhs.External_Port_Mode_2 == rhs.External_Port_Mode_2 &&
    lhs.External_Port_Mode_3 == rhs.External_Port_Mode_3 &&
    lhs.External_Port_Mode_4 == rhs.External_Port_Mode_4 &&
    lhs.Shutdown == rhs.Shutdown &&
    lhs.Torque_Enable == rhs.Torque_Enable &&
    lhs.LED_RED == rhs.LED_RED &&
    lhs.LED_GREEN == rhs.LED_GREEN &&
    lhs.LED_BLUE == rhs.LED_BLUE &&
    lhs.Velocity_I_Gain == rhs.Velocity_I_Gain &&
    lhs.Velocity_P_Gain == rhs.Velocity_P_Gain &&
    lhs.Position_P_Gain == rhs.Position_P_Gain &&
    lhs.Goal_Position == rhs.Goal_Position &&
    lhs.Goal_Velocity == rhs.Goal_Velocity &&
    lhs.Goal_Torque == rhs.Goal_Torque &&
    lhs.Goal_Acceleration == rhs.Goal_Acceleration &&
    lhs.Moving == rhs.Moving &&
    lhs.Present_Position == rhs.Present_Position &&
    lhs.Present_Velocity == rhs.Present_Velocity &&
    lhs.Present_Current == rhs.Present_Current &&
    lhs.Present_Input_Voltage == rhs.Present_Input_Voltage &&
    lhs.Present_Temperature == rhs.Present_Temperature &&
    lhs.Registered_Instruction == rhs.Registered_Instruction &&
    lhs.Status_Return_Level == rhs.Status_Return_Level &&
    lhs.Hardware_Error_Status == rhs.Hardware_Error_Status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator1> & lhs, const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_workbench_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0387b4038d0572ab0d83e71bcb8fa5e";
  }

  static const char* value(const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0387b4038d0572aULL;
  static const uint64_t static_value2 = 0xb0d83e71bcb8fa5eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_workbench_msgs/PRO";
  }

  static const char* value(const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is compatible with control table of Dynamixel PRO L42-10-S300-R\n"
"# If you want to specific information about control table, please follow the link (http://emanual.robotis.com/)\n"
"\n"
"uint16 Model_Number\n"
"uint8  Firmware_Version\n"
"uint8  ID\n"
"uint8  Baud_Rate\n"
"uint8  Return_Delay_Time\n"
"uint8  Operating_Mode\n"
"uint32 Moving_Threshold\n"
"uint8  Temperature_Limit\n"
"uint16 Max_Voltage_Limit\n"
"uint16 Min_Voltage_Limit\n"
"uint32 Acceleration_Limit\n"
"uint16 Torque_Limit\n"
"uint32 Velocity_Limit\n"
"int32  Max_Position_Limit\n"
"int32  Min_Position_Limit\n"
"uint8  External_Port_Mode_1\n"
"uint8  External_Port_Mode_2\n"
"uint8  External_Port_Mode_3\n"
"uint8  External_Port_Mode_4\n"
"uint8  Shutdown\n"
"\n"
"uint8  Torque_Enable\n"
"uint8  LED_RED\n"
"uint8  LED_GREEN\n"
"uint8  LED_BLUE\n"
"uint16 Velocity_I_Gain\n"
"uint16 Velocity_P_Gain\n"
"uint16 Position_P_Gain\n"
"int32  Goal_Position\n"
"uint32 Goal_Velocity\n"
"uint16 Goal_Torque\n"
"int32  Goal_Acceleration\n"
"uint8  Moving\n"
"int32  Present_Position\n"
"uint32 Present_Velocity\n"
"uint16 Present_Current\n"
"uint16 Present_Input_Voltage\n"
"uint8  Present_Temperature\n"
"uint8  Registered_Instruction\n"
"uint8  Status_Return_Level\n"
"uint8  Hardware_Error_Status\n"
"\n"
"\n"
;
  }

  static const char* value(const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Model_Number);
      stream.next(m.Firmware_Version);
      stream.next(m.ID);
      stream.next(m.Baud_Rate);
      stream.next(m.Return_Delay_Time);
      stream.next(m.Operating_Mode);
      stream.next(m.Moving_Threshold);
      stream.next(m.Temperature_Limit);
      stream.next(m.Max_Voltage_Limit);
      stream.next(m.Min_Voltage_Limit);
      stream.next(m.Acceleration_Limit);
      stream.next(m.Torque_Limit);
      stream.next(m.Velocity_Limit);
      stream.next(m.Max_Position_Limit);
      stream.next(m.Min_Position_Limit);
      stream.next(m.External_Port_Mode_1);
      stream.next(m.External_Port_Mode_2);
      stream.next(m.External_Port_Mode_3);
      stream.next(m.External_Port_Mode_4);
      stream.next(m.Shutdown);
      stream.next(m.Torque_Enable);
      stream.next(m.LED_RED);
      stream.next(m.LED_GREEN);
      stream.next(m.LED_BLUE);
      stream.next(m.Velocity_I_Gain);
      stream.next(m.Velocity_P_Gain);
      stream.next(m.Position_P_Gain);
      stream.next(m.Goal_Position);
      stream.next(m.Goal_Velocity);
      stream.next(m.Goal_Torque);
      stream.next(m.Goal_Acceleration);
      stream.next(m.Moving);
      stream.next(m.Present_Position);
      stream.next(m.Present_Velocity);
      stream.next(m.Present_Current);
      stream.next(m.Present_Input_Voltage);
      stream.next(m.Present_Temperature);
      stream.next(m.Registered_Instruction);
      stream.next(m.Status_Return_Level);
      stream.next(m.Hardware_Error_Status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PRO_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_workbench_msgs::PRO_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_workbench_msgs::PRO_<ContainerAllocator>& v)
  {
    s << indent << "Model_Number: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Model_Number);
    s << indent << "Firmware_Version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Firmware_Version);
    s << indent << "ID: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ID);
    s << indent << "Baud_Rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Baud_Rate);
    s << indent << "Return_Delay_Time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Return_Delay_Time);
    s << indent << "Operating_Mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Operating_Mode);
    s << indent << "Moving_Threshold: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Moving_Threshold);
    s << indent << "Temperature_Limit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Temperature_Limit);
    s << indent << "Max_Voltage_Limit: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Max_Voltage_Limit);
    s << indent << "Min_Voltage_Limit: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Min_Voltage_Limit);
    s << indent << "Acceleration_Limit: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Acceleration_Limit);
    s << indent << "Torque_Limit: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Torque_Limit);
    s << indent << "Velocity_Limit: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Velocity_Limit);
    s << indent << "Max_Position_Limit: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Max_Position_Limit);
    s << indent << "Min_Position_Limit: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Min_Position_Limit);
    s << indent << "External_Port_Mode_1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.External_Port_Mode_1);
    s << indent << "External_Port_Mode_2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.External_Port_Mode_2);
    s << indent << "External_Port_Mode_3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.External_Port_Mode_3);
    s << indent << "External_Port_Mode_4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.External_Port_Mode_4);
    s << indent << "Shutdown: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Shutdown);
    s << indent << "Torque_Enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Torque_Enable);
    s << indent << "LED_RED: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LED_RED);
    s << indent << "LED_GREEN: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LED_GREEN);
    s << indent << "LED_BLUE: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LED_BLUE);
    s << indent << "Velocity_I_Gain: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Velocity_I_Gain);
    s << indent << "Velocity_P_Gain: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Velocity_P_Gain);
    s << indent << "Position_P_Gain: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Position_P_Gain);
    s << indent << "Goal_Position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Goal_Position);
    s << indent << "Goal_Velocity: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Goal_Velocity);
    s << indent << "Goal_Torque: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Goal_Torque);
    s << indent << "Goal_Acceleration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Goal_Acceleration);
    s << indent << "Moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Moving);
    s << indent << "Present_Position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Present_Position);
    s << indent << "Present_Velocity: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Present_Velocity);
    s << indent << "Present_Current: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Present_Current);
    s << indent << "Present_Input_Voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Present_Input_Voltage);
    s << indent << "Present_Temperature: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Present_Temperature);
    s << indent << "Registered_Instruction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Registered_Instruction);
    s << indent << "Status_Return_Level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Status_Return_Level);
    s << indent << "Hardware_Error_Status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Hardware_Error_Status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_PRO_H
