#include <ros/ros.h>
#include "geometry_msgs/Twist.h"

int main(int argc,char* argv[]){
    ros::init(argc,argv,"setwg");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",10);

    geometry_msgs::Twist msgs;

    msgs.linear.x = 1.0;
    msgs.linear.y = 0.0;
    msgs.linear.z = 0.0;
    msgs.angular.x = 0.0;
    msgs.angular.y = 0.0;
    msgs.angular.z = 0.5;

    ros::Rate r(10);

    while(ros::ok){
        pub.publish(msgs);
        r.sleep();
        ros::spinOnce();
    }
    return 0;

}