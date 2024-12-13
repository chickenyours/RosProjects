#include <ros/ros.h>
#include "turtlesim/Pose.h"

void doMsg(const turtlesim::Pose::ConstPtr& pose){
    ROS_INFO("%lf,%lf",pose->x,pose->y);
}

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"getwg");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("/turtle1/pose",10,doMsg);
    ros::spin();
    return 0;
}
