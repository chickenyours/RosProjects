#include <ros/ros.h>
#include "hello_world/person.h"
#include <stddef.h>
void DoMessage(const hello_world::person::ConstPtr& msg){
    ROS_INFO("%d",msg->a);
}


int main(int argc, char* argv[]){
    ros::init(argc,argv,"sub");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("hh",10,DoMessage); 
    ros::spin();
    return 1;
}