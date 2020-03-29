#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <moveit_trajectory_execution/moveit_trackingAction.h>
#include <trajectory_execution_msgs/PointArray.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Pose.h>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit_visual_tools/moveit_visual_tools.h>

// ROS header files 
#include <tf/tf.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <std_msgs/Float32.h>

#include <signal.h>
#include <cmath>

geometry_msgs::PoseArray target_points;
trajectory_execution_msgs::PointArray control_points;
