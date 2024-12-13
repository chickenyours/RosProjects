#include <ros/ros.h>
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char** argv)
{
    // 初始化 ROS 节点
    ros::init(argc, argv, "talk");

    // 创建一个 NodeHandle 对象
    ros::NodeHandle nh;
    
    //create a publisher
    ros::Publisher pub = nh.advertise<std_msgs::String>("hh",10);
    std_msgs::String msg; 
    ros::Rate rate(10);
    int count = 0;
    ros::Duration(3).sleep();
    while(ros::ok()){
        count++;
        std::stringstream ss;
        ss<<"hello-->"<<count;
        msg.data = ss.str();
        pub.publish(msg);
        rate.sleep();
    }

    return 0;
}
