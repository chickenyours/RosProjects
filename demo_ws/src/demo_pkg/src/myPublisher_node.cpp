#include <ros/ros.h>
#include "MyPublisher.hpp"
int main(int argc, char** argv) {
    ros::init(argc, argv, "myPublisher_node");
    ros::NodeHandle nh;
    MyPublisher publisher(nh);
    ros::spin();
    return 0;
}