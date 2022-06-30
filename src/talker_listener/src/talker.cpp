/******************************************************************************
 * 
 * @title: talker.cpp
 * @author: Supreeth Kumar K
 * @brief: This will create a publisher node which will broadcast messages
 *
 ******************************************************************************/

#include "talker_listener/talker.h"

#include <iostream>
#include "ros/ros.h"
#include <ros/console.h>
#include <std_msgs/String.h>

Talker::Talker(ros::NodeHandle &nh):nh_(nh) {
  ROS_INFO_STREAM("constructor");
  advertise_pub();
}

Talker::~Talker() {
  ROS_INFO_STREAM("destructor");
}

void Talker::advertise_pub() {
  talker_pub = nh_.advertise<std_msgs::String>("chatter", 1);
}

int main(int argc, char **argv) {

  ROS_INFO_STREAM("main");
  // Enable DEBUG logging in the initial release to aid in debugging any rare issues that pop up.
  if (ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Debug))
  {
    ros::console::notifyLoggerLevelsChanged();
  }

  ros::init(argc, argv, "talker");
  ros::NodeHandle nh;
}