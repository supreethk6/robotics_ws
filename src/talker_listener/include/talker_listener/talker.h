/******************************************************************************
 * 
 * @title: talker.h
 * @author: Supreeth Kumar K
 * @brief: This will create a publisher node which will broadcast messages
 *
 ******************************************************************************/

#ifndef TALKER_H
#define TALKER_H

#include <iostream>
#include "ros/ros.h"

class Talker {
  public:  // methods
    Talker(ros::NodeHandle& nh);
    ~Talker();
    void advertise_pub();

  private:  // fields
    ros::NodeHandle nh_;
    ros::Publisher talker_pub;
};

#endif
