#ifndef MY_SUBSCRIBER_HPP
#define MY_SUBSCRIBER_HPP
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <demo_pkg/RobotStatus.h>
class MySubscriber {
public:
MySubscriber(ros::NodeHandle& nh);
void callback(const demo_pkg::RobotStatusConstPtr& msg);
private:
ros::NodeHandle nh_;
ros::Subscriber sub_;
};

#endif // MY_SUBSCRIBER_HPP