#include <ros/ros.h>
#include "MySubscriber.hpp"
int main(int argc, char** argv) {
    ros::init(argc, argv, "mySubscriber_node");
    ros::NodeHandle nh;
    MySubscriber subscriber(nh);
    ros::spin();
    return 0;
}