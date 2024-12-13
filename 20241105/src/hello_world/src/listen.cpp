#include <ros/ros.h>
#include "std_msgs/String.h"
#include <sstream>

void DoMsg(const std_msgs::String::ConstPtr &msg){
    ROS_INFO("%s",msg->data.c_str());
}

int main(int argc, char** argv)
{
    // 初始化 ROS 节点
    ros::init(argc, argv, "listen");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("hh",10,DoMsg);

    ros::spin();

}